#include "plastiqmethod.h"
#include "plastiqqicon.h"

#include <QIcon> 
#include <QSize>
#include <QString>
#include <QPixmap>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQIcon::plastiqConstructors = {
    { "QIcon()", { "QIcon", "", "QIcon*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIcon(QPixmap&)", { "QIcon", "QPixmap&", "QIcon*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIcon(QIcon&)", { "QIcon", "QIcon&", "QIcon*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIcon(QIcon&&)", { "QIcon", "QIcon&&", "QIcon*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIcon(QString)", { "QIcon", "QString&", "QIcon*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIcon(QIconEngine*)", { "QIcon", "QIconEngine*", "QIcon*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIcon::plastiqMethods = {
    { "actualSize(QSize&)", { "actualSize", "QSize&", "QSize", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actualSize(QSize&,enum)", { "actualSize", "QSize&,Mode", "QSize", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actualSize(QSize&,enum,enum)", { "actualSize", "QSize&,Mode,State", "QSize", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actualSize(QWindow*,QSize&)", { "actualSize", "QWindow*,QSize&", "QSize", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actualSize(QWindow*,QSize&,enum)", { "actualSize", "QWindow*,QSize&,Mode", "QSize", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actualSize(QWindow*,QSize&,enum,enum)", { "actualSize", "QWindow*,QSize&,Mode,State", "QSize", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addFile(QString)", { "addFile", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addFile(QString,QSize&)", { "addFile", "QString&,QSize&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addFile(QString,QSize&,enum)", { "addFile", "QString&,QSize&,Mode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addFile(QString,QSize&,enum,enum)", { "addFile", "QString&,QSize&,Mode,State", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPixmap(QPixmap&)", { "addPixmap", "QPixmap&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPixmap(QPixmap&,enum)", { "addPixmap", "QPixmap&,Mode", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPixmap(QPixmap&,enum,enum)", { "addPixmap", "QPixmap&,Mode,State", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cacheKey()", { "cacheKey", "", "qint64", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMask()", { "isMask", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,QRect&)", { "paint", "QPainter*,QRect&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,QRect&,enum)", { "paint", "QPainter*,QRect&,Qt::Alignment", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,QRect&,enum,enum)", { "paint", "QPainter*,QRect&,Qt::Alignment,Mode", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,QRect&,enum,enum,enum)", { "paint", "QPainter*,QRect&,Qt::Alignment,Mode,State", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,int,int,int,int)", { "paint", "QPainter*,int,int,int,int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,int,int,int,int,enum)", { "paint", "QPainter*,int,int,int,int,Qt::Alignment", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,int,int,int,int,enum,enum)", { "paint", "QPainter*,int,int,int,int,Qt::Alignment,Mode", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,int,int,int,int,enum,enum,enum)", { "paint", "QPainter*,int,int,int,int,Qt::Alignment,Mode,State", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(QSize&)", { "pixmap", "QSize&", "QPixmap", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(QSize&,enum)", { "pixmap", "QSize&,Mode", "QPixmap", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(QSize&,enum,enum)", { "pixmap", "QSize&,Mode,State", "QPixmap", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(int,int)", { "pixmap", "int,int", "QPixmap", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(int,int,enum)", { "pixmap", "int,int,Mode", "QPixmap", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(int,int,enum,enum)", { "pixmap", "int,int,Mode,State", "QPixmap", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(int)", { "pixmap", "int", "QPixmap", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(int,enum)", { "pixmap", "int,Mode", "QPixmap", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(int,enum,enum)", { "pixmap", "int,Mode,State", "QPixmap", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(QWindow*,QSize&)", { "pixmap", "QWindow*,QSize&", "QPixmap", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(QWindow*,QSize&,enum)", { "pixmap", "QWindow*,QSize&,Mode", "QPixmap", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(QWindow*,QSize&,enum,enum)", { "pixmap", "QWindow*,QSize&,Mode,State", "QPixmap", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIsMask(bool)", { "setIsMask", "bool", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QIcon&)", { "swap", "QIcon&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromTheme(QString)", { "fromTheme", "QString&", "QIcon", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromTheme(QString,QIcon&)", { "fromTheme", "QString&,QIcon&", "QIcon", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hasThemeIcon(QString)", { "hasThemeIcon", "QString&", "bool", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setThemeName(QString)", { "setThemeName", "QString&", "void", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setThemeSearchPaths(QStringList&)", { "setThemeSearchPaths", "QStringList&", "void", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "themeName()", { "themeName", "", "QString", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "themeSearchPaths()", { "themeSearchPaths", "", "QStringList", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIcon::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQIcon::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQIcon::plastiqConstants = {

    /* QIcon::Mode */
   { "Normal", QIcon::Normal },
   { "Disabled", QIcon::Disabled },
   { "Active", QIcon::Active },
   { "Selected", QIcon::Selected },

    /* QIcon::State */
   { "On", QIcon::On },
   { "Off", QIcon::Off },

};

QVector<PlastiQMetaObject*> PlastiQQIcon::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQIcon::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQIcon::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QIcon", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQIcon::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQIcon::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QIcon *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QIcon(); break;
        case 1: o = new QIcon((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))); break;
        case 2: o = new QIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp))); break;
        case 3: o = new QIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp))); break;
        case 4: o = new QIcon(stack[1].s_string); break;
        case 5: o = new QIcon(reinterpret_cast<QIconEngine*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQIcon *p = new PlastiQQIcon();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQIcon *p = new PlastiQQIcon();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 46) {
            id -= 46;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QIcon *o = sc ? Q_NULLPTR : reinterpret_cast<QIcon*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSize *_r = new QSize(o->actualSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QSize *_r = new QSize(o->actualSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QSize *_r = new QSize(o->actualSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QSize *_r = new QSize(o->actualSize(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QSize *_r = new QSize(o->actualSize(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QSize *_r = new QSize(o->actualSize(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64),
                    QIcon::State(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: o->addFile(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->addFile(stack[1].s_string,
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->addFile(stack[1].s_string,
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->addFile(stack[1].s_string,
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64),
                    QIcon::State(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->addPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->addPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->addPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: { long _r = o->cacheKey();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 14: { bool _r = o->isMask();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    Qt::Alignment(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    Qt::Alignment(stack[3].s_int64),
                    QIcon::Mode(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    Qt::Alignment(stack[3].s_int64),
                    QIcon::Mode(stack[4].s_int64),
                    QIcon::State(stack[5].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    Qt::Alignment(stack[6].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    Qt::Alignment(stack[6].s_int64),
                    QIcon::Mode(stack[7].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    Qt::Alignment(stack[6].s_int64),
                    QIcon::Mode(stack[7].s_int64),
                    QIcon::State(stack[8].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(stack[1].s_int,
                    stack[2].s_int,
                    QIcon::Mode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(stack[1].s_int,
                    stack[2].s_int,
                    QIcon::Mode(stack[3].s_int64),
                    QIcon::State(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(stack[1].s_int,
                    QIcon::Mode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(stack[1].s_int,
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64),
                    QIcon::State(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: o->setIsMask(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->swap((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 39: { /* COPY OBJECT */
            QIcon *_r = sc ? new QIcon(QIcon::fromTheme(stack[1].s_string)) : new QIcon(o->fromTheme(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { /* COPY OBJECT */
            QIcon *_r = sc ? new QIcon(QIcon::fromTheme(stack[1].s_string,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)))) : new QIcon(o->fromTheme(stack[1].s_string,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: { bool _r = sc ? QIcon::hasThemeIcon(stack[1].s_string) : o->hasThemeIcon(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: if(sc) { QIcon::setThemeName(stack[1].s_string); } else { o->setThemeName(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 43: if(sc) { QIcon::setThemeSearchPaths((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); } else { o->setThemeSearchPaths((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 44: { QString _r = sc ? QIcon::themeName() : o->themeName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 45: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QIcon::themeSearchPaths()) : new QStringList(o->themeSearchPaths());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QIcon *o = reinterpret_cast<QIcon*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQIcon::~PlastiQQIcon() {
    QIcon* o = reinterpret_cast<QIcon*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
