#include "plastiqmethod.h"
#include "plastiqqfiledialog.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QFileDialog> 
#include <QString>
#include <QDir>
#include <QUrl>
#include <QStringList>
#include <QFileIconProvider>
#include <QAbstractItemDelegate>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QEvent>
#include <QList>

QHash<QByteArray, PlastiQMethod> PlastiQQFileDialog::plastiqConstructors = {
    { "QFileDialog(QWidget*,enum)", { "QFileDialog", "QWidget*,Qt::WindowFlags", "QFileDialog*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileDialog()", { "QFileDialog", "", "QFileDialog*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileDialog(QWidget*)", { "QFileDialog", "QWidget*", "QFileDialog*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileDialog(QWidget*,QString)", { "QFileDialog", "QWidget*,QString&", "QFileDialog*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileDialog(QWidget*,QString,QString)", { "QFileDialog", "QWidget*,QString&,QString&", "QFileDialog*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileDialog(QWidget*,QString,QString,QString)", { "QFileDialog", "QWidget*,QString&,QString&,QString&", "QFileDialog*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileDialog::plastiqMethods = {
    { "acceptMode()", { "acceptMode", "", "AcceptMode", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultSuffix()", { "defaultSuffix", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "directory()", { "directory", "", "QDir", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "directoryUrl()", { "directoryUrl", "", "QUrl", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileMode()", { "fileMode", "", "FileMode", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filter()", { "filter", "", "QDir::Filters", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "history()", { "history", "", "QStringList", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconProvider()", { "iconProvider", "", "QFileIconProvider*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemDelegate()", { "itemDelegate", "", "QAbstractItemDelegate*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelText(enum)", { "labelText", "DialogLabel", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeFilters()", { "mimeTypeFilters", "", "QStringList", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nameFilters()", { "nameFilters", "", "QStringList", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(QObject*,const char*)", { "open", "QObject*,char*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "Options", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proxyModel()", { "proxyModel", "", "QAbstractProxyModel*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restoreState(QByteArray)", { "restoreState", "QByteArray&", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saveState()", { "saveState", "", "QByteArray", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectFile(QString)", { "selectFile", "QString&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectMimeTypeFilter(QString)", { "selectMimeTypeFilter", "QString&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectNameFilter(QString)", { "selectNameFilter", "QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectUrl(QUrl&)", { "selectUrl", "QUrl&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedFiles()", { "selectedFiles", "", "QStringList", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedNameFilter()", { "selectedNameFilter", "", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceptMode(enum)", { "setAcceptMode", "AcceptMode", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultSuffix(QString)", { "setDefaultSuffix", "QString&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDirectory(QString)", { "setDirectory", "QString&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDirectory(QDir&)", { "setDirectory", "QDir&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDirectoryUrl(QUrl&)", { "setDirectoryUrl", "QUrl&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileMode(enum)", { "setFileMode", "FileMode", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilter(enum)", { "setFilter", "QDir::Filters", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHistory(QStringList&)", { "setHistory", "QStringList&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconProvider(QFileIconProvider*)", { "setIconProvider", "QFileIconProvider*", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemDelegate(QAbstractItemDelegate*)", { "setItemDelegate", "QAbstractItemDelegate*", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelText(enum,QString)", { "setLabelText", "DialogLabel,QString&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMimeTypeFilters(QStringList&)", { "setMimeTypeFilters", "QStringList&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNameFilter(QString)", { "setNameFilter", "QString&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNameFilters(QStringList&)", { "setNameFilters", "QStringList&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "Option", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "Option,bool", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptions(enum)", { "setOptions", "Options", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProxyModel(QAbstractProxyModel*)", { "setProxyModel", "QAbstractProxyModel*", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSidebarUrls(QList<QUrl>&)", { "setSidebarUrls", "QList<QUrl>&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSupportedSchemes(QStringList&)", { "setSupportedSchemes", "QStringList&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewMode(enum)", { "setViewMode", "ViewMode", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedSchemes()", { "supportedSchemes", "", "QStringList", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "Option", "bool", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewMode()", { "viewMode", "", "ViewMode", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getExistingDirectory()", { "getExistingDirectory", "", "QString", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectory(QWidget*)", { "getExistingDirectory", "QWidget*", "QString", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectory(QWidget*,QString)", { "getExistingDirectory", "QWidget*,QString&", "QString", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectory(QWidget*,QString,QString)", { "getExistingDirectory", "QWidget*,QString&,QString&", "QString", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectory(QWidget*,QString,QString,enum)", { "getExistingDirectory", "QWidget*,QString&,QString&,Options", "QString", 51, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectoryUrl()", { "getExistingDirectoryUrl", "", "QUrl", 52, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectoryUrl(QWidget*)", { "getExistingDirectoryUrl", "QWidget*", "QUrl", 53, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectoryUrl(QWidget*,QString)", { "getExistingDirectoryUrl", "QWidget*,QString&", "QUrl", 54, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectoryUrl(QWidget*,QString,QUrl&)", { "getExistingDirectoryUrl", "QWidget*,QString&,QUrl&", "QUrl", 55, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectoryUrl(QWidget*,QString,QUrl&,enum)", { "getExistingDirectoryUrl", "QWidget*,QString&,QUrl&,Options", "QUrl", 56, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getExistingDirectoryUrl(QWidget*,QString,QUrl&,enum,QStringList&)", { "getExistingDirectoryUrl", "QWidget*,QString&,QUrl&,Options,QStringList&", "QUrl", 57, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileName()", { "getOpenFileName", "", "QString", 58, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileName(QWidget*)", { "getOpenFileName", "QWidget*", "QString", 59, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileName(QWidget*,QString)", { "getOpenFileName", "QWidget*,QString&", "QString", 60, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileName(QWidget*,QString,QString)", { "getOpenFileName", "QWidget*,QString&,QString&", "QString", 61, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileName(QWidget*,QString,QString,QString)", { "getOpenFileName", "QWidget*,QString&,QString&,QString&", "QString", 62, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileName(QWidget*,QString,QString,QString,QString*)", { "getOpenFileName", "QWidget*,QString&,QString&,QString&,QString*", "QString", 63, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileName(QWidget*,QString,QString,QString,QString*,enum)", { "getOpenFileName", "QWidget*,QString&,QString&,QString&,QString*,Options", "QString", 64, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileNames()", { "getOpenFileNames", "", "QStringList", 65, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileNames(QWidget*)", { "getOpenFileNames", "QWidget*", "QStringList", 66, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileNames(QWidget*,QString)", { "getOpenFileNames", "QWidget*,QString&", "QStringList", 67, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileNames(QWidget*,QString,QString)", { "getOpenFileNames", "QWidget*,QString&,QString&", "QStringList", 68, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileNames(QWidget*,QString,QString,QString)", { "getOpenFileNames", "QWidget*,QString&,QString&,QString&", "QStringList", 69, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileNames(QWidget*,QString,QString,QString,QString*)", { "getOpenFileNames", "QWidget*,QString&,QString&,QString&,QString*", "QStringList", 70, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileNames(QWidget*,QString,QString,QString,QString*,enum)", { "getOpenFileNames", "QWidget*,QString&,QString&,QString&,QString*,Options", "QStringList", 71, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl()", { "getOpenFileUrl", "", "QUrl", 72, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl(QWidget*)", { "getOpenFileUrl", "QWidget*", "QUrl", 73, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl(QWidget*,QString)", { "getOpenFileUrl", "QWidget*,QString&", "QUrl", 74, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl(QWidget*,QString,QUrl&)", { "getOpenFileUrl", "QWidget*,QString&,QUrl&", "QUrl", 75, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl(QWidget*,QString,QUrl&,QString)", { "getOpenFileUrl", "QWidget*,QString&,QUrl&,QString&", "QUrl", 76, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl(QWidget*,QString,QUrl&,QString,QString*)", { "getOpenFileUrl", "QWidget*,QString&,QUrl&,QString&,QString*", "QUrl", 77, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl(QWidget*,QString,QUrl&,QString,QString*,enum)", { "getOpenFileUrl", "QWidget*,QString&,QUrl&,QString&,QString*,Options", "QUrl", 78, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getOpenFileUrl(QWidget*,QString,QUrl&,QString,QString*,enum,QStringList&)", { "getOpenFileUrl", "QWidget*,QString&,QUrl&,QString&,QString*,Options,QStringList&", "QUrl", 79, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileName()", { "getSaveFileName", "", "QString", 80, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileName(QWidget*)", { "getSaveFileName", "QWidget*", "QString", 81, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileName(QWidget*,QString)", { "getSaveFileName", "QWidget*,QString&", "QString", 82, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileName(QWidget*,QString,QString)", { "getSaveFileName", "QWidget*,QString&,QString&", "QString", 83, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileName(QWidget*,QString,QString,QString)", { "getSaveFileName", "QWidget*,QString&,QString&,QString&", "QString", 84, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileName(QWidget*,QString,QString,QString,QString*)", { "getSaveFileName", "QWidget*,QString&,QString&,QString&,QString*", "QString", 85, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileName(QWidget*,QString,QString,QString,QString*,enum)", { "getSaveFileName", "QWidget*,QString&,QString&,QString&,QString*,Options", "QString", 86, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl()", { "getSaveFileUrl", "", "QUrl", 87, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl(QWidget*)", { "getSaveFileUrl", "QWidget*", "QUrl", 88, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl(QWidget*,QString)", { "getSaveFileUrl", "QWidget*,QString&", "QUrl", 89, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl(QWidget*,QString,QUrl&)", { "getSaveFileUrl", "QWidget*,QString&,QUrl&", "QUrl", 90, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl(QWidget*,QString,QUrl&,QString)", { "getSaveFileUrl", "QWidget*,QString&,QUrl&,QString&", "QUrl", 91, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl(QWidget*,QString,QUrl&,QString,QString*)", { "getSaveFileUrl", "QWidget*,QString&,QUrl&,QString&,QString*", "QUrl", 92, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl(QWidget*,QString,QUrl&,QString,QString*,enum)", { "getSaveFileUrl", "QWidget*,QString&,QUrl&,QString&,QString*,Options", "QUrl", 93, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getSaveFileUrl(QWidget*,QString,QUrl&,QString,QString*,enum,QStringList&)", { "getSaveFileUrl", "QWidget*,QString&,QUrl&,QString&,QString*,Options,QStringList&", "QUrl", 94, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "accept()", { "accept", "", "void", 95, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 96, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "done(int)", { "done", "int", "void", 97, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileDialog::plastiqSignals = {
    { "currentChanged(QString)", { "currentChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentUrlChanged(QUrl&)", { "currentUrlChanged", "QUrl&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "directoryEntered(QString)", { "directoryEntered", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "directoryUrlEntered(QUrl&)", { "directoryUrlEntered", "QUrl&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fileSelected(QString)", { "fileSelected", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "filesSelected(QStringList&)", { "filesSelected", "QStringList&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "filterSelected(QString)", { "filterSelected", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "urlSelected(QUrl&)", { "urlSelected", "QUrl&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "urlsSelected(QList<QUrl>&)", { "urlsSelected", "QList<QUrl>&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileDialog::plastiqProperties = {
    { "acceptMode", { "acceptMode", "long", "setAcceptMode", "acceptMode" } },
    { "defaultSuffix", { "defaultSuffix", "QString", "setDefaultSuffix", "defaultSuffix" } },
    { "fileMode", { "fileMode", "long", "setFileMode", "fileMode" } },
    { "options", { "options", "long", "setOptions", "options" } },
    { "supportedSchemes", { "supportedSchemes", "QStringList", "setSupportedSchemes", "supportedSchemes" } },
    { "viewMode", { "viewMode", "long", "setViewMode", "viewMode" } },

};

QHash<QByteArray, long> PlastiQQFileDialog::plastiqConstants = {

    /* QFileDialog::AcceptMode */
   { "AcceptOpen", QFileDialog::AcceptOpen },
   { "AcceptSave", QFileDialog::AcceptSave },

    /* QFileDialog::DialogLabel */
   { "LookIn", QFileDialog::LookIn },
   { "FileName", QFileDialog::FileName },
   { "FileType", QFileDialog::FileType },
   { "Accept", QFileDialog::Accept },
   { "Reject", QFileDialog::Reject },

    /* QFileDialog::FileMode */
   { "AnyFile", QFileDialog::AnyFile },
   { "ExistingFile", QFileDialog::ExistingFile },
   { "Directory", QFileDialog::Directory },
   { "ExistingFiles", QFileDialog::ExistingFiles },
   { "DirectoryOnly", QFileDialog::DirectoryOnly },

    /* QFileDialog::Option */
   { "ShowDirsOnly", QFileDialog::ShowDirsOnly },
   { "DontResolveSymlinks", QFileDialog::DontResolveSymlinks },
   { "DontConfirmOverwrite", QFileDialog::DontConfirmOverwrite },
   { "DontUseSheet", QFileDialog::DontUseSheet },
   { "DontUseNativeDialog", QFileDialog::DontUseNativeDialog },
   { "ReadOnly", QFileDialog::ReadOnly },
   { "HideNameFilterDetails", QFileDialog::HideNameFilterDetails },
   { "DontUseCustomDirectoryIcons", QFileDialog::DontUseCustomDirectoryIcons },

    /* QFileDialog::ViewMode */
   { "Detail", QFileDialog::Detail },
   { "List", QFileDialog::List },

};

QVector<PlastiQMetaObject*> PlastiQQFileDialog::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFileDialog::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQFileDialog::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QFileDialog", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileDialog::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFileDialogWrapper : public QFileDialog {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFileDialogWrapper(QWidget *parent, Qt::WindowFlags flags)
         : QFileDialog(parent,flags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQFileDialogWrapper(QWidget *parent = Q_NULLPTR, const QString &caption = QString(), const QString &directory = QString(), const QString &filter = QString())
         : QFileDialog(parent,caption,directory,filter),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void accept() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void accept()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileDialog::accept();
    }

    void PlastiQParentCall_accept() {
        return QFileDialog::accept();
    }

    void changeEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileDialog::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QFileDialog::changeEvent(e);
    }

    void done(int result) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void done(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = result;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileDialog::done(result);
    }

    void PlastiQParentCall_done(int result) {
        return QFileDialog::done(result);
    }

    void closeEvent(QCloseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileDialog::closeEvent(e);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *e) {
        return QFileDialog::closeEvent(e);
    }

    void contextMenuEvent(QContextMenuEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileDialog::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QFileDialog::contextMenuEvent(e);
    }

    bool eventFilter(QObject *o, QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(o);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(e);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QFileDialog::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QFileDialog::eventFilter(o,e);
    }

    void keyPressEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileDialog::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QFileDialog::keyPressEvent(e);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileDialog::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QFileDialog::showEvent(event);
    }

};

void PlastiQQFileDialog::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFileDialogWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFileDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;
        case 1: o = new PlastiQQFileDialogWrapper(); break;
        case 2: o = new PlastiQQFileDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 3: o = new PlastiQQFileDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string); break;
        case 4: o = new PlastiQQFileDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string); break;
        case 5: o = new PlastiQQFileDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFileDialog *p = new PlastiQQFileDialog();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileDialog *p = new PlastiQQFileDialog();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 98) {
            id -= 98;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileDialog *o = sc ? Q_NULLPTR : reinterpret_cast<QFileDialog*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->acceptMode(); // HACK for AcceptMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r = o->defaultSuffix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { /* COPY OBJECT */
            QDir *_r = new QDir(o->directory());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->directoryUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->fileMode(); // HACK for FileMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { qint64 _r = o->filter(); // HACK for QDir::Filters 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->history());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { QFileIconProvider* _r = o->iconProvider();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QFileIconProvider"; } break;
        case 8: { QAbstractItemDelegate* _r = o->itemDelegate();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemDelegate"; } break;
        case 9: { QString _r = o->labelText(QFileDialog::DialogLabel(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->mimeTypeFilters());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->nameFilters());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->open(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: { qint64 _r = o->options(); // HACK for Options 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { QAbstractProxyModel* _r = o->proxyModel();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractProxyModel"; } break;
        case 15: { bool _r = o->restoreState(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { QByteArray _r = o->saveState();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 17: o->selectFile(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->selectMimeTypeFilter(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->selectNameFilter(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->selectUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->selectedFiles());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { QString _r = o->selectedNameFilter();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: o->setAcceptMode(QFileDialog::AcceptMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setDefaultSuffix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setDirectory(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setDirectory((*reinterpret_cast< QDir(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setDirectoryUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setFileMode(QFileDialog::FileMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setFilter(QDir::Filters(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setHistory((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setIconProvider(reinterpret_cast<QFileIconProvider*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setItemDelegate(reinterpret_cast<QAbstractItemDelegate*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setLabelText(QFileDialog::DialogLabel(stack[1].s_int64),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setMimeTypeFilters((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setNameFilter(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setNameFilters((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setOption(QFileDialog::Option(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setOption(QFileDialog::Option(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setOptions(QFileDialog::Options(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setProxyModel(reinterpret_cast<QAbstractProxyModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setSidebarUrls((*reinterpret_cast< QList<QUrl>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setSupportedSchemes((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setViewMode(QFileDialog::ViewMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 44: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedSchemes());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { bool _r = o->testOption(QFileDialog::Option(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 46: { qint64 _r = o->viewMode(); // HACK for ViewMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 47: { QString _r = sc ? QFileDialog::getExistingDirectory() : o->getExistingDirectory();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 48: { QString _r = sc ? QFileDialog::getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp)) : o->getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 49: { QString _r = sc ? QFileDialog::getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string) : o->getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 50: { QString _r = sc ? QFileDialog::getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 51: { QString _r = sc ? QFileDialog::getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QFileDialog::Options(stack[4].s_int64)) : o->getExistingDirectory(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QFileDialog::Options(stack[4].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 52: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getExistingDirectoryUrl()) : new QUrl(o->getExistingDirectoryUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 53: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp))) : new QUrl(o->getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 54: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string)) : new QUrl(o->getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 55: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)))) : new QUrl(o->getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    QFileDialog::Options(stack[4].s_int64))) : new QUrl(o->getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    QFileDialog::Options(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 57: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    QFileDialog::Options(stack[4].s_int64),
                    (*reinterpret_cast< QStringList(*) >(stack[5].s_voidp)))) : new QUrl(o->getExistingDirectoryUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    QFileDialog::Options(stack[4].s_int64),
                    (*reinterpret_cast< QStringList(*) >(stack[5].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: { QString _r = sc ? QFileDialog::getOpenFileName() : o->getOpenFileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 59: { QString _r = sc ? QFileDialog::getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp)) : o->getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 60: { QString _r = sc ? QFileDialog::getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string) : o->getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 61: { QString _r = sc ? QFileDialog::getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 62: { QString _r = sc ? QFileDialog::getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string) : o->getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 63: { QString _r = sc ? QFileDialog::getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp)) : o->getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 64: { QString _r = sc ? QFileDialog::getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64)) : o->getOpenFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 65: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFileDialog::getOpenFileNames()) : new QStringList(o->getOpenFileNames());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 66: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFileDialog::getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp))) : new QStringList(o->getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 67: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFileDialog::getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string)) : new QStringList(o->getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 68: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFileDialog::getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string)) : new QStringList(o->getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 69: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFileDialog::getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string)) : new QStringList(o->getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 70: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFileDialog::getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp))) : new QStringList(o->getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 71: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFileDialog::getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64))) : new QStringList(o->getOpenFileNames(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 72: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl()) : new QUrl(o->getOpenFileUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 73: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp))) : new QUrl(o->getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 74: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string)) : new QUrl(o->getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 75: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)))) : new QUrl(o->getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 76: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string)) : new QUrl(o->getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 77: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp))) : new QUrl(o->getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 78: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64))) : new QUrl(o->getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 79: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64),
                    (*reinterpret_cast< QStringList(*) >(stack[7].s_voidp)))) : new QUrl(o->getOpenFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64),
                    (*reinterpret_cast< QStringList(*) >(stack[7].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 80: { QString _r = sc ? QFileDialog::getSaveFileName() : o->getSaveFileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 81: { QString _r = sc ? QFileDialog::getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp)) : o->getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 82: { QString _r = sc ? QFileDialog::getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string) : o->getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 83: { QString _r = sc ? QFileDialog::getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 84: { QString _r = sc ? QFileDialog::getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string) : o->getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 85: { QString _r = sc ? QFileDialog::getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp)) : o->getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 86: { QString _r = sc ? QFileDialog::getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64)) : o->getSaveFileName(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 87: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl()) : new QUrl(o->getSaveFileUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 88: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp))) : new QUrl(o->getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 89: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string)) : new QUrl(o->getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 90: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)))) : new QUrl(o->getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 91: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string)) : new QUrl(o->getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 92: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp))) : new QUrl(o->getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 93: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64))) : new QUrl(o->getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 94: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QFileDialog::getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64),
                    (*reinterpret_cast< QStringList(*) >(stack[7].s_voidp)))) : new QUrl(o->getSaveFileUrl(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)),
                    stack[4].s_string,
                    reinterpret_cast<QString*>(stack[5].s_voidp),
                    QFileDialog::Options(stack[6].s_int64),
                    (*reinterpret_cast< QStringList(*) >(stack[7].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 95: if (isWrapper) ((PlastiQQFileDialogWrapper*)o)->PlastiQParentCall_accept();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 96: if (isWrapper) ((PlastiQQFileDialogWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 97: if (isWrapper) ((PlastiQQFileDialogWrapper*)o)->PlastiQParentCall_done(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFileDialog *o = reinterpret_cast<QFileDialog*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QFileDialog::currentChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "currentChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QFileDialog::currentUrlChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "currentUrlChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QFileDialog::directoryEntered,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "directoryEntered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QFileDialog::directoryUrlEntered,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "directoryUrlEntered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QFileDialog::fileSelected,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "fileSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QFileDialog::filesSelected,
            [=](const QStringList& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QStringList(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QStringList";
                PlastiQ_activate(sender, "filesSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QFileDialog::filterSelected,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "filterSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QFileDialog::urlSelected,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "urlSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QFileDialog::urlsSelected,
            [=](const QList<QUrl>& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&const_cast<QList<QUrl>&>(arg0));
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QUrl>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "urlsSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFileDialog *o = reinterpret_cast<QFileDialog*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFileDialog *o = reinterpret_cast<QFileDialog*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFileDialog *o = reinterpret_cast<QFileDialog*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFileDialog::~PlastiQQFileDialog() {
    QFileDialog* o = reinterpret_cast<QFileDialog*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
