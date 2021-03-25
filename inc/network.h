//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
// Preprocessor directives
#pragma once
#ifndef NETWORK_H
#define NETWORK_H

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif _WIN32_WINNT
#define ASIO_STANDALONE
//------------------------------------------
// Standart Libray Including
#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>
#include <queue>
#include <cstdint>
#include <optional>
#include <algorithm>
#include <vector>
#include <memory>
//------------------------------------------
// External Library Including
#include <boost/asio.hpp>
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>
//------------------------------------------
/*
struct net
{
    std::string r_ip_addr{};
    unsigned short port{};
    boost::asio::ip::tcp::endpoint endpointer;
    boost::asio::ip::tcp::socket socket;
    boost::system::error_code ec;
};
*/
//------------------------------------------
/*
class network {
public:
    network();
    ~network();

    bool check_address(net &c_net);
    net c_net;
    boost::asio::io_service service;
};
*/
//------------------------------------------
#endif NETWORK_H