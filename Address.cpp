#include "address.h"
#include <iostream>
Address::Address()
{
    this->name = { "" };
    this->mail = { "" };
    this->phone_number = { "" };
    this->fax_number = { "" };
    this->memo = { "" };
    this->index = { 0U };
	this->birthday = new uint32_t[3];
	this->D_day = new uint32_t[3];
}

std::string Address::getname() const
{
    return this->name;
}
void Address::setname(std::string name)
{
    this->name = name;
}
std::string Address::getmail() const
{
    return this->mail;
}
void Address::setmail(std::string mail)
{
    this->mail = mail;
}
std::string Address::getphone_number() const
{
    return this->phone_number;
}
void Address::setphone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}
std::string Address::getfax_number() const
{
    return this->fax_number;
}
void Address::setfax_number(std::string fax_number)
{
    this->fax_number = fax_number;
}
void Address::setmemo(std::string memo)
{
    this->memo = memo;
}
std::string Address::getmemo() const
{
    return this->memo;
}
uint32_t* Address::getbirthday() const
{
	return this->birthday;
}
void Address::setbirthday(uint32_t* birthday)
{
	this->birthday = birthday;
}
uint32_t* Address::getD_day() const
{
	return this->D_day;
}
void Address::setD_day(uint32_t* D_day)
{
	this->D_day = D_day;
}

void Address::showAddressBook()
{

	std::cout << "이름 : " << this->name << std::endl;
	std::cout << "이메일 : " << this->mail << std::endl;
	std::cout << "전화번호 : " << this->phone_number << std::endl;
	std::cout << "팩스번호 : " << this->fax_number << std::endl;
	std::cout << "메모 : " << this->memo << std::endl;
	std::cout << "생년월일 : " << this->birthday[0] << "년 " << this->birthday[1] << "월 " << this->birthday[2] << "일" << std::endl;
	std::cout << "기념일 : " << this->D_day[0] << "년 " << this->D_day[1] << "월 " << this->D_day[2] << "일" << std::endl;
}
void Address::addaddress()
{
	std::string account_name;
	std::string customer_mail;
	std::string customer_memo;
	std::string customer_fax_number{ 0UL };
	std::string customer_phone_number{ 0UL };
	int customer_birthday;
	int customer_D_day;

	std::cout << "이름을 입력하시오 : ";
	std::cin >> account_name;
	this->name = account_name;

	std::cout << "이메일을 입력하시오 : ";

	std::cin >> customer_mail;
	this->mail = customer_mail;

	std::cout << "전화번호를 입력하시오 : ";

	std::cin >> customer_phone_number;
	this->phone_number = customer_phone_number;

	std::cout << "팩스번호를 입력하시오 : ";

	std::cin >> customer_fax_number;
	this->fax_number = customer_fax_number;

	std::cout << "메모를 입력하시오 : ";

	std::cin >> customer_memo;
	this->memo = customer_memo;

	std::cout << "생일 입력하시오\n 년도 : ";

	std::cin >> customer_birthday;
	this->birthday[0] = customer_birthday;

	std::cout << "\n월 : ";

	std::cin >> customer_birthday;
	this->birthday[1] = customer_birthday;

	std::cout << "\n일 : ";

	std::cin >> customer_birthday;
	this->birthday[2] = customer_birthday;

	std::cout << "기념일 입력하시오\n 년도 : ";

	std::cin >> customer_D_day;
	this->D_day[0] = customer_D_day;

	std::cout << "\n월 : ";

	std::cin >> customer_D_day;
	this->D_day[1] = customer_D_day;

	std::cout << "\n일 : ";

	std::cin >> customer_D_day;
	this->D_day[2] = customer_D_day;

}
void Address::searchaddress(std::string search)
{
	
	
		if (getname() == search)
		{
			showAddressBook();
		}
		else if (getmail() == search)
		{
			showAddressBook();
		}
		else if (getphone_number() == search)
		{
			showAddressBook();
		}
		else if (getfax_number() == search)
		{
			showAddressBook();
		}
		else if (getmemo() == search)
		{
			showAddressBook();
		}
	
}
void Address::deleteAddressBook(std::string deletename, std::string deletenumber)
{
	
	if (getname() == deletename && getphone_number() == deletenumber)
	{
		this->name = "";
		this->mail = "";
		this->phone_number = "";
		this->fax_number = "";
		this->memo = "";
		delete[] this->birthday;
		this->birthday = new uint32_t[3]{  };
		delete[] this->D_day;
		this->D_day = new uint32_t[3]{  };
	}
}

void Address::isBirth(int month, int day)
{
	if (this->birthday[1] == month && (this->birthday[2] == day))
	{
		std::cout << "birth!!" << std::endl;
	}
}