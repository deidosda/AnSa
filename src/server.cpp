//------------------------------------------
// Author : SakhilKuliev
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
server::server() : cond_{Condition::NEW}
{
    std::cout << "Success!" << std::endl;
}
//------------------------------------------
server::~server()
{
    std::cout << "Server is closed" << std::endl;
}

//------------------------------------------