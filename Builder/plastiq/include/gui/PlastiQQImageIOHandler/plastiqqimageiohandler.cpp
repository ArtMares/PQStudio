#include "plastiqmethod.h"
#include "plastiqqimageiohandler.h"

#include <QImageIOHandler> 
#include <QRect>
#include <QIODevice>
#include <QByteArray>
#include <QVariant>
#include <QImage>

QHash<QByteArray, PlastiQMethod> PlastiQQImageIOHandler::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageIOHandler::plastiqMethods = {
    { "canRead()", { "canRead", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentImageNumber()", { "currentImageNumber", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentImageRect()", { "currentImageRect", "", "QRect", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QIODevice*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QByteArray", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageCount()", { "imageCount", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "jumpToImage(int)", { "jumpToImage", "int", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "jumpToNextImage()", { "jumpToNextImage", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopCount()", { "loopCount", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextImageDelay()", { "nextImageDelay", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "option(enum)", { "option", "ImageOption", "QVariant", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(QImage*)", { "read", "QImage*", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevice(QIODevice*)", { "setDevice", "QIODevice*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QByteArray)", { "setFormat", "QByteArray&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,QVariant)", { "setOption", "ImageOption,QVariant&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsOption(enum)", { "supportsOption", "ImageOption", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QImage&)", { "write", "QImage&", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageIOHandler::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQImageIOHandler::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQImageIOHandler::plastiqConstants = {

    /* QImageIOHandler::ImageOption */
   { "Size", QImageIOHandler::Size },
   { "ClipRect", QImageIOHandler::ClipRect },
   { "Description", QImageIOHandler::Description },
   { "ScaledClipRect", QImageIOHandler::ScaledClipRect },
   { "ScaledSize", QImageIOHandler::ScaledSize },
   { "CompressionRatio", QImageIOHandler::CompressionRatio },
   { "Gamma", QImageIOHandler::Gamma },
   { "Quality", QImageIOHandler::Quality },
   { "Name", QImageIOHandler::Name },
   { "SubType", QImageIOHandler::SubType },
   { "IncrementalReading", QImageIOHandler::IncrementalReading },
   { "Endianness", QImageIOHandler::Endianness },
   { "Animation", QImageIOHandler::Animation },
   { "BackgroundColor", QImageIOHandler::BackgroundColor },
   { "ImageFormat", QImageIOHandler::ImageFormat },
   { "SupportedSubTypes", QImageIOHandler::SupportedSubTypes },
   { "OptimizedWrite", QImageIOHandler::OptimizedWrite },
   { "ProgressiveScanWrite", QImageIOHandler::ProgressiveScanWrite },
   { "ImageTransformation", QImageIOHandler::ImageTransformation },
   { "TransformedByDefault", QImageIOHandler::TransformedByDefault },

    /* QImageIOHandler::Transformation */
   { "TransformationNone", QImageIOHandler::TransformationNone },
   { "TransformationMirror", QImageIOHandler::TransformationMirror },
   { "TransformationFlip", QImageIOHandler::TransformationFlip },
   { "TransformationRotate180", QImageIOHandler::TransformationRotate180 },
   { "TransformationRotate90", QImageIOHandler::TransformationRotate90 },
   { "TransformationMirrorAndRotate90", QImageIOHandler::TransformationMirrorAndRotate90 },
   { "TransformationFlipAndRotate90", QImageIOHandler::TransformationFlipAndRotate90 },
   { "TransformationRotate270", QImageIOHandler::TransformationRotate270 },

};

QVector<PlastiQMetaObject*> PlastiQQImageIOHandler::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQImageIOHandler::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQImageIOHandler::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QImageIOHandler", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQImageIOHandler::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQImageIOHandlerWrapper : public QImageIOHandler {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    int currentImageNumber() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int currentImageNumber()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::currentImageNumber();
    }

    int PlastiQParentCall_currentImageNumber() const {
        return QImageIOHandler::currentImageNumber();
    }

    QRect currentImageRect() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QRect currentImageRect()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QRect _r = QRect(*reinterpret_cast<QRect*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::currentImageRect();
    }

    QRect PlastiQParentCall_currentImageRect() const {
        return QImageIOHandler::currentImageRect();
    }

    int imageCount() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int imageCount()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::imageCount();
    }

    int PlastiQParentCall_imageCount() const {
        return QImageIOHandler::imageCount();
    }

    bool jumpToImage(int imageNumber) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool jumpToImage(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = imageNumber;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::jumpToImage(imageNumber);
    }

    bool PlastiQParentCall_jumpToImage(int imageNumber) {
        return QImageIOHandler::jumpToImage(imageNumber);
    }

    bool jumpToNextImage() override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool jumpToNextImage()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::jumpToNextImage();
    }

    bool PlastiQParentCall_jumpToNextImage() {
        return QImageIOHandler::jumpToNextImage();
    }

    int loopCount() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int loopCount()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::loopCount();
    }

    int PlastiQParentCall_loopCount() const {
        return QImageIOHandler::loopCount();
    }

    int nextImageDelay() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int nextImageDelay()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::nextImageDelay();
    }

    int PlastiQParentCall_nextImageDelay() const {
        return QImageIOHandler::nextImageDelay();
    }

    QVariant option(ImageOption option) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant option(ImageOption)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = option;
            stack[1].name = QByteArrayLiteral("ImageOption");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::option(option);
    }

    QVariant PlastiQParentCall_option(ImageOption option) const {
        return QImageIOHandler::option(option);
    }

    void setOption(ImageOption option, const QVariant &value) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setOption(ImageOption,const QVariant&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = option;
            stack[1].name = QByteArrayLiteral("ImageOption");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QVariant");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QImageIOHandler::setOption(option,value);
    }

    void PlastiQParentCall_setOption(ImageOption option, const QVariant &value) {
        return QImageIOHandler::setOption(option,value);
    }

    bool supportsOption(ImageOption option) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool supportsOption(ImageOption)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = option;
            stack[1].name = QByteArrayLiteral("ImageOption");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::supportsOption(option);
    }

    bool PlastiQParentCall_supportsOption(ImageOption option) const {
        return QImageIOHandler::supportsOption(option);
    }

    bool write(const QImage &image) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool write(const QImage&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QImage(image) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QImage");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QImageIOHandler::write(image);
    }

    bool PlastiQParentCall_write(const QImage &image) {
        return QImageIOHandler::write(image);
    }

};

void PlastiQQImageIOHandler::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQImageIOHandlerWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQImageIOHandler *p = new PlastiQQImageIOHandler();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQImageIOHandler *p = new PlastiQQImageIOHandler();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QImageIOHandler *o = sc ? Q_NULLPTR : reinterpret_cast<QImageIOHandler*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->canRead();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_currentImageNumber();
                else _r = o->currentImageNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { /* COPY OBJECT */
            QRect *_r;
                if (isWrapper) _r = new QRect(((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_currentImageRect());
                else _r = new QRect(o->currentImageRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { QIODevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 4: { QByteArray _r = o->format();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 5: { int _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_imageCount();
                else _r = o->imageCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_jumpToImage(stack[1].s_int);
                else _r = o->jumpToImage(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_jumpToNextImage();
                else _r = o->jumpToNextImage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { int _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_loopCount();
                else _r = o->loopCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_nextImageDelay();
                else _r = o->nextImageDelay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_option(QImageIOHandler::ImageOption(stack[1].s_int64)));
                else _r = new QVariant(o->option(QImageIOHandler::ImageOption(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { bool _r = o->read(reinterpret_cast<QImage*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: o->setDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setFormat(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_setOption(QImageIOHandler::ImageOption(stack[1].s_int64),
                    stack[2].s_variant);
                else o->setOption(QImageIOHandler::ImageOption(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_supportsOption(QImageIOHandler::ImageOption(stack[1].s_int64));
                else _r = o->supportsOption(QImageIOHandler::ImageOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r;
                if (isWrapper) _r = ((PlastiQQImageIOHandlerWrapper*)o)->PlastiQParentCall_write((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                else _r = o->write((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QImageIOHandler *o = reinterpret_cast<QImageIOHandler*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQImageIOHandler::~PlastiQQImageIOHandler() {
    QImageIOHandler* o = reinterpret_cast<QImageIOHandler*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
