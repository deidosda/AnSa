//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
#pragma once
#ifndef SERVER_H
#define SERVER_H
//------------------------------------------
// Standart Library Including
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
//------------------------------------------
// Internal including
#include "..\inc\network.h"
#include "..\inc\client.h"
//------------------------------------------
// External Library including
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>
//------------------------------------------
enum class Status {
    NEW = 0,
    IN_PROCESS = 1,
    COMPLETE = 2,
    SEND = 3,
    GET = 4,
};

enum class Server_status {
    WORK            = 0,
    SLEEP           = 1,
    TO_SOMETHING    = 2
};
//------------------------------------------
class server {
public:
    //------------------------------------------
    server();
    ~server();
    //------------------------------------------
    void set_connection();
    void save_data(client& user);
    //------------------------------------------
    Status status_;
    Server_status serv_status_;
    std::fstream db;
    static int users_count;
};

#endif SERVER_H
//------------------------------------------