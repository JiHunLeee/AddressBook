/*
주소록 만들기 프로젝트(class AddressBook)
이름 name
이메일 e-mail
전화번호  Phone_number
팩스번호 fax_number
메모 memo
생년월일 검색 시(#include <ctime> ) 현재 생일이라면 "Happy Birthday"  Birthday
기념일 검색 시(#include <ctime> ) D-XX D_day
-------------------------------
1. 주소록 입력하기
2. 주소록 삭제하기
3. 검색----->  1. 이름 , 2. 전화번호 검색?
		생일 --> 생일축하해요
		기념일 --> 현재 기념일, D-xx
		이름, 이메일, 전화번호, 팩스번호, 메모 다 보여줌.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Address.h"
#include <ctime>


int main()
{
	time_t rawTime;
	struct tm* pTimeInfo;

	rawTime = time(NULL);
	pTimeInfo = localtime(&rawTime);
	
	int year = pTimeInfo->tm_year + 1900;    //연도에는 1900 더해줌
	int month = pTimeInfo->tm_mon + 1;    // 월에는 1 더해줌
	int day = pTimeInfo->tm_mday;

	Address* customers{ new Address[999] };
	uint32_t index{ 0U };
	std::string deletename{ "" };
	std::string deletenumber{ "" };
	std::string search;

	
	while(true)
	{
		std::cout << "1. 주소록 추가  2. 검색  3.주소록 전체 보기  4. 주소록 삭제  5.종료  " << std::endl;
		uint32_t selection_menu{ 0U };
		std::cin >> selection_menu;
		switch (selection_menu)
		{
		case 1:

			customers[index].addaddress();
			
			index++;
			break;


		case 2:
			std::cout << "검색할 정보을 입력하시오. ";
			std::cin >> search;
			for (int i = 0; i < index; i++)
			{
				customers[i].searchaddress(search);
				customers[i].isBirth(month, day);
			}
		
	

			break;
		


		case 3:
			for (int i = 0; i < index; i++)
			{
				
				customers[i].showAddressBook();
				customers[i].isBirth(month, day);
			}
			
			break;

		case 4:
			for (int i = 0; i < index; i++)
			{
				customers[i].showAddressBook();
			}
			std::cout << "삭제할 사람의 이름, 전화번호를 선택하시오" << std::endl;
			std::cin >> deletename;
			std::cin >> deletenumber;

			for (int i = 0; i < index; i++)
			{

				customers[i].deleteAddressBook(deletename, deletenumber);
			}

			for (int i = 0; i < index; i++)
			{
				customers[i].showAddressBook();
			}
			break;


		case 5:
			std::cout << "종료하겠습니다." << std::endl;
			goto EXIT;
			break;

		default:

			std::cout << "잘못입력하셨습니다." << std::endl;


		}

	}
	EXIT:
	delete[] customers;
}

		

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
