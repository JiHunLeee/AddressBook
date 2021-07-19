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

	std::cout << "�̸� : " << this->name << std::endl;
	std::cout << "�̸��� : " << this->mail << std::endl;
	std::cout << "��ȭ��ȣ : " << this->phone_number << std::endl;
	std::cout << "�ѽ���ȣ : " << this->fax_number << std::endl;
	std::cout << "�޸� : " << this->memo << std::endl;
	std::cout << "������� : " << this->birthday[0] << "�� " << this->birthday[1] << "�� " << this->birthday[2] << "��" << std::endl;
	std::cout << "����� : " << this->D_day[0] << "�� " << this->D_day[1] << "�� " << this->D_day[2] << "��" << std::endl;
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

	std::cout << "�̸��� �Է��Ͻÿ� : ";
	std::cin >> account_name;
	this->name = account_name;

	std::cout << "�̸����� �Է��Ͻÿ� : ";

	std::cin >> customer_mail;
	this->mail = customer_mail;

	std::cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";

	std::cin >> customer_phone_number;
	this->phone_number = customer_phone_number;

	std::cout << "�ѽ���ȣ�� �Է��Ͻÿ� : ";

	std::cin >> customer_fax_number;
	this->fax_number = customer_fax_number;

	std::cout << "�޸� �Է��Ͻÿ� : ";

	std::cin >> customer_memo;
	this->memo = customer_memo;

	std::cout << "���� �Է��Ͻÿ�\n �⵵ : ";

	std::cin >> customer_birthday;
	this->birthday[0] = customer_birthday;

	std::cout << "\n�� : ";

	std::cin >> customer_birthday;
	this->birthday[1] = customer_birthday;

	std::cout << "\n�� : ";

	std::cin >> customer_birthday;
	this->birthday[2] = customer_birthday;

	std::cout << "����� �Է��Ͻÿ�\n �⵵ : ";

	std::cin >> customer_D_day;
	this->D_day[0] = customer_D_day;

	std::cout << "\n�� : ";

	std::cin >> customer_D_day;
	this->D_day[1] = customer_D_day;

	std::cout << "\n�� : ";

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