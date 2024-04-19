#pragma once
#include<iostream>
using namespace std;
class Invoice
{
private:
	string Name;
	int ID;
	float Price;
	int Quantity;
public:
	Invoice(string name, int id, float price, int quantity);
	string NameGetter();
	void NameSetter(string n);
	int IDGetter();
	void IDSetter(int id);
	float PriceGetter();
	void PriceSetter(float p);
	int QuantityGetter();
	void QuantitySetter(int q);
	float GetTotalPrice();
	void Print();
	string toString();

};