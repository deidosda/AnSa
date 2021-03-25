//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
// Preprocessor directives
#pragma once
#ifndef NETOWRK_MESSAGES_H
#define NETOWRK_MESSAGES_H

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
namespace olc
{
    namespace data
    {
        template<typename T>
        struct message_header
        {
            T id{};
            uint32_t size = 0;
        };

        template<typename T>
        struct message
        {
            message_header<T> header{};
            std::vector<uint8_t> body;

            std::size_t size() const
            {
                return sizeof(message_header<T>) + body.size();
            }

            friend std::ostream& operator<<(std::ostream& os, const message_header<T>& msg)
            {
                os << "ID : " << int(msg.header.id) << " Size : " << msg.header.size();
                return os;
            }
        };
    }
}



#endif NETOWRK_MESSAGES_H