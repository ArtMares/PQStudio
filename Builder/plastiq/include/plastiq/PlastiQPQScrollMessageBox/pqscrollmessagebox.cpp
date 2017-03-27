#include "pqscrollmessagebox.h"

PQScrollMessageBox::PQScrollMessageBox(QMessageBox::Icon icon, QString const& title,
                                   QString const& text, QDialogButtonBox::StandardButtons buttons /*= QDialogButtonBox::Ok*/,
                                   QWidget* parent /*= 0*/) :
    QDialog(parent, Qt::Dialog | Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint)
{
    QLabel *iconLabel;

    label = new QLabel;
    label->setIndent(9);
    label->setTextInteractionFlags(Qt::TextInteractionFlags(style()->styleHint(QStyle::SH_MessageBox_TextInteractionFlags, 0, this)));
    label->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    label->hide();

    textEdit = new QTextEdit;
    textEdit->setTextInteractionFlags(Qt::TextInteractionFlags(style()->styleHint(QStyle::SH_MessageBox_TextInteractionFlags, 0, this)));
    textEdit->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    //label->setOpenExternalLinks(true);
    textEdit->setContentsMargins(2, 0, 0, 0);
    //label->setIndent(9);
    //textEdit->setStyleSheet("qproperty-alignment: AlignTop;");
    textEdit->setReadOnly(true);

    scroll = new QScrollArea(this);
    scroll->setGeometry(QRect(10, 20, 560, 430));
    scroll->setWidget(textEdit);
    scroll->setWidgetResizable(true);
    scroll->setAlignment(Qt::AlignTop);

    iconLabel = new QLabel;
    iconLabel->setPixmap(standardIcon((QMessageBox::Icon)icon));
    iconLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    buttonBox = new QDialogButtonBox(buttons);
    buttonBox->setCenterButtons(style()->styleHint(QStyle::SH_MessageBox_CenterButtons, 0, this));
    QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)),
                     this, SLOT(handle_buttonClicked(QAbstractButton*)));

    QGridLayout *grid = new QGridLayout;

    grid->addWidget(iconLabel, 0, 0, 2, 1, Qt::AlignTop);
    grid->addWidget(scroll, 0, 1, 1, 1);
    grid->addWidget(buttonBox, 1, 0, 1, 2);
    grid->setSizeConstraint(QLayout::SetNoConstraint);
    setLayout(grid);

    if (!title.isEmpty() || !text.isEmpty())
    {
        setWindowTitle(title);
        label->setText(text);
        textEdit->setHtml(text);
    }

    setModal(true);
}

QPixmap PQScrollMessageBox::standardIcon(QMessageBox::Icon icon)
{
    QStyle *style = this->style();
    int iconSize = style->pixelMetric(QStyle::PM_MessageBoxIconSize, 0, this);
    QIcon tmpIcon;
    switch (icon)
    {
    case QMessageBox::Information:
        tmpIcon = style->standardIcon(QStyle::SP_MessageBoxInformation, 0, this);
        break;
    case QMessageBox::Warning:
        tmpIcon = style->standardIcon(QStyle::SP_MessageBoxWarning, 0, this);
        break;
    case QMessageBox::Critical:
        tmpIcon = style->standardIcon(QStyle::SP_MessageBoxCritical, 0, this);
        break;
    case QMessageBox::Question:
        tmpIcon = style->standardIcon(QStyle::SP_MessageBoxQuestion, 0, this);
    default:
        break;
    }
    if (!tmpIcon.isNull())
    {
        return tmpIcon.pixmap(iconSize, iconSize);
    }
    return QPixmap();
}

void PQScrollMessageBox::handle_buttonClicked(QAbstractButton *button)
{
    int ret = buttonBox->standardButton(button);
    done(ret);
}

void PQScrollMessageBox::setDefaultButton(QPushButton *button)
{
    if (!buttonBox->buttons().contains(button))
        return;
    button->setDefault(true);
    button->setFocus();
}

void PQScrollMessageBox::setDefaultButton(QDialogButtonBox::StandardButton button)
{
    setDefaultButton(buttonBox->button(button));
}

void PQScrollMessageBox::showEvent(QShowEvent *e)
{
    updateSize();
    QDialog::showEvent(e);
}

void PQScrollMessageBox::updateSize()
{
    if (!isVisible())
        return;

    label->adjustSize();
    layout()->activate();

    QSize screenSize = QApplication::desktop()->availableGeometry(QCursor::pos()).size();

    int hardLimit = screenSize.width() / 1.5;
    if (screenSize.width() <= 1024)
        hardLimit = screenSize.width();

    int width = qMax( qMin(label->width() + 80, hardLimit), 300 );

    hardLimit = screenSize.height() / 2 ;
    int height = qMax( qMin(label->height() + 80, hardLimit), 150 );

    resize(width, height);

    if(scroll->verticalScrollBar()->isVisible()
            || scroll->horizontalScrollBar()->isVisible()) {
        label->setStyleSheet(label->styleSheet() + "background:white;");
        scroll->setStyleSheet("QScrollArea { border:1px solid rgba(0,0,0,0.1); }");
    }
    else {
        scroll->setStyleSheet("QScrollArea { border:none; }");
    }
}

QDialogButtonBox::StandardButton PQScrollMessageBox::critical(QWidget* parent, QString const& title, QString const& text,
                                                            QDialogButtonBox::StandardButtons buttons, QDialogButtonBox::StandardButton defaultButton)
{
    PQScrollMessageBox box(QMessageBox::Critical, title, text, buttons, parent);
    box.setDefaultButton(defaultButton);
    return static_cast<QDialogButtonBox::StandardButton>(box.exec());
}

QDialogButtonBox::StandardButton PQScrollMessageBox::information(QWidget* parent, QString const& title, QString const& text,
                                                               QDialogButtonBox::StandardButtons buttons, QDialogButtonBox::StandardButton defaultButton)
{
    PQScrollMessageBox box(QMessageBox::Information, title, text, buttons, parent);
    box.setDefaultButton(defaultButton);
    return static_cast<QDialogButtonBox::StandardButton>(box.exec());
}

QDialogButtonBox::StandardButton PQScrollMessageBox::question(QWidget* parent, QString const& title, QString const& text,
                                                            QDialogButtonBox::StandardButtons buttons, QDialogButtonBox::StandardButton defaultButton)
{
    PQScrollMessageBox box(QMessageBox::Question, title, text, buttons, parent);
    box.setDefaultButton(defaultButton);
    return static_cast<QDialogButtonBox::StandardButton>(box.exec());
}

QDialogButtonBox::StandardButton PQScrollMessageBox::warning(QWidget* parent, QString const& title, QString const& text,
                                                           QDialogButtonBox::StandardButtons buttons, QDialogButtonBox::StandardButton defaultButton)
{
    PQScrollMessageBox box(QMessageBox::Warning, title, text, buttons, parent);
    box.setDefaultButton(defaultButton);
    return static_cast<QDialogButtonBox::StandardButton>(box.exec());
}

