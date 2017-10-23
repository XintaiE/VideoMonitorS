#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QtSql>
#endif // DATABASE_H



static bool createConnection()
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
    }
    db.setHostName("localhost");
    db.setDatabaseName("XGT.db");
    db.setUserName("root");
    db.setPassword("123456");
    if(!db.open())
    {
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());

        return false;
    }
#if 1
    QSqlQuery query;
    query.exec(QObject::tr("creat table workrecord(NUMBER INT PRIMARY KEY NOT NULL,TIME DATATIME NOT NULL,"
                           "T VARCHAR(40) NOT NULL,A INT NOT NULL,MOMENT VARCHAR(40),AMPLITUDE FOLAT NOT NULL,"
                           "WEIGHT FLOAT NOT NULL,HEIGHT FOLAT NOT NULL,WINDSPEED FLOAT NOT NULL,"
                           "ROTARY FLOAT NOT NULL,ELEVATION FLOAT NULL,TOWERNUMBER VARCHAR(40),"
                           "ID INT NOT NULL)"));

    query.exec(QObject::tr("creat table anticollisionrecord(NUMBER INT PRIMARY KEY NOT NULL,TIME DATATIME NOT NULL,"
                           "CARINSTRUTION TEXT,ROTARYSTRUTION TEXT NOT NULL,TOWERNUMBER VARCHAR(40) NOT NULL,"
                           "ID INT NOT NULL)"));

    query.exec(QObject::tr("creat table calibrationreecord(NUMBER INT PRIMARY KEY NOT NULL,TIME DATATIME NOT NULL,"
                           "AMPLITUDEK FOLAT NOT NULL,WEIGHTK1 FOLAT NOT NULL,WEIGHTK2 FLOAT NOT NULL,"
                           "WEIGHTK3 FLOAT NOT NULL,HEIGHTK FLOAT NOT NULL,ROTARY FLOAT NOT NULL,ELEVATION FLOAT "
                           "NOT NULL,TOWERNUMBER VARCHAR(40) NOT NULL,ID INT NOT NULL)"));

    query.exec(QObject::tr("creat table windspeedrecord(NUMBER INT PRIMARY KEY NOT NULL,TIME DATATIME NOT NULL,"
                           "WINDSPEED FLOAT NOT NULL,TOWERNUMBER VARCHAR(40) NOT NULL,ID INT NOT NULL)"));
#endif

}

//
static bool closeConnection()
{
    QSqlDatabase::database().close();
    return 1;
}

