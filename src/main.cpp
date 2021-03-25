//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
// Internal including
#include "..\inc\server.h"
#include "..\inc\network.h"
#include "..\inc\client.h"
//------------------------------------------
// Standart Library Including
#include <iostream>
//------------------------------------------
// External Library including
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>
#include <boost/asio/basic_socket.hpp>
//------------------------------------------
// namespace typedef`s
namespace net = boost::asio;

//----------------------------
int main() {
    system("chcp 1251");
    boost::asio::io_context context;
    boost::asio::ip::address address = boost::asio::ip::address::from_string("93.184.216.34");
    context.run();

    boost::system::error_code ec;
    boost::asio::ip::tcp::socket socket(context);
    std::string str;
    //boost::asio::buffer(str);
    boost::asio::ip::tcp::endpoint enpoint(address, 80);
    socket.open(boost::asio::ip::tcp::v4());
    std::vector<char> data(socket.available());
    if (socket.is_open()) {
        std::cout << "Is open!" << std::endl;
        socket.connect(enpoint);
        //boost::asio::write(socket, boost::asio::buffer(data));
        boost::asio::read(socket, boost::asio::buffer(data));

    }
    else {
        std::cout << "Is close!" << std::endl;
        std::cout << "Value : " << ec.value() << "Message : " << ec.message() << std::endl;
    }

}
//------------------------------------------
void set_user(user_data& u_data);
//------------------------------------------

void set_user(user_data& u_data)
{
    std::cin >> u_data.name_;
    std::cin >> u_data.id_;
    std::cin >> u_data.mail_;
    std::cin >> u_data.addr_;
}
void save() {
    /*net::io_service io;
printer p(io);
io.run();*/
//Server_status s_stat; // Enum class of server status

//std::cout << static_cast<int>(serv.serv_status_) << std::endl; ;// TEST

//server serv;

//user_data user
//{
//    .name_ = {"Sakhil"},
//    .id_ = 1,
//    .mail_ = {"ses@inbox.ru"},
//    .addr_ = {"191.168.0.1" },
//};

//set_user(user);

//client demon(user);
//demon.show_information();
//serv.save_data(demon);
}