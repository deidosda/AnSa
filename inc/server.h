//------------------------------------------
// Author : SakhilKuliev
//------------------------------------------
#pragma once
#ifndef NETWORK_H_
#define NETWORK_H_
//------------------------------------------
#include <iostream>
#include <string>
#include <algorithm>
//------------------------------------------
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
//------------------------------------------
enum class Condition {
    IN_PROCESS,
    NEW,
    COMPLETE,
    SEND,
    GET,
};

class server {
public:
    server(std::string str);

    ~server();

    const auto get_string(const std::string cond);
private:
    std::string info_;

};
#endif NETWORK_H_

