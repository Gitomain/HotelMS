#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include<QtSql/qsqlquery.h>
#include<QtSql/QSqlDriver>
#include<QString>
#include<QtSql/QSqlDatabase>
#include<QObject>
static bool connectiondatabase()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("hotel");
    db.setUserName("user");
    db.setPassword("123456");
    if(!db.open())
    {
        return false;
    }
    return true;
}

#endif // DATABASECONNECTION_H
