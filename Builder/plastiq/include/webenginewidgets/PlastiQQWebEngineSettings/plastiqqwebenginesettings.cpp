#include "plastiqmethod.h"
#include "plastiqqwebenginesettings.h"

#include <QWebEngineSettings> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineSettings::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineSettings::plastiqMethods = {
    { "defaultTextEncoding()", { "defaultTextEncoding", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontFamily(enum)", { "fontFamily", "FontFamily", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontSize(enum)", { "fontSize", "FontSize", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetAttribute(enum)", { "resetAttribute", "WebAttribute", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetFontFamily(enum)", { "resetFontFamily", "FontFamily", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetFontSize(enum)", { "resetFontSize", "FontSize", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAttribute(enum,bool)", { "setAttribute", "WebAttribute,bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultTextEncoding(QString)", { "setDefaultTextEncoding", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontFamily(enum,QString)", { "setFontFamily", "FontFamily,QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontSize(enum,int)", { "setFontSize", "FontSize,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testAttribute(enum)", { "testAttribute", "WebAttribute", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultSettings()", { "defaultSettings", "", "QWebEngineSettings*", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "globalSettings()", { "globalSettings", "", "QWebEngineSettings*", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineSettings::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineSettings::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineSettings::plastiqConstants = {

    /* QWebEngineSettings::FontFamily */
   { "StandardFont", QWebEngineSettings::StandardFont },
   { "FixedFont", QWebEngineSettings::FixedFont },
   { "SerifFont", QWebEngineSettings::SerifFont },
   { "SansSerifFont", QWebEngineSettings::SansSerifFont },
   { "CursiveFont", QWebEngineSettings::CursiveFont },
   { "FantasyFont", QWebEngineSettings::FantasyFont },
   { "PictographFont", QWebEngineSettings::PictographFont },

    /* QWebEngineSettings::FontSize */
   { "MinimumFontSize", QWebEngineSettings::MinimumFontSize },
   { "MinimumLogicalFontSize", QWebEngineSettings::MinimumLogicalFontSize },
   { "DefaultFontSize", QWebEngineSettings::DefaultFontSize },
   { "DefaultFixedFontSize", QWebEngineSettings::DefaultFixedFontSize },

    /* QWebEngineSettings::WebAttribute */
   { "AutoLoadImages", QWebEngineSettings::AutoLoadImages },
   { "JavascriptEnabled", QWebEngineSettings::JavascriptEnabled },
   { "JavascriptCanOpenWindows", QWebEngineSettings::JavascriptCanOpenWindows },
   { "JavascriptCanAccessClipboard", QWebEngineSettings::JavascriptCanAccessClipboard },
   { "LinksIncludedInFocusChain", QWebEngineSettings::LinksIncludedInFocusChain },
   { "LocalStorageEnabled", QWebEngineSettings::LocalStorageEnabled },
   { "LocalContentCanAccessRemoteUrls", QWebEngineSettings::LocalContentCanAccessRemoteUrls },
   { "XSSAuditingEnabled", QWebEngineSettings::XSSAuditingEnabled },
   { "SpatialNavigationEnabled", QWebEngineSettings::SpatialNavigationEnabled },
   { "LocalContentCanAccessFileUrls", QWebEngineSettings::LocalContentCanAccessFileUrls },
   { "HyperlinkAuditingEnabled", QWebEngineSettings::HyperlinkAuditingEnabled },
   { "ScrollAnimatorEnabled", QWebEngineSettings::ScrollAnimatorEnabled },
   { "ErrorPageEnabled", QWebEngineSettings::ErrorPageEnabled },
   { "PluginsEnabled", QWebEngineSettings::PluginsEnabled },
   { "FullScreenSupportEnabled", QWebEngineSettings::FullScreenSupportEnabled },
   { "ScreenCaptureEnabled", QWebEngineSettings::ScreenCaptureEnabled },
   { "WebGLEnabled", QWebEngineSettings::WebGLEnabled },
   { "Accelerated2dCanvasEnabled", QWebEngineSettings::Accelerated2dCanvasEnabled },
   { "AutoLoadIconsForPage", QWebEngineSettings::AutoLoadIconsForPage },
   { "TouchIconsEnabled", QWebEngineSettings::TouchIconsEnabled },
   { "FocusOnNavigationEnabled", QWebEngineSettings::FocusOnNavigationEnabled },
   { "PrintElementBackgrounds", QWebEngineSettings::PrintElementBackgrounds },
   { "AllowRunningInsecureContent", QWebEngineSettings::AllowRunningInsecureContent },

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineSettings::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWebEngineSettings::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWebEngineSettings::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWebEngineSettings", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineSettings::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineSettings::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineSettings *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineSettings *p = new PlastiQQWebEngineSettings();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineSettings *p = new PlastiQQWebEngineSettings();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineSettings *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineSettings*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->defaultTextEncoding();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->fontFamily(QWebEngineSettings::FontFamily(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { int _r = o->fontSize(QWebEngineSettings::FontSize(stack[1].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: o->resetAttribute(QWebEngineSettings::WebAttribute(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->resetFontFamily(QWebEngineSettings::FontFamily(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->resetFontSize(QWebEngineSettings::FontSize(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setAttribute(QWebEngineSettings::WebAttribute(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setDefaultTextEncoding(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFontFamily(QWebEngineSettings::FontFamily(stack[1].s_int64),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setFontSize(QWebEngineSettings::FontSize(stack[1].s_int64),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: { bool _r = o->testAttribute(QWebEngineSettings::WebAttribute(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { QWebEngineSettings* _r = sc ? QWebEngineSettings::defaultSettings() : o->defaultSettings();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineSettings"; } break;
        case 12: { QWebEngineSettings* _r = sc ? QWebEngineSettings::globalSettings() : o->globalSettings();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineSettings"; } break;

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
        QWebEngineSettings *o = reinterpret_cast<QWebEngineSettings*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWebEngineSettings::~PlastiQQWebEngineSettings() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
