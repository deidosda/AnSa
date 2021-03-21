//------------------------------------------
// Author : SakhilKuliev
//------------------------------------------
#include <iostream>
//------------------------------------------
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
//------------------------------------------
#include "../inc/network.h"
//------------------------------------------
int main() {
    boost::asio::io_service io;
    
    printer p(io);

    io.run();
}
//------------------------------------------