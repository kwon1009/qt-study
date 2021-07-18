#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int v = 10;
    qDebug() << "Hello World. value: " << v;
    qDebug("Qt First Program, this value: %d", v);

    return a.exec();
}
