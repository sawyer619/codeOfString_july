// ͷ�ļ�˵�����ַ���������--ʵ�֡����֮������һ������
// ʱ�䣺2016.7.5

#include <iostream>


using namespace std;

// �ַ���������
class StrAlgo{
public:
	void LeftShiftOne(char* str, int lenstr);  // ��תһ���ַ���β��
	virtual void LeftRotateString(char* str, int lenstr, int m);  // �ַ�������ת����Դ�����֮��1.1��

};


// �ַ��������㷨�Ľ���
class StrAlgo_v1 : public StrAlgo{
public:
	//StrAlgo_v1();
	void ReverseString(char* str, int from, int to);  // ��ת�ַ�������"abc"��Ϊ"cba"
	void LeftRotateString(char* str, int lenstr, int m);  // �ַ�������ת
};