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
inline server::server(std::string str) : info_(std::move(str))
{
    std::cout << "Success!" << std::endl;
}
//------------------------------------------
inline server::~server()
{
    std::cout << "Server is closed" << std::endl;
}
//------------------------------------------
inline const auto server::get_string(const std::string cond)
{
    return this->info_;
}
//------------------------------------------