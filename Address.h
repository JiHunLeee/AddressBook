#pragma once
#include <iostream>
class Address
{
private:
	std::string name;       // 이름
	std::string mail;       // 이메일
    std::string phone_number;  // 전화번호 (스트링으로 받는 게 편할 것)
    std::string fax_number;    // 팩스번호 이하동문
	std::string memo;       // 메모
    uint32_t* birthday;
    uint32_t* D_day;
    uint32_t index;   // 배열 인덱스

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

