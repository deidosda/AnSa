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
class printer
{
public:
    printer(boost::asio::io_service& io)
        : timer_(io, boost::posix_time::seconds(1)),
        count_(0)
    {
        timer_.async_wait(boost::bind(&printer::print, this));
    }

    ~printer()
    {
        std::cout << "Final count is " << count_ << std::endl;
    }

    void print()
    {
        if (count_ < 5)
        {
            std::cout << count_ << std::endl;
            ++count_;

            timer_.expires_at(timer_.expires_at() + boost::posix_time::seconds(1));
            timer_.async_wait(boost::bind(&printer::print, this));
        }
    }

private:
    boost::asio::deadline_timer timer_;
    int count_;
};
//------------------------------------------

class server {
public:
    server(std::string &str) : info_(std::move(str))
    {
        std::cout << "Success!" << std::endl;
    }

    ~server()
    {
        std::cout << "Server is closed" << std::endl;
    }

    auto get_string(std::string info)
    {
        return this->info_;
    }
private:
    std::string info_;
    
};

#endif // !NETWORK_H