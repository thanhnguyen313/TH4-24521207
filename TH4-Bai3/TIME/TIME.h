#pragma once
#include <iostream>
using namespace std;
class TIME
{
private:
	int hour;
	int minutes;
	int second;
public:
	friend istream& operator>>(istream& is, TIME& time);
	friend ostream& operator<<(ostream& os, const TIME& time);
	TIME operator=(const TIME& other);
	TIME operator++();
	TIME operator--();
	TIME operator+(int addTime);
	TIME operator-(int subTime);
	bool CheckTime(); //Kiem tra thoi gian hop le
	void Input();     //Nhap vao
	void Output();	  //Xuat thoi gian
};

