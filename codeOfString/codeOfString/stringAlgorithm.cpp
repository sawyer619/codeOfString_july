#include "stringAlgorithm.h"

// StrAlgo类函数
void StrAlgo::LeftShiftOne(char* str, int lenstr)
{
	char tmp = str[0];
	for (int i=1; i<lenstr; i++)
	{
		str[i-1] = str[i];
	}
	str[lenstr-1] = tmp;
}

void StrAlgo::LeftRotateString(char *str, int lenstr, int m)
{
	while(m--)
	{
		LeftShiftOne(str, lenstr);
	}
}


// StrAlgo_v1类函数
void StrAlgo_v1::ReverseString(char* str, int from, int to)
{
	while(from < to)
	{
		char tmp = str[from];
		str[from] = str[to];
		str[to] = tmp;
		from ++;
		to --;
	}
}

void StrAlgo_v1::LeftRotateString(char *str, int lenstr, int m)
{
	cout << "改进版：" << endl;
	ReverseString(str, 0, m-1);
	ReverseString(str, m, lenstr-1);
	ReverseString(str, 0, lenstr-1);
}