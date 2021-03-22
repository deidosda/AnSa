//------------------------------------------
// Author : SakhilKuliev
//------------------------------------------
#pragma once
#ifndef SERVER_H_
#define SERVER_H_
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
    NEW = 0,
    IN_PROCESS = 1,
    COMPLETE = 2,
    SEND = 3,
    GET = 4,
};

class server {
public:
    server();
    ~server();

    Condition set_status(const Condition& cond);
    const Condition get_status(const Condition& cond);
//private?
    std::string info_;
    Condition cond_;

};
#endif SERVER_H_
//------------------------------------------