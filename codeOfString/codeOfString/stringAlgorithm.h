// 头文件说明：字符串操作类--实现《编程之法》第一章内容
// 时间：2016.7.5

#include <iostream>


using namespace std;

// 字符串操作类
class StrAlgo{
public:
	void LeftShiftOne(char* str, int lenstr);  // 旋转一个字符到尾部
	virtual void LeftRotateString(char* str, int lenstr, int m);  // 字符串的旋转，来源：编程之法1.1节

};


// 字符串操作算法改进版
class StrAlgo_v1 : public StrAlgo{
public:
	//StrAlgo_v1();
	void ReverseString(char* str, int from, int to);  // 倒转字符串，如"abc"变为"cba"
	void LeftRotateString(char* str, int lenstr, int m);  // 字符串的旋转
};