//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
// Internal including
#include "..\inc\server.h"
#include "..\inc\client.h"
//------------------------------------------
// Standart Library Including
#include <iostream>
#include <algorithm>
//------------------------------------------
// External Library including
#include <boost/bind/bind.hpp>
//------------------------------------------

client::client(user_data user) : info(user)
{
    std::cout << "Client is created!" << std::endl;
}

//------------------------------------------
client::~client()
{
    std::cout << "Client exit from programm" << std::endl;
}
//------------------------------------------
/*
 * In this function we send data about our client to the server and later it will be in the database.
 * client & user - is a reference to an object of type client
*/
void client::server_connect(client &user)
{

}
//------------------------------------------
/*
 * In this function we send data about our client to the serverand later it will be in the database.
*/
void client::send_request()
{
    
}
//------------------------------------------
/*
* In this function, we retrieve data from the server and display them to our user.
* client & user - is a reference to an object of type client
*/
void client::show_information(client &user)
{
    std::cout

        << "Name : " << user.info.name_ << '\n'

        <<"ID :" << user.info.id_ << '\n'

        << "Address : " << user.info.addr_ 
         
   << std::endl;
}
//------------------------------------------

