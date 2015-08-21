#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    qDebug() << "Hello, world!";

    const QString &s = "This is a test.";

    qDebug() << s;

    qDebug("%s", qPrintable(s));

    qDebug() << s.size();

    return a.exec();
}
