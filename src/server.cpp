//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
// Internal including
#include "..\inc\server.h"
//------------------------------------------
// Standart Library Including
#include <iostream>
#include <fstream>
//------------------------------------------
// External Library including
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>
//------------------------------------------
server::server()
{
    std::cout << "Server is created!" << std::endl;
    server::serv_status_ = Server_status::WORK;
}
//------------------------------------------
server::~server()
{
    std::cout << "Server is closed" << std::endl;
    server::serv_status_ = Server_status::SLEEP;
}
void server::set_connection()
{
    
}
/*
 * This function takes data from a structure that has fields in its :
 * name_ - user current name
 * id-   - user current id
 * mail_ - user current mail
 * addr_ - user current ip address
 * We read data from these fields and send it to the database.
*/
void server::save_data(client& user)
{
    server::db.open("Database\\database.txt", std::ios::app);  
    db  << "------------------------------" << '\n'
        << "Name : "    << user.info.name_  << '\n'
        << "ID :"       << user.info.id_    << '\n'
        << "Mail :"     << user.info.mail_  << '\n'
        << "Address : " << user.info.addr_  << '\n'
        << "------------------------------" << '\n';

}
//------------------------------------------