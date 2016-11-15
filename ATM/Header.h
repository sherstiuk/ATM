#include <string>
#include <iostream>
using namespace std;

class ATM {
private:
	unsigned int _id;
	string _address;
	unsigned int _reserve;
public:
	void authorization();
	void encashment(const unsigned int);
	const unsigned int getNumber();
	const unsigned int getResource();
};

class Account {
private:
	unsigned int _accauntNumber;
	unsigned int _accountBalance;
public:
	const unsigned int getAccNo();
	const int getBalance();
};

class Card {
private:
	Account& _account;
	string _owner;
	long int _cardNumber;
	int _pin;
	const unsigned int getPin();
	const void checkCorruption();
public:
	void refill();
	const string getOwner();
	const unsigned int getCardNumber();
	bool verifyPass();
};

class Transaction {
private:
	int _sum;
	unsigned int _year;
	unsigned int _month;
	unsigned int _day;
	unsigned int _hour;
	unsigned int _min;
	unsigned int _sec;
public:
	virtual void perform() = 0;
};

class TakeCash : Transaction {
private:
	Card& _account;
public:
	void perform();
};

class Transfer : Transaction {
private:
	Card& _account1;
	Card& _account2;
public:
	void perform();
};

class Dialog {
private:
public:
	void welcome();
	void pinInput();
	void options();
	void showBalance();
};

class ATMException {
private:
	string _message;
public:
	void invalidPin();
	void invalidCardNumber();
};