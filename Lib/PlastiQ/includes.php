<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                21.10.2016
 * @version             1.0
 * @copyright           artmares@influ.su
 */

return array(
    'QAbstractAnimation' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QAbstractEventDispatcher' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QAbstractItemModel' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QAbstractListModel' => array(
        'lib' => 'core',
        'depends' => array('QAbstractItemModel'),
    ),
    'QAbstractNativeEventFilter' => array(
        'lib' => 'core',
    ),
    'QAbstractProxyModel' => array(
        'lib' => 'core',
        'depends' => array('QAbstractItemModel'),
    ),
    'QAbstractState' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QAbstractTableModel' => array(
        'lib' => 'core',
        'depends' => array('QAbstractItemModel'),
    ),
    'QAbstractTransition' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QAnimationGroup' => array(
        'lib' => 'core',
        'depends' => array('QAbstractAnimation'),
    ),
    'QAssociativeIterable' => array(
        'lib' => 'core',
    ),
    'QBasicTimer' => array(
        'lib' => 'core',
    ),
    'QBitArray' => array(
        'lib' => 'core',
    ),
    'QBuffer' => array(
        'lib' => 'core',
        'depends' => array('QIODevice'),
    ),
    'QByteArray' => array(
        'lib' => 'core',
    ),
    'QByteArrayMatcher' => array(
        'lib' => 'core',
    ),
    'QChar' => array(
        'lib' => 'core',
    ),
    'QChildEvent' => array(
        'lib' => 'core',
        'depends' => array('QEvent'),
    ),
    'QCollator' => array(
        'lib' => 'core',
    ),
    'QCollatorSortKey' => array(
        'lib' => 'core',
    ),
    'QCommandLineOption' => array(
        'lib' => 'core',
    ),
    'QCommandLineParser' => array(
        'lib' => 'core',
    ),
    'QCoreApplication' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QCryptographicHash' => array(
        'lib' => 'core',
    ),
    'QDataStream' => array(
        'lib' => 'core',
    ),
    'QDate' => array(
        'lib' => 'core',
    ),
    'QDateTime' => array(
        'lib' => 'core',
    ),
    'QDir' => array(
        'lib' => 'core',
    ),
    'QDirIterator' => array(
        'lib' => 'core',
    ),
    'QDynamicPropertyChangeEvent' => array(
        'lib' => 'core',
        'depends' => array('QEvent'),
    ),
    'QEasingCurve' => array(
        'lib' => 'core',
    ),
    'QElapsedTimer' => array(
        'lib' => 'core',
    ),
    'QEvent' => array(
        'lib' => 'core',
    ),
    'QEventLoop' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QEventLoopLocker' => array(
        'lib' => 'core',
    ),
    'QEventTransition' => array(
        'lib' => 'core',
        'depends' => array('QAbstractTransition'),
    ),
    'QException' => array(
        'lib' => 'core',
    ),
    'QFile' => array(
        'lib' => 'core',
        'depends' => array('QFileDevice'),
    ),
    'QFileDevice' => array(
        'lib' => 'core',
        'depends' => array('QIODevice'),
    ),
    'QFileInfo' => array(
        'lib' => 'core',
    ),
    'QFileSelector' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QFileSystemWatcher' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QFinalState' => array(
        'lib' => 'core',
        'depends' => array('QAbstractState'),
    ),
    'QHistoryState' => array(
        'lib' => 'core',
        'depends' => array('QAbstractState'),
    ),
    'QIdentityProxyModel' => array(
        'lib' => 'core',
        'depends' => array('QAbstractProxyModel'),
    ),
    'QIODevice' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QJsonArray' => array(
        'lib' => 'core',
    ),
    'QJsonDocument' => array(
        'lib' => 'core',
    ),
    'QJsonObject' => array(
        'lib' => 'core',
    ),
    'QJsonParseError' => array(
        'lib' => 'core',
    ),
    'QJsonValue' => array(
        'lib' => 'core',
    ),
    'QLatin1Char' => array(
        'lib' => 'core',
    ),
    'QLatin1String' => array(
        'lib' => 'core',
    ),
    'QLibrary' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QLibraryInfo' => array(
        'lib' => 'core',
    ),
    'QLine' => array(
        'lib' => 'core',
    ),
    'QLineF' => array(
        'lib' => 'core',
    ),
    'QLocale' => array(
        'lib' => 'core',
    ),
    'QLockFile' => array(
        'lib' => 'core',
    ),
    'QLoggingCategory' => array(
        'lib' => 'core',
    ),
    'QMargins' => array(
        'lib' => 'core',
    ),
    'QMarginsF' => array(
        'lib' => 'core',
    ),
    'QMessageAuthenticationCode' => array(
        'lib' => 'core',
    ),
    'QMimeData' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QMimeDatabase' => array(
        'lib' => 'core',
    ),
    'QMimeType' => array(
        'lib' => 'core',
    ),
    'QModelIndex' => array(
        'lib' => 'core',
    ),
    'QMutex' => array(
        'lib' => 'core',
    ),
    'QMutexLocker' => array(
        'lib' => 'core',
    ),
    'QObject' => array(
        'lib' => 'core',
    ),
    'QObjectCleanupHandler' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QParallelAnimationGroup' => array(
        'lib' => 'core',
        'depends' => array('QAnimationGroup'),
    ),
    'QPauseAnimation' => array(
        'lib' => 'core',
        'depends' => array('QAbstractAnimation'),
    ),
    'QPersistentModelIndex' => array(
        'lib' => 'core',
    ),
    'QPluginLoader' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QPoint' => array(
        'lib' => 'core',
    ),
    'QPointF' => array(
        'lib' => 'core',
    ),
    'QProcess' => array(
        'lib' => 'core',
        'depends' => array('QIODevice'),
    ),
    'QProcessEnvironment' => array(
        'lib' => 'core',
    ),
    'QPropertyAnimation' => array(
        'lib' => 'core',
        'depends' => array('QVariantAnimation'),
    ),
    'QReadLocker' => array(
        'lib' => 'core',
    ),
    'QReadWriteLock' => array(
        'lib' => 'core',
    ),
    'QRect' => array(
        'lib' => 'core',
    ),
    'QRectF' => array(
        'lib' => 'core',
    ),
    'QRegExp' => array(
        'lib' => 'core',
    ),
    'QRegularExpression' => array(
        'lib' => 'core',
    ),
    'QRegularExpressionMatch' => array(
        'lib' => 'core',
    ),
    'QRegularExpressionMatchIterator' => array(
        'lib' => 'core',
    ),
    'QResource' => array(
        'lib' => 'core',
    ),
    'QRunnable' => array(
        'lib' => 'core',
    ),
    'QSaveFile' => array(
        'lib' => 'core',
        'depends' => array('QFileDevice'),
    ),
    'QSemaphore' => array(
        'lib' => 'core',
    ),
    'QSequentialAnimationGroup' => array(
        'lib' => 'core',
        'depends' => array('QAnimationGroup'),
    ),
    'QSequentialIterable' => array(
        'lib' => 'core',
    ),
    'QSettings' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QSharedData' => array(
        'lib' => 'core',
    ),
    'QSharedMemory' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QSize' => array(
        'lib' => 'core',
    ),
    'QSizeF' => array(
        'lib' => 'core',
    ),
    'QSocketNotifier' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QSortFilterProxyModel' => array(
        'lib' => 'core',
        'depends' => array('QAbstractProxyModel'),
    ),
    'QStandardPaths' => array(
        'lib' => 'core',
    ),
    'QState' => array(
        'lib' => 'core',
        'depends' => array('QAbstractState'),
    ),
    'QStateMachine' => array(
        'lib' => 'core',
        'depends' => array('QState'),
    ),
    'QStaticPlugin' => array(
        'lib' => 'core',
    ),
    'QStorageInfo' => array(
        'lib' => 'core',
    ),
    'QString' => array(
        'lib' => 'core',
    ),
    'QStringList' => array(
        'lib' => 'core',
    ),
    'QStringMatcher' => array(
        'lib' => 'core',
    ),
    'QStringRef' => array(
        'lib' => 'core',
    ),
    'QSysInfo' => array(
        'lib' => 'core',
    ),
    'QSystemSemaphore' => array(
        'lib' => 'core',
    ),
    'Qt' => array(
        'lib' => 'core',
    ),
    'QTemporaryDir' => array(
        'lib' => 'core',
    ),
    'QTemporaryFile' => array(
        'lib' => 'core',
        'depends' => array('QFile'),
    ),
    'QTextBoundaryFinder' => array(
        'lib' => 'core',
    ),
    'QTextDecoder' => array(
        'lib' => 'core',
    ),
    'QTextEncoder' => array(
        'lib' => 'core',
    ),
    'QTextStream' => array(
        'lib' => 'core',
    ),
    'QThread' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QThreadPool' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QTime' => array(
        'lib' => 'core',
    ),
    'QTimeLine' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QTimer' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QTimerEvent' => array(
        'lib' => 'core',
        'depends' => array('QEvent'),
    ),
    'QTimeZone' => array(
        'lib' => 'core',
    ),
    'QTranslator' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QUrl' => array(
        'lib' => 'core',
    ),
    'QUrlQuery' => array(
        'lib' => 'core',
    ),
    'QUuid' => array(
        'lib' => 'core',
    ),
    'QVariant' => array(
        'lib' => 'core',
    ),
    'QVariantAnimation' => array(
        'lib' => 'core',
        'depends' => array('QAbstractAnimation'),
    ),
    'QVersionNumber' => array(
        'lib' => 'core',
    ),
    'QWaitCondition' => array(
        'lib' => 'core',
    ),
    'QWinEventNotifier' => array(
        'lib' => 'core',
        'depends' => array('QObject'),
    ),
    'QWriteLocker' => array(
        'lib' => 'core',
    ),
    'QAbstractTextDocumentLayout' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QAccessible' => array(
        'lib' => 'gui',
    ),
    'QAccessibleEditableTextInterface' => array(
        'lib' => 'gui',
    ),
    'QAccessibleEvent' => array(
        'lib' => 'gui',
    ),
    'QAccessibleImageInterface' => array(
        'lib' => 'gui',
    ),
    'QAccessibleInterface' => array(
        'lib' => 'gui',
    ),
    'QAccessibleObject' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleInterface'),
    ),
    'QAccessibleStateChangeEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleEvent'),
    ),
    'QAccessibleTableCellInterface' => array(
        'lib' => 'gui',
    ),
    'QAccessibleTableModelChangeEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleEvent'),
    ),
    'QAccessibleTextCursorEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleEvent'),
    ),
    'QAccessibleTextInsertEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleTextCursorEvent'),
    ),
    'QAccessibleTextInterface' => array(
        'lib' => 'gui',
    ),
    'QAccessibleTextRemoveEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleTextCursorEvent'),
    ),
    'QAccessibleTextSelectionEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleTextCursorEvent'),
    ),
    'QAccessibleTextUpdateEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleTextCursorEvent'),
    ),
    'QAccessibleValueChangeEvent' => array(
        'lib' => 'gui',
        'depends' => array('QAccessibleEvent'),
    ),
    'QAccessibleValueInterface' => array(
        'lib' => 'gui',
    ),
    'QActionEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QBitmap' => array(
        'lib' => 'gui',
        'depends' => array('QPixmap'),
    ),
    'QBrush' => array(
        'lib' => 'gui',
    ),
    'QClipboard' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QCloseEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QColor' => array(
        'lib' => 'gui',
    ),
    'QConicalGradient' => array(
        'lib' => 'gui',
        'depends' => array('QGradient'),
    ),
    'QContextMenuEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QCursor' => array(
        'lib' => 'gui',
    ),
    'QDesktopServices' => array(
        'lib' => 'gui',
    ),
    'QDoubleValidator' => array(
        'lib' => 'gui',
        'depends' => array('QValidator'),
    ),
    'QDrag' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QDragEnterEvent' => array(
        'lib' => 'gui',
        'depends' => array('QDragMoveEvent'),
    ),
    'QDragLeaveEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QDragMoveEvent' => array(
        'lib' => 'gui',
        'depends' => array('QDropEvent'),
    ),
    'QDropEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QEnterEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QExposeEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QFileOpenEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QFocusEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QFont' => array(
        'lib' => 'gui',
    ),
    'QFontDatabase' => array(
        'lib' => 'gui',
    ),
    'QFontInfo' => array(
        'lib' => 'gui',
    ),
    'QFontMetrics' => array(
        'lib' => 'gui',
    ),
    'QFontMetricsF' => array(
        'lib' => 'gui',
    ),
    'QGlyphRun' => array(
        'lib' => 'gui',
    ),
    'QGradient' => array(
        'lib' => 'gui',
    ),
    'QGuiApplication' => array(
        'lib' => 'gui',
        'depends' => array('QCoreApplication'),
    ),
    'QHelpEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QHideEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QHoverEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QIcon' => array(
        'lib' => 'gui',
    ),
    'QIconDragEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QIconEngine' => array(
        'lib' => 'gui',
    ),
    'QIconEnginePlugin' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QImage' => array(
        'lib' => 'gui',
        'depends' => array('QPaintDevice'),
    ),
    'QImageIOHandler' => array(
        'lib' => 'gui',
    ),
    'QImageIOPlugin' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QImageReader' => array(
        'lib' => 'gui',
    ),
    'QImageWriter' => array(
        'lib' => 'gui',
    ),
    'QInputEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QInputMethod' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QInputMethodEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QInputMethodQueryEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QIntValidator' => array(
        'lib' => 'gui',
        'depends' => array('QValidator'),
    ),
    'QKeyEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QKeySequence' => array(
        'lib' => 'gui',
    ),
    'QLinearGradient' => array(
        'lib' => 'gui',
        'depends' => array('QGradient'),
    ),
    'QMatrix4x4' => array(
        'lib' => 'gui',
    ),
    'QMouseEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QMoveEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QMovie' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QNativeGestureEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QOffscreenSurface' => array(
        'lib' => 'gui',
        'depends' => array('QObject', 'QSurface'),
    ),
    'QPagedPaintDevice' => array(
        'lib' => 'gui',
        'depends' => array('QPaintDevice'),
    ),
    'QPageLayout' => array(
        'lib' => 'gui',
    ),
    'QPageSize' => array(
        'lib' => 'gui',
    ),
    'QPaintDevice' => array(
        'lib' => 'gui',
    ),
    'QPaintDeviceWindow' => array(
        'lib' => 'gui',
        'depends' => array('QWindow', 'QPaintDevice'),
    ),
    'QPaintEngine' => array(
        'lib' => 'gui',
    ),
    'QPaintEngineState' => array(
        'lib' => 'gui',
    ),
    'QPainter' => array(
        'lib' => 'gui',
    ),
    'QPainterPath' => array(
        'lib' => 'gui',
    ),
    'QPainterPathStroker' => array(
        'lib' => 'gui',
    ),
    'QPaintEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QPalette' => array(
        'lib' => 'gui',
    ),
    'QPdfWriter' => array(
        'lib' => 'gui',
        'depends' => array('QObject', 'QPagedPaintDevice'),
    ),
    'QPen' => array(
        'lib' => 'gui',
    ),
    'QPicture' => array(
        'lib' => 'gui',
        'depends' => array('QPaintDevice'),
    ),
    'QPixelFormat' => array(
        'lib' => 'gui',
    ),
    'QPixmap' => array(
        'lib' => 'gui',
        'depends' => array('QPaintDevice'),
    ),
    'QPixmapCache' => array(
        'lib' => 'gui',
    ),
    'QQuaternion' => array(
        'lib' => 'gui',
    ),
    'QRadialGradient' => array(
        'lib' => 'gui',
        'depends' => array('QGradient'),
    ),
    'QRawFont' => array(
        'lib' => 'gui',
    ),
    'QRegExpValidator' => array(
        'lib' => 'gui',
        'depends' => array('QValidator'),
    ),
    'QRegion' => array(
        'lib' => 'gui',
    ),
    'QResizeEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QRgba64' => array(
        'lib' => 'gui',
    ),
    'QScreen' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QScrollEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QScrollPrepareEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QSessionManager' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QShortcutEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QShowEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QStandardItem' => array(
        'lib' => 'gui',
    ),
    'QStandardItemModel' => array(
        'lib' => 'gui',
        'depends' => array('QAbstractItemModel'),
    ),
    'QStaticText' => array(
        'lib' => 'gui',
    ),
    'QStatusTipEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QStyleHints' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QSurface' => array(
        'lib' => 'gui',
    ),
    'QSurfaceFormat' => array(
        'lib' => 'gui',
    ),
    'QSyntaxHighlighter' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QTabletEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QTextBlock' => array(
        'lib' => 'gui',
    ),
    'QTextBlockFormat' => array(
        'lib' => 'gui',
        'depends' => array('QTextFormat'),
    ),
    'QTextBlockGroup' => array(
        'lib' => 'gui',
        'depends' => array('QTextObject'),
    ),
    'QTextBlockUserData' => array(
        'lib' => 'gui',
    ),
    'QTextCharFormat' => array(
        'lib' => 'gui',
        'depends' => array('QTextFormat'),
    ),
    'QTextCursor' => array(
        'lib' => 'gui',
    ),
    'QTextDocument' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QTextDocumentFragment' => array(
        'lib' => 'gui',
    ),
    'QTextDocumentWriter' => array(
        'lib' => 'gui',
    ),
    'QTextFormat' => array(
        'lib' => 'gui',
    ),
    'QTextFragment' => array(
        'lib' => 'gui',
    ),
    'QTextFrame' => array(
        'lib' => 'gui',
        'depends' => array('QTextObject'),
    ),
    'QTextFrameFormat' => array(
        'lib' => 'gui',
        'depends' => array('QTextFormat'),
    ),
    'QTextImageFormat' => array(
        'lib' => 'gui',
        'depends' => array('QTextCharFormat'),
    ),
    'QTextInlineObject' => array(
        'lib' => 'gui',
    ),
    'QTextItem' => array(
        'lib' => 'gui',
    ),
    'QTextLayout' => array(
        'lib' => 'gui',
    ),
    'QTextLength' => array(
        'lib' => 'gui',
    ),
    'QTextLine' => array(
        'lib' => 'gui',
    ),
    'QTextList' => array(
        'lib' => 'gui',
        'depends' => array('QTextBlockGroup'),
    ),
    'QTextListFormat' => array(
        'lib' => 'gui',
        'depends' => array('QTextFormat'),
    ),
    'QTextObject' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QTextObjectInterface' => array(
        'lib' => 'gui',
    ),
    'QTextOption' => array(
        'lib' => 'gui',
    ),
    'QTextTable' => array(
        'lib' => 'gui',
        'depends' => array('QTextFrame'),
    ),
    'QTextTableCell' => array(
        'lib' => 'gui',
    ),
    'QTextTableCellFormat' => array(
        'lib' => 'gui',
        'depends' => array('QTextCharFormat'),
    ),
    'QTextTableFormat' => array(
        'lib' => 'gui',
        'depends' => array('QTextFrameFormat'),
    ),
    'QTouchDevice' => array(
        'lib' => 'gui',
    ),
    'QTouchEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QTransform' => array(
        'lib' => 'gui',
    ),
    'QValidator' => array(
        'lib' => 'gui',
        'depends' => array('QObject'),
    ),
    'QVector2D' => array(
        'lib' => 'gui',
    ),
    'QVector3D' => array(
        'lib' => 'gui',
    ),
    'QVector4D' => array(
        'lib' => 'gui',
    ),
    'QWhatsThisClickedEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QWheelEvent' => array(
        'lib' => 'gui',
        'depends' => array('QInputEvent'),
    ),
    'QWindow' => array(
        'lib' => 'gui',
        'depends' => array('QObject', 'QSurface'),
    ),
    'QWindowStateChangeEvent' => array(
        'lib' => 'gui',
        'depends' => array('QEvent'),
    ),
    'QAbstractPlanarVideoBuffer' => array(
        'lib' => 'multimedia',
    ),
    'QAbstractVideoBuffer' => array(
        'lib' => 'multimedia',
    ),
    'QAbstractVideoFilter' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QAbstractVideoSurface' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QAudioBuffer' => array(
        'lib' => 'multimedia',
    ),
    'QAudioDecoder' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaObject'),
    ),
    'QAudioDecoderControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QAudioDeviceInfo' => array(
        'lib' => 'multimedia',
    ),
    'QAudioEncoderSettings' => array(
        'lib' => 'multimedia',
    ),
    'QAudioEncoderSettingsControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QAudioFormat' => array(
        'lib' => 'multimedia',
    ),
    'QAudioInput' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QAudioInputSelectorControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QAudioOutput' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QAudioOutputSelectorControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QAudioProbe' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QAudioRecorder' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaRecorder'),
    ),
    'QAudioRoleControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCamera' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaObject'),
    ),
    'QCameraCaptureBufferFormatControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraCaptureDestinationControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraExposure' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QCameraExposureControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraFeedbackControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraFlashControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraFocus' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QCameraFocusControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraFocusZone' => array(
        'lib' => 'multimedia',
    ),
    'QCameraImageCapture' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject', 'QMediaBindableInterface'),
    ),
    'QCameraImageCaptureControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraImageProcessing' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QCameraImageProcessingControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraInfo' => array(
        'lib' => 'multimedia',
    ),
    'QCameraInfoControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraLocksControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraViewfinderSettings' => array(
        'lib' => 'multimedia',
    ),
    'QCameraViewfinderSettingsControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraViewfinderSettingsControl2' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QCameraZoomControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QImageEncoderControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QImageEncoderSettings' => array(
        'lib' => 'multimedia',
    ),
    'QMediaAudioProbeControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaAvailabilityControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaBindableInterface' => array(
        'lib' => 'multimedia',
    ),
    'QMediaContainerControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaContent' => array(
        'lib' => 'multimedia',
    ),
    'QMediaControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QMediaGaplessPlaybackControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaNetworkAccessControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaObject' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QMediaPlayer' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaObject'),
    ),
    'QMediaPlayerControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaPlaylist' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject', 'QMediaBindableInterface'),
    ),
    'QMediaRecorder' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject', 'QMediaBindableInterface'),
    ),
    'QMediaRecorderControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaResource' => array(
        'lib' => 'multimedia',
    ),
    'QMediaService' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QMediaServiceCameraInfoInterface' => array(
        'lib' => 'multimedia',
    ),
    'QMediaServiceDefaultDeviceInterface' => array(
        'lib' => 'multimedia',
    ),
    'QMediaServiceFeaturesInterface' => array(
        'lib' => 'multimedia',
    ),
    'QMediaServiceProviderPlugin' => array(
        'lib' => 'multimedia',
    ),
    'QMediaServiceSupportedDevicesInterface' => array(
        'lib' => 'multimedia',
    ),
    'QMediaServiceSupportedFormatsInterface' => array(
        'lib' => 'multimedia',
    ),
    'QMediaStreamsControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMediaTimeInterval' => array(
        'lib' => 'multimedia',
    ),
    'QMediaTimeRange' => array(
        'lib' => 'multimedia',
    ),
    'QMediaVideoProbeControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMetaDataReaderControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QMetaDataWriterControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QRadioData' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject', 'QMediaBindableInterface'),
    ),
    'QRadioDataControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QRadioTuner' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaObject'),
    ),
    'QRadioTunerControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QSound' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QSoundEffect' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QVideoDeviceSelectorControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QVideoEncoderSettings' => array(
        'lib' => 'multimedia',
    ),
    'QVideoEncoderSettingsControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QVideoFilterRunnable' => array(
        'lib' => 'multimedia',
    ),
    'QVideoFrame' => array(
        'lib' => 'multimedia',
    ),
    'QVideoProbe' => array(
        'lib' => 'multimedia',
        'depends' => array('QObject'),
    ),
    'QVideoRendererControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QVideoSurfaceFormat' => array(
        'lib' => 'multimedia',
    ),
    'QVideoWindowControl' => array(
        'lib' => 'multimedia',
        'depends' => array('QMediaControl'),
    ),
    'QAbstractNetworkCache' => array(
        'lib' => 'network',
    ),
    'QAbstractSocket' => array(
        'lib' => 'network',
        'depends' => array('QIODevice'),
    ),
    'QAuthenticator' => array(
        'lib' => 'network',
    ),
    'QDnsDomainNameRecord' => array(
        'lib' => 'network',
    ),
    'QDnsHostAddressRecord' => array(
        'lib' => 'network',
    ),
    'QDnsLookup' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QDnsMailExchangeRecord' => array(
        'lib' => 'network',
    ),
    'QDnsServiceRecord' => array(
        'lib' => 'network',
    ),
    'QDnsTextRecord' => array(
        'lib' => 'network',
    ),
    'QHostAddress' => array(
        'lib' => 'network',
    ),
    'QHostInfo' => array(
        'lib' => 'network',
    ),
    'QHttpMultiPart' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QHttpPart' => array(
        'lib' => 'network',
    ),
    'QLocalServer' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QLocalSocket' => array(
        'lib' => 'network',
        'depends' => array('QIODevice'),
    ),
    'QNetworkAccessManager' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QNetworkAddressEntry' => array(
        'lib' => 'network',
    ),
    'QNetworkCacheMetaData' => array(
        'lib' => 'network',
    ),
    'QNetworkConfiguration' => array(
        'lib' => 'network',
    ),
    'QNetworkConfigurationManager' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QNetworkCookie' => array(
        'lib' => 'network',
    ),
    'QNetworkCookieJar' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QNetworkDiskCache' => array(
        'lib' => 'network',
        'depends' => array('QAbstractNetworkCache'),
    ),
    'QNetworkInterface' => array(
        'lib' => 'network',
    ),
    'QNetworkProxy' => array(
        'lib' => 'network',
    ),
    'QNetworkProxyFactory' => array(
        'lib' => 'network',
    ),
    'QNetworkProxyQuery' => array(
        'lib' => 'network',
    ),
    'QNetworkReply' => array(
        'lib' => 'network',
        'depends' => array('QIODevice'),
    ),
    'QNetworkRequest' => array(
        'lib' => 'network',
    ),
    'QNetworkSession' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QSslCertificate' => array(
        'lib' => 'network',
    ),
    'QSslCertificateExtension' => array(
        'lib' => 'network',
    ),
    'QSslCipher' => array(
        'lib' => 'network',
    ),
    'QSslConfiguration' => array(
        'lib' => 'network',
    ),
    'QSslEllipticCurve' => array(
        'lib' => 'network',
    ),
    'QSslError' => array(
        'lib' => 'network',
    ),
    'QSslKey' => array(
        'lib' => 'network',
    ),
    'QSslPreSharedKeyAuthenticator' => array(
        'lib' => 'network',
    ),
    'QSslSocket' => array(
        'lib' => 'network',
        'depends' => array('QTcpSocket'),
    ),
    'QTcpServer' => array(
        'lib' => 'network',
        'depends' => array('QObject'),
    ),
    'QTcpSocket' => array(
        'lib' => 'network',
        'depends' => array('QAbstractSocket'),
    ),
    'QUdpSocket' => array(
        'lib' => 'network',
        'depends' => array('QAbstractSocket'),
    ),
    'PQEventFilter' => array(
        'lib' => 'plastiq',
        'depends' => array('QObject'),
    ),
    'PQScrollMessageBox' => array(
        'lib' => 'plastiq',
        'depends' => array('QDialog'),
    ),
    'QUiLoader' => array(
        'lib' => 'uitools',
        'depends' => array('QObject'),
    ),
    'QWebEngineCertificateError' => array(
        'lib' => 'webenginewidgets',
    ),
    'QWebEngineDownloadItem' => array(
        'lib' => 'webenginewidgets',
        'depends' => array('QObject'),
    ),
    'QWebEngineFullScreenRequest' => array(
        'lib' => 'webenginewidgets',
    ),
    'QWebEngineHistory' => array(
        'lib' => 'webenginewidgets',
    ),
    'QWebEngineHistoryItem' => array(
        'lib' => 'webenginewidgets',
    ),
    'QWebEnginePage' => array(
        'lib' => 'webenginewidgets',
        'depends' => array('QObject'),
    ),
    'QWebEngineProfile' => array(
        'lib' => 'webenginewidgets',
        'depends' => array('QObject'),
    ),
    'QWebEngineScript' => array(
        'lib' => 'webenginewidgets',
    ),
    'QWebEngineScriptCollection' => array(
        'lib' => 'webenginewidgets',
    ),
    'QWebEngineSettings' => array(
        'lib' => 'webenginewidgets',
    ),
    'QWebEngineView' => array(
        'lib' => 'webenginewidgets',
        'depends' => array('QWidget'),
    ),
    'QAbstractButton' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QAbstractGraphicsShapeItem' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsItem'),
    ),
    'QAbstractItemDelegate' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QAbstractItemView' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractScrollArea'),
    ),
    'QAbstractScrollArea' => array(
        'lib' => 'widgets',
        'depends' => array('QFrame'),
    ),
    'QAbstractSlider' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QAbstractSpinBox' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QAccessibleWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QAccessibleObject'),
    ),
    'QAction' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QActionGroup' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QApplication' => array(
        'lib' => 'widgets',
        'depends' => array('QGuiApplication'),
    ),
    'QBoxLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QLayout'),
    ),
    'QButtonGroup' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QCalendarWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QCheckBox' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractButton'),
    ),
    'QColorDialog' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QColormap' => array(
        'lib' => 'widgets',
    ),
    'QColumnView' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemView'),
    ),
    'QComboBox' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QCommandLinkButton' => array(
        'lib' => 'widgets',
        'depends' => array('QPushButton'),
    ),
    'QCommonStyle' => array(
        'lib' => 'widgets',
        'depends' => array('QStyle'),
    ),
    'QCompleter' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QDataWidgetMapper' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QDateEdit' => array(
        'lib' => 'widgets',
        'depends' => array('QDateTimeEdit'),
    ),
    'QDateTimeEdit' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractSpinBox'),
    ),
    'QDesktopWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QDial' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractSlider'),
    ),
    'QDialog' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QDialogButtonBox' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QDockWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QDoubleSpinBox' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractSpinBox'),
    ),
    'QErrorMessage' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QFileDialog' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QFileIconProvider' => array(
        'lib' => 'widgets',
    ),
    'QFileSystemModel' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemModel'),
    ),
    'QFocusFrame' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QFontComboBox' => array(
        'lib' => 'widgets',
        'depends' => array('QComboBox'),
    ),
    'QFontDialog' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QFormLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QLayout'),
    ),
    'QFrame' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QGesture' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QGestureEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QEvent'),
    ),
    'QGestureRecognizer' => array(
        'lib' => 'widgets',
    ),
    'QGraphicsAnchor' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QGraphicsAnchorLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsLayout'),
    ),
    'QGraphicsBlurEffect' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsEffect'),
    ),
    'QGraphicsColorizeEffect' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsEffect'),
    ),
    'QGraphicsDropShadowEffect' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsEffect'),
    ),
    'QGraphicsEffect' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QGraphicsEllipseItem' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractGraphicsShapeItem'),
    ),
    'QGraphicsGridLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsLayout'),
    ),
    'QGraphicsItem' => array(
        'lib' => 'widgets',
    ),
    'QGraphicsItemGroup' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsItem'),
    ),
    'QGraphicsLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsLayoutItem'),
    ),
    'QGraphicsLayoutItem' => array(
        'lib' => 'widgets',
    ),
    'QGraphicsLinearLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsLayout'),
    ),
    'QGraphicsLineItem' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsItem'),
    ),
    'QGraphicsObject' => array(
        'lib' => 'widgets',
        'depends' => array('QObject', 'QGraphicsItem'),
    ),
    'QGraphicsOpacityEffect' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsEffect'),
    ),
    'QGraphicsPathItem' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractGraphicsShapeItem'),
    ),
    'QGraphicsPixmapItem' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsItem'),
    ),
    'QGraphicsPolygonItem' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractGraphicsShapeItem'),
    ),
    'QGraphicsProxyWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsWidget'),
    ),
    'QGraphicsRectItem' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractGraphicsShapeItem'),
    ),
    'QGraphicsRotation' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsTransform'),
    ),
    'QGraphicsScale' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsTransform'),
    ),
    'QGraphicsScene' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QGraphicsSceneContextMenuEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSceneDragDropEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSceneEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QEvent'),
    ),
    'QGraphicsSceneHelpEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSceneHoverEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSceneMouseEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSceneMoveEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSceneResizeEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSceneWheelEvent' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsSceneEvent'),
    ),
    'QGraphicsSimpleTextItem' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractGraphicsShapeItem'),
    ),
    'QGraphicsTextItem' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsObject'),
    ),
    'QGraphicsTransform' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QGraphicsView' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractScrollArea'),
    ),
    'QGraphicsWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QGraphicsObject', 'QGraphicsLayoutItem'),
    ),
    'QGridLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QLayout'),
    ),
    'QGroupBox' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QHBoxLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QBoxLayout'),
    ),
    'QHeaderView' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemView'),
    ),
    'QInputDialog' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QItemDelegate' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemDelegate'),
    ),
    'QItemEditorFactory' => array(
        'lib' => 'widgets',
    ),
    'QKeyEventTransition' => array(
        'lib' => 'widgets',
        'depends' => array('QEventTransition'),
    ),
    'QKeySequenceEdit' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QLabel' => array(
        'lib' => 'widgets',
        'depends' => array('QFrame'),
    ),
    'QLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QObject', 'QLayoutItem'),
    ),
    'QLayoutItem' => array(
        'lib' => 'widgets',
    ),
    'QLCDNumber' => array(
        'lib' => 'widgets',
        'depends' => array('QFrame'),
    ),
    'QLineEdit' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QListView' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemView'),
    ),
    'QListWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QListView'),
    ),
    'QListWidgetItem' => array(
        'lib' => 'widgets',
    ),
    'QMainWindow' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QMdiArea' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractScrollArea'),
    ),
    'QMdiSubWindow' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QMenu' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QMenuBar' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QMessageBox' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QMouseEventTransition' => array(
        'lib' => 'widgets',
        'depends' => array('QEventTransition'),
    ),
    'QOpenGLWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QPanGesture' => array(
        'lib' => 'widgets',
        'depends' => array('QGesture'),
    ),
    'QPinchGesture' => array(
        'lib' => 'widgets',
        'depends' => array('QGesture'),
    ),
    'QPlainTextDocumentLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractTextDocumentLayout'),
    ),
    'QPlainTextEdit' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractScrollArea'),
    ),
    'QProgressBar' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QProgressDialog' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QProxyStyle' => array(
        'lib' => 'widgets',
        'depends' => array('QCommonStyle'),
    ),
    'QPushButton' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractButton'),
    ),
    'QRadioButton' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractButton'),
    ),
    'QRubberBand' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QScrollArea' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractScrollArea'),
    ),
    'QScrollBar' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractSlider'),
    ),
    'QScroller' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QScrollerProperties' => array(
        'lib' => 'widgets',
    ),
    'QShortcut' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QSizeGrip' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QSizePolicy' => array(
        'lib' => 'widgets',
    ),
    'QSlider' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractSlider'),
    ),
    'QSpacerItem' => array(
        'lib' => 'widgets',
        'depends' => array('QLayoutItem'),
    ),
    'QSpinBox' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractSpinBox'),
    ),
    'QSplashScreen' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QSplitter' => array(
        'lib' => 'widgets',
        'depends' => array('QFrame'),
    ),
    'QSplitterHandle' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QStackedLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QLayout'),
    ),
    'QStackedWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QFrame'),
    ),
    'QStatusBar' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QStyle' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QStyledItemDelegate' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemDelegate'),
    ),
    'QStyleFactory' => array(
        'lib' => 'widgets',
    ),
    'QStyleHintReturn' => array(
        'lib' => 'widgets',
    ),
    'QStyleHintReturnMask' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleHintReturn'),
    ),
    'QStyleHintReturnVariant' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleHintReturn'),
    ),
    'QStyleOption' => array(
        'lib' => 'widgets',
    ),
    'QStyleOptionButton' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionComboBox' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOptionComplex'),
    ),
    'QStyleOptionComplex' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionDockWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionFocusRect' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionFrame' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionGraphicsItem' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionGroupBox' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOptionComplex'),
    ),
    'QStyleOptionHeader' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionMenuItem' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionProgressBar' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionRubberBand' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionSizeGrip' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOptionComplex'),
    ),
    'QStyleOptionSlider' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOptionComplex'),
    ),
    'QStyleOptionSpinBox' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOptionComplex'),
    ),
    'QStyleOptionTab' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionTabBarBase' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionTabWidgetFrame' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionTitleBar' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOptionComplex'),
    ),
    'QStyleOptionToolBar' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionToolBox' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStyleOptionToolButton' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOptionComplex'),
    ),
    'QStyleOptionViewItem' => array(
        'lib' => 'widgets',
        'depends' => array('QStyleOption'),
    ),
    'QStylePainter' => array(
        'lib' => 'widgets',
        'depends' => array('QPainter'),
    ),
    'QStylePlugin' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QSwipeGesture' => array(
        'lib' => 'widgets',
        'depends' => array('QGesture'),
    ),
    'QSystemTrayIcon' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QTabBar' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QTableView' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemView'),
    ),
    'QTableWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QTableView'),
    ),
    'QTableWidgetItem' => array(
        'lib' => 'widgets',
    ),
    'QTableWidgetSelectionRange' => array(
        'lib' => 'widgets',
    ),
    'QTabWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QTapAndHoldGesture' => array(
        'lib' => 'widgets',
        'depends' => array('QGesture'),
    ),
    'QTapGesture' => array(
        'lib' => 'widgets',
        'depends' => array('QGesture'),
    ),
    'QTextBrowser' => array(
        'lib' => 'widgets',
        'depends' => array('QTextEdit'),
    ),
    'QTextEdit' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractScrollArea'),
    ),
    'QTileRules' => array(
        'lib' => 'widgets',
    ),
    'QTimeEdit' => array(
        'lib' => 'widgets',
        'depends' => array('QDateTimeEdit'),
    ),
    'QToolBar' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QToolBox' => array(
        'lib' => 'widgets',
        'depends' => array('QFrame'),
    ),
    'QToolButton' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractButton'),
    ),
    'QToolTip' => array(
        'lib' => 'widgets',
    ),
    'QTreeView' => array(
        'lib' => 'widgets',
        'depends' => array('QAbstractItemView'),
    ),
    'QTreeWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QTreeView'),
    ),
    'QTreeWidgetItem' => array(
        'lib' => 'widgets',
    ),
    'QTreeWidgetItemIterator' => array(
        'lib' => 'widgets',
    ),
    'QUndoCommand' => array(
        'lib' => 'widgets',
    ),
    'QUndoGroup' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QUndoStack' => array(
        'lib' => 'widgets',
        'depends' => array('QObject'),
    ),
    'QUndoView' => array(
        'lib' => 'widgets',
        'depends' => array('QListView'),
    ),
    'QVBoxLayout' => array(
        'lib' => 'widgets',
        'depends' => array('QBoxLayout'),
    ),
    'QWhatsThis' => array(
        'lib' => 'widgets',
    ),
    'QWidget' => array(
        'lib' => 'widgets',
        'depends' => array('QObject', 'QPaintDevice'),
    ),
    'QWidgetAction' => array(
        'lib' => 'widgets',
        'depends' => array('QAction'),
    ),
    'QWidgetItem' => array(
        'lib' => 'widgets',
        'depends' => array('QLayoutItem'),
    ),
    'QWizard' => array(
        'lib' => 'widgets',
        'depends' => array('QDialog'),
    ),
    'QWizardPage' => array(
        'lib' => 'widgets',
        'depends' => array('QWidget'),
    ),
    'QtWin' => array(
        'lib' => 'winextras',
    ),
    'QWinJumpListCategory' => array(
        'lib' => 'winextras',
    ),
    'QWinJumpListItem' => array(
        'lib' => 'winextras',
    ),
    'QWinMime' => array(
        'lib' => 'winextras',
    ),
    'QWinTaskbarButton' => array(
        'lib' => 'winextras',
        'depends' => array('QObject'),
    ),
    'QWinTaskbarProgress' => array(
        'lib' => 'winextras',
        'depends' => array('QObject'),
    ),
    'QWinThumbnailToolBar' => array(
        'lib' => 'winextras',
        'depends' => array('QObject'),
    ),
    'QWinThumbnailToolButton' => array(
        'lib' => 'winextras',
        'depends' => array('QObject'),
    ),
);