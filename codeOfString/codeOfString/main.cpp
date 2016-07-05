#include "stringAlgorithm.h"

int main()
{
	char str[] = "abcdef";
	int lenstr = 6;

	StrAlgo stralgo;
	StrAlgo_v1 stralgo_v1;

	stralgo_v1.LeftShiftOne(str, lenstr);
	//stralgo.LeftRotateString(str, lenstr, 3);
	cout << "str:" << str << endl;

	return 0;
}