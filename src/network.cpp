#include "..\inc\network.h"
/*
bool network::check_address(net& c_net)
{
    if (c_net.ec.value() != 0) {
        std::cout << "Failed to parse the ip " << c_net.ec.value() << ' ' << " Message " << c_net.ec.message() << std::endl;

        return c_net.ec.value();
    }
    else {
        boost::asio::ip::address ip_adr = boost::asio::ip::address::from_string(c_net.r_ip_addr);
        c_net.endpointer = boost::asio::ip::tcp::endpoint(ip_adr, c_net.port);
        return 0;
    }
}
*/