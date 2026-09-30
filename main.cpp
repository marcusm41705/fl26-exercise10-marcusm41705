// main.cpp
#include "widget_events.hpp"
#include <QApplication>
int main(int argc, char *argv[])
{
QApplication app(argc, argv);
WidgetEvent widget;
widget.resize(500,300);
widget.show();
      return app.exec();
}
