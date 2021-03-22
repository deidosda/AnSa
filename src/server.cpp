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
server::server()
{
    std::cout << "Success!" << std::endl;
}
//------------------------------------------
server::~server()
{
    std::cout << "Server is closed" << std::endl;
}

// Set status from enum class for object
Condition server::set_status(const Condition& cond)
{
    return this->cond_ = cond;
}
// Get status from enum slass for object
const Condition server::get_status(const Condition& cond)
{
    return this->cond_;
}
//------------------------------------------