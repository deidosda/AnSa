//------------------------------------------
// Author : SakhilKuliev
//------------------------------------------
// Internal including
#include "..\inc\server.h"
#include "..\inc\network.h"
//------------------------------------------
// Standart Library Including
#include <iostream>
//------------------------------------------
// External Library including
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
//------------------------------------------
// namespace typedef`s
namespace net = boost::asio;
//------------------------------------------
int main() {
    /*net::io_service io;
    printer p(io);
    io.run();*/

    server serv;
    std::cout << static_cast<int>(serv.cond_);// TEST
}
//------------------------------------------