// widget_events.cpp
#include "widget_events.hpp"
#include <iostream>
#include <QMetaEnum>
#include <QEvent>
#include <QString>
template<typename EnumType>
QString ToString(const EnumType& enumValue){
    const char* enumName = qt_getEnumName(enumValue);
    const QMetaObject* metaObject = qt_getEnumMetaObject(enumValue);
    if(metaObject){
        const int enumIndex = metaObject->indexOfEnumerator(enumName);
        return QString("%1::%2::%3").arg(metaObject->className(), enumName, metaObject->enumerator(enumIndex).valueToKey(enumValue));

    }
    return QString("%1::%2").arg(enumName).arg(enumName).arg(static_cast<int>(enumValue));
}
WidgetEvent::WidgetEvent(QWidget *parent) : QWidget(parent){

}
bool WidgetEvent::event(QEvent *event){
    std::cout << ToString(event->type()).toStdString() << std::endl;
   // std::string input;
    //std::cout << "type something: ";
    //std::cin >> input;
    return true;
    

}
