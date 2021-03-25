//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
#pragma once
//------------------------------------------
#include <iostream>
//------------------------------------------
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
//------------------------------------------
// namespace typedef`s
namespace net = boost::asio;
//------------------------------------------
class printer
{
public:
    printer(net::io_service& io)
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
    net::deadline_timer timer_;
    int count_;
};
//------------------------------------------