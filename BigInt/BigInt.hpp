#pragma once
#ifndef BigInt_hpp
#define BigInt_hpp

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class BigInt
{
public:
	string multipleDecimal(string int1, string int2);
	string addDecimal(string int1, string int2);
	bool ujemna = false;
	string potega(string a, long long int pot);
	int szybkaPotega(int a, int pot);
	int charToInt(char c);
	void cleanZero();
	void cleanZero(string & int1);
	short isBigger(BigInt int2);
	vector<bool> intToBinary(long long int c);
	vector<bool> stringToBinary(string c);
	string divideStringByTwo(string int1);
	bool stringModuloTwo(string str1);
public:
	vector<bool> binary;

	string toDecimal();
	string toBinary();

	void invert();

	void operator+=(BigInt int2);
	void operator+=(long long int int2);
	void operator-=(BigInt int2);
	void operator-=(long long int int2);
	void operator*=(BigInt int2);
	void operator*=(long long int int2);
	void operator=(BigInt int2);
	void operator=(long long int int2);
	void operator=(string int2);

	BigInt operator+(BigInt int2);
	BigInt operator+(long long int int2);
	BigInt operator-(BigInt int2);
	BigInt operator-(long long int int2);
	BigInt operator*(BigInt int2);
	BigInt operator*(long long int int2);
	BigInt operator/(BigInt int2);
	BigInt operator/(long long int int2);
	BigInt operator%(BigInt int2);
	BigInt operator%(long long int int2);

	BigInt operator~();
	BigInt operator|(BigInt int2);
	BigInt operator|(long long int int2);
	BigInt operator&(BigInt int2);
	BigInt operator&(long long int int2);
	BigInt operator^(BigInt int2);
	BigInt operator^(long long int int2);

	BigInt operator>>(long long int int2);
	BigInt operator<<(long long int int2);
	
	void operator|=(BigInt int2);
	void operator|=(long long int int2);
	void operator&=(BigInt int2);
	void operator&=(long long int int2);
	void operator^=(BigInt int2);
	void operator^=(long long int int2);
	void operator>>=(long long int int2);
	void operator<<=(long long int int2);
	void operator%=(BigInt int2);
	void operator%=(long long int int2);

	BigInt& operator++();
	BigInt& operator--();

	BigInt operator++(int);
	BigInt operator--(int);

	void operator/=(BigInt int2);
	void operator/=(long long int int2);
	
	bool operator<(BigInt int2);
	bool operator<=(BigInt int2);
	bool operator>(BigInt int2);
	bool operator>=(BigInt int2);
	bool operator<(long long int int2);
	bool operator<=(long long int int2);
	bool operator>(long long int int2);
	bool operator>=(long long int int2);

	friend ostream& operator<< (ostream& stream, BigInt bigint);
};


#endif // !BigInt_hpp
