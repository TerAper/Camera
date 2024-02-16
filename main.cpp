#include "cameraconnection.h"
#include <QApplication>
#include <QtMultimedia/QCameraInfo>

int main(int argc, char *argv[])
{    QApplication a(argc, argv);


    CameraConnection w;
    w.show();

    return a.exec();

}
