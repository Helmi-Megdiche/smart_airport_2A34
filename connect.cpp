#include "connect.h"

connection::connection()
{

}
bool connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("cart");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("Waelsb09");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;


    return  test;
}
void connection::closeconnect() {db.close();}
