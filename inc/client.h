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
    /*
     * name_ - client current name
     * id_   - client current id
     * mail_ - client current mail
     * arrd_ - client current ip address
    */

    std::string     name_;
    uint16_t        id_;
    std::string     mail_;
    std::string     addr_;
};

class client
{
public:
    //------------------------------------------
    client(user_data u);;
    ~client();
    //------------------------------------------
    void server_connect();
    void send_request();        
    void show_information(); 
    //------------------------------------------
    user_data info;
};
#endif CLIENT_H
