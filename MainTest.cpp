#include "MainTest.h"
#include <string>
#include <iostream>
#include <stdio.h>



CMainTest::CMainTest()
{
}


CMainTest::~CMainTest()
{
}


void strTest01()
{
	char sztest[] = "i love game";
	char* szbuf = new char;
	szbuf = "i love it";
	char szbuff[32] = { 0, };

	sprintf_s(szbuff, "%s !!", sztest);
	//std::cout << szbuf << std::endl;
	//std::cout << strlen(szbuf) << std::endl;
	//std::cout << szbuf[8] << std::endl;

	char sztest2[] = "i love game much";
	std::cout << sztest2 << std::endl;
	std::cout << strlen(sztest2) << std::endl;
	std::cout << sztest2[0] << std::endl;
	strcpy_s(sztest2, sztest);
	std::cout << sztest2 << std::endl;
	std::cout << strlen(sztest2) << std::endl;
}

void strTest02()
{
	std::string strTest = "i love you";
	std::cout << strTest.c_str() << std::endl;
	
	strTest = "i love you yes";
	std::cout << strTest.c_str() << std::endl;

	strTest = "yeah yeah";
	std::cout << strTest.c_str() << std::endl;

	std::string strTest02 = "i can do it everytime~!";

	std::cout << strTest + strTest02 << std::endl;
}

void MakeTriangleWithStar(int triangleSize)
{
	for (int i = 1; i <= triangleSize; i = i + 2)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << "*";// << std::endl;
		}
		std::cout << "\n";// << std::endl;
	}
}

void UpDownChallenge()
{
	char* stringBuffer = new char;//[2];

	printf_s("Take My Number~\n");
	printf_s("Through your Number: ");

	stringBuffer = "i hate you";
	
	std::cout << stringBuffer << std::endl;


	delete stringBuffer;

}

int main()
{
	
	
	//UpDownChallenge();
	int a = 6;
	int* b;
	b = &a;

	char* stringTest = "Aello";

	std::cout << stringTest+1<< std::endl;

	std::cout << b << std::endl;
	
	double c = 1;
	double* d;
	d = &c;
	std::cout << &c  << std::endl;

	std::cout << &c+1 << std::endl;


	getchar();
	return 0;
}