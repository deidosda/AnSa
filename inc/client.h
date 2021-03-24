//------------------------------------------
// Author : SakhilKuliev
//------------------------------------------
// Preprocessor directive
#pragma once
#ifndef CLIENT_H
#define CLIENT_H
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
class client
{
    client();
    ~client();

    void server_connect();
    void send_request();

    Status client_status_;
};
#endif CLIENT_H
