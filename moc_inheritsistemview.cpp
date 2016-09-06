/****************************************************************************
** Meta object code from reading C++ file 'inheritsistemview.h'
**
** Created: Mon Jun 27 15:07:15 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MouseHandTrackingLK/inheritsistemview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inheritsistemview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InheritSistemView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      44,   18,   18,   18, 0x0a,
      68,   18,   18,   18, 0x0a,
      97,   18,   18,   18, 0x0a,
     124,   18,   18,   18, 0x0a,
     148,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InheritSistemView[] = {
    "InheritSistemView\0\0on_buttonStart_clicked()\0"
    "on_buttonStop_clicked()\0"
    "on_buttonHistogram_clicked()\0"
    "on_buttonContour_clicked()\0"
    "on_buttonExit_clicked()\0"
    "on_buttonPetunjuk_clicked()\0"
};

const QMetaObject InheritSistemView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InheritSistemView,
      qt_meta_data_InheritSistemView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InheritSistemView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InheritSistemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InheritSistemView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InheritSistemView))
        return static_cast<void*>(const_cast< InheritSistemView*>(this));
    if (!strcmp(_clname, "Ui::SIstemView"))
        return static_cast< Ui::SIstemView*>(const_cast< InheritSistemView*>(this));
    if (!strcmp(_clname, "listener"))
        return static_cast< listener*>(const_cast< InheritSistemView*>(this));
    return QWidget::qt_metacast(_clname);
}

int InheritSistemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_buttonStart_clicked(); break;
        case 1: on_buttonStop_clicked(); break;
        case 2: on_buttonHistogram_clicked(); break;
        case 3: on_buttonContour_clicked(); break;
        case 4: on_buttonExit_clicked(); break;
        case 5: on_buttonPetunjuk_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
