#pragma once
#include <cstdint>
#include <WinSock2.h>
#include "../public/define.h"

namespace network::tcp::iocp::client_use {
	// 事件信息
	struct event_info {
		SOCKET			socket;	//套接字
		char			ip[16];	//地址
		uint16_t		port;	//端口
		char*			buf;	//事件数据

		event_info();
		event_info(const event_info&) = delete;
		event_info& operator =(const event_info&) = delete;
		~event_info() = default;
	};

#include "source/event_info.icc"
}