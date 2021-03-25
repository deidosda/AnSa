//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
// Internal including
#include "..\inc\server.h"
//------------------------------------------
// Standart Library Including
#include <iostream>
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
//------------------------------------------