#pragma once
#include <iostream>
class Address
{
private:
	std::string name;       // �̸�
	std::string mail;       // �̸���
    std::string phone_number;  // ��ȭ��ȣ (��Ʈ������ �޴� �� ���� ��)
    std::string fax_number;    // �ѽ���ȣ ���ϵ���
	std::string memo;       // �޸�
    uint32_t* birthday;
    uint32_t* D_day;
    uint32_t index;   // �迭 �ε���

public:
    Address();

    std::string getname() const;
    void setname(std::string);

    std::string getmail() const;
    void setmail(std::string );

    std::string getphone_number() const;
    void setphone_number(std::string);

    std::string getfax_number() const;
    void setfax_number(std::string);

    void setmemo(std::string);
    std::string getmemo() const;

    uint32_t* getbirthday() const;
    void setbirthday(uint32_t*);

    uint32_t* getD_day() const;
    void setD_day(uint32_t*);

    void addaddress();

	void showAddressBook();

    void searchaddress(std::string);

    void deleteAddressBook(std::string, std::string);

    void isBirth(int month, int day);


};

