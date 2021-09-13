#define _CRT_SECURE_NO_WARNINGS  

#include "hade.h"


uint64_t test1()
{
	uint64_t candata;
	cout << "ÊäÈëdata" << endl;
	cin >> hex >> candata;
	return candata;
}




uint64_t dispose(const uint64_t& bitsetrets, uint8_t arr[], int len) {
	uint64_t tempdata = 0;
	uint64_t tempdata_cp = bitsetrets;
	uint64_t destdata = 0;
	//uint64_t destdata_new = 0;//µ¹Ğò
	//int i = 0;
	//cout << "bitsetrets bit: " << bitset<sizeof(uint64_t) * 8>(bitsetrets) << endl;
	cout << *arr << endl;
	for (int i = 0; i < len; i++) {
		tempdata = (tempdata_cp & ~((uint64_t)0xFFFFFFFFFFFFFFFF >> arr[i])) >> (64 - arr[i]);
		if (i > 0) {
			int k = 0;
			for (int j = 0; j < i; j++) {
				k += arr[j];
			}
			tempdata = tempdata << k;
		}
		tempdata_cp = tempdata_cp << arr[i];
		destdata |= tempdata;
	}
	cout << "ret bit: " << bitset<sizeof(uint64_t) * 8>(destdata) << endl;
	return destdata;
}


int main()
{
	//uint64_t candata = test1();
	//cout << "candata hex: " << hex << candata << endl;
	//cout << "candata bit: " << bitset<sizeof(uint64_t) * 8>(candata) << endl;


	////cout << "g_can_msg_table.arrlen: " << uint8_t(g_can_msg_table[1].arrlen) << endl;
	//uint64_t ret;
	//cout << &g_can_msg_table[1].pbitarray << endl;
	//ret = dispose(candata, g_can_msg_table[1].pbitarray, g_can_msg_table[1].arrlen);
	//cout << "ret bit: " << bitset<sizeof(uint64_t) * 8>(ret) << endl;
	uint64_t candata;
	candata = 0xd305222b22860000;
	candata = 0xd305222b22260000;

	cout << &candata << endl;

	system("pause");
	return EXIT_SUCCESS;
}
