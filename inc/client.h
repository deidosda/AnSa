//------------------------------------------
// Author : Sakhil Kuliev
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
#include <string>
#include <cstdint>
#include <fstream>
//------------------------------------------
// External Library including
#include <boost/bind/bind.hpp>
//------------------------------------------ 
struct user_data
{
    std::string     name_;
    uint8_t         id_;
    std::string     email_;
    std::string     addr_;
};

class client
{
public:
    client(user_data u);;
    ~client();

    void server_connect(client &user);
    void send_request();        
    void show_information(client &user); 


    //------------------------------------------
    /*
     * name_ - client current name
     * id_   - client current id
     * arrd_ - client current address
    */
    //------------------------------------------
    user_data info;
};
#endif CLIENT_H
