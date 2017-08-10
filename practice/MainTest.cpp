#include "MainTest.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <time.h>



CMainTest::CMainTest()
{
}


CMainTest::~CMainTest()
{
}




void strTest01()
{
	char sztest[] = "i love game";
	//char* szbuf = new char;
	//szbuf = "i love it";
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

//업다운 숫자 맞추기
void UpDownChallenge()
{
	srand((unsigned)time(NULL));

	int correctNum = 0;
	correctNum = rand() % 100;
	int answerNum = 0;
	
	printf_s("Take My Number~\n");	
	printf_s("Through your Number: ");
	scanf_s("%d", &answerNum);
		
	while (answerNum != correctNum)
	{
		if (answerNum >= 100 || answerNum < 0)
		{
			answerNum = 0;
			printf_s("your num is out of range(0~99), please Retry\n");
			printf_s("Through your Number: ");
			scanf_s("%d", &answerNum);
		}
		if (answerNum < correctNum)
		{
			std::cout << "plz up!" << std::endl;
		}
		else if (answerNum > correctNum)
		{
			std::cout << "plz down!" << std::endl;
		}

		printf_s("Through your Number: ");
		scanf_s("%d", &answerNum);
	}
	std::cout << "yes Right!" << std::endl;
}
void SetName(const std::string& s)
{
	std::string sbuf = s;
	std::cout << sbuf << std::endl;
	std::string a = "호준";
	//이 셋함수의 구조는 아래 두 셋함수 호출을 가능하게 하기위한 형태..
	//SetName("예나");		//매개변수 앞에 const가 붙음으로 가능해진다... 이유는 확실히 말하라면 못하겠다;으으.. 
							//예상 하기론 "예나"가 상수인데, 참조로 받게되면 상수를 변경한 여지가 있기때문에? 에러가 나타난다.
	//SetName(a);
	//const std::string& s = "예나";
}


void Anagrame(std::string inputStr, std::string originalStr)
{
	std::string copyString;
	std::string zeroOrgStr;
	bool changeRe = false;
	
	for (int i = 0; i < originalStr.size(); i++)
	{
		if (originalStr[i] == '0')
		{
			continue;
		}
		changeRe = true;	
		
		copyString = inputStr;

		zeroOrgStr = originalStr;
		zeroOrgStr[i] = '0';
		copyString += originalStr[i];
		
		Anagrame(copyString, zeroOrgStr);

	}
	if (changeRe)
	{
		std::cout << copyString.c_str() << std::endl;
	}

}



int main()
{
	Anagrame("","hat");
	//UpDownChallenge();
	//getchar();


	getchar();
	return 0;
}