#define _CRT_SECURE_NO_WARNINGS  

#include "hade.h"


uint64_t test1()
{
	uint64_t candata;
	cout << "输入data" << endl;
	cin >> hex >> candata;
	return candata;
}




uint64_t ReverseByte(const uint64_t& bitsetrets)
{
	uint64_t tempdata = 0;
	uint64_t tempdata_cp = bitsetrets;
	uint64_t destdata = 0;

	for (int i = 0; i < 8; i++) {
		tempdata = (tempdata_cp & ~((uint64_t)0xFFFFFFFFFFFFFFFF >> 8)) >> (64 - 8);
		uint64_t boy = 0;
		for (int i = 0; i < 8; i++)
		{
			boy <<= 1;
			boy ^= tempdata & 1;
			tempdata >>= 1;
		}
		tempdata_cp = tempdata_cp << 8;
		boy = boy << (64 - (i + 1) * 8);
		destdata |= boy;
	}
	return destdata;
}
uint64_t Reversebit(const uint64_t& bitsetrets, const uint8_t arr[], int len)
{
	uint64_t tempdata = 0;
	uint64_t tempdata_cp = bitsetrets;
	uint64_t destdata = 0;
	int k = 0;

	for (int i = 0; i < len; i++) {
		tempdata = (tempdata_cp & ~((uint64_t)0xFFFFFFFFFFFFFFFF << arr[i]));//>> (64 - arr[i])
		uint64_t boy = 0;
		for (int j = 0; j < arr[i]; j++)
		{
			boy <<= 1;
			boy ^= tempdata & 1;
			tempdata >>= 1;
		}
		tempdata_cp = tempdata_cp >> arr[i];
		if (i > 0)
		{
			k += arr[i - 1];
			boy = boy << k;
		}
		destdata |= boy;
	}
	return destdata;
}

uint16_t test2()
{
	//byte里的bit反转
//uint16_t a = 0x204b5982a6046000;
	uint64_t a = 0xa604;
	uint8_t c = 0;
	uint16_t d = 0;
	cout << "a bit = " << bitset<sizeof(uint16_t) * 8>(a) << endl;
	uint16_t b = 0;
	for (int j = 0; j < 2; j++) {
		c = (a & ((uint16_t)0xFF00 >> (j * 8))) >> ((1 - j) * 8);
		for (int i = 0; i < 8; i++)
		{
			cout << "for --------------" << i << endl;
			b <<= 1;
			cout << "b bit = " << bitset<sizeof(uint16_t) * 8>(b) << endl;
			b ^= c & 1;
			cout << "b bit = " << bitset<sizeof(uint16_t) * 8>(b) << endl;
			c >>= 1;
			cout << "c bit = " << bitset<sizeof(uint16_t) * 8>(c) << endl;
		}
		d += b;
	}
	cout << "d bit = " << bitset<sizeof(uint16_t) * 8>(d) << endl;
	return d;
}


uint16_t test3()
{
	uint16_t a = 0x00a2;
	cout << "a bit: " << bitset<sizeof(uint16_t) * 8>(a) << endl;
	uint16_t b = 0x0000;
	for (int i = 0; i < 8; i++)
	{
		cout << "for ---------------- " << i << endl;
		b <<= 1;
		cout << "b bit: " << bitset<sizeof(uint16_t) * 8>(b) << endl;
		b ^= a & 1;
		cout << "b bit: " << bitset<sizeof(uint16_t) * 8>(b) << endl;
		a >>= 1;
		cout << "a bit: " << bitset<sizeof(uint16_t) * 8>(a) << endl;
	}
	return b;
}

int main()
{
	//test3();
	uint64_t a = 0x204b5982a6040000;
	cout << "a bit: " << bitset<sizeof(uint64_t) * 8>(a) << endl;
	uint64_t b = 0;
	b = ReverseByte(a);
	cout << "b bit: " << bitset<sizeof(uint64_t) * 8>(b) << endl;
	uint8_t arr_565[46] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,3,1,2,2,4,4,8 };
	//int arr_565[46] = { 1,1,1,1,1,1,4,1,1,1,1,1,1,4,1,1,1,1,1,1,2,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,8 };
	//uint8_t* arr = arr_565;
	uint64_t c = Reversebit(b, arr_565, 46);
	cout << "c bit: " << bitset<sizeof(uint64_t) * 8>(c) << endl;


	system("pause");
	return EXIT_SUCCESS;
}
