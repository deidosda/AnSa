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
#include <boost/bind/bind.hpp>
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
void server::save_data(client& user)
{
    server::db.open("C:\\Users\\kobri\\source\\repos\\Ansa\\Database\\database.txt", std::ios::app);
    
    db  << "------------------------------" << '\n'
        << "Name : "    << user.info.name_  << '\n'
        << "ID :"       << user.info.id_    << '\n'
        << "Mail :"     << user.info.mail_  << '\n'
        << "Address : " << user.info.addr_  << '\n'
        << "------------------------------" << '\n';
}
//------------------------------------------