#pragma once

#include <iostream>
#include <bitset>

using namespace std;

typedef struct canMsgMatchTable
{
	uint16_t messageid;
	uint8_t* pbitarray;
	uint8_t arrlen;
} S_CAN_MSG_MATCH_TABLE;

uint64_t candata = 0;

uint8_t arr_568[7] = { 32,2,4,1,9,8,8 };

S_CAN_MSG_MATCH_TABLE g_can_msg_table[1] = {
	 { 568, arr_568, sizeof(arr_568) / sizeof(uint8_t) }
};