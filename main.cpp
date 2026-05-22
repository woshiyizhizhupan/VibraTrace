#include "VibraTrace.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    VibraTrace window;
    window.show();
    return app.exec();
}
