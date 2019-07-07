#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include<QSqlDatabase>



bool opendatabase();


int main(int argc, char *argv[])
{
    opendatabase();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
bool opendatabase()
{
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("./student.db");
    if(mydb.open())
    {
        qDebug()<<"open success";
        return true;
    }
    else
    {
        qDebug()<<"open failed";
        return false;
    }
}
