#include "Invoice.h"

Invoice::Invoice(string name,int id,float price,int quantity)
{
	this->Name = name;
	this->ID = id;
	this->Price = price;
	this->Quantity = quantity;
}

string Invoice::NameGetter()
{
	return this->Name;
}

void Invoice::NameSetter(string n)
{
	this->Name = n;
}

int Invoice::IDGetter()
{
	return this->ID;
}

void Invoice::IDSetter(int id)
{
	this->ID = id;
}

float Invoice::PriceGetter()
{
	return this->Price;
}

void Invoice::PriceSetter(float p)
{
	this->Price = p;
}

int Invoice::QuantityGetter()
{
	return this->Quantity;
}

void Invoice::QuantitySetter(int q)
{
	this->Quantity = q;
}

float Invoice::GetTotalPrice()
{
	return this->Price * this->Quantity;
}

void Invoice::Print()
{
	cout << "the Name : " << this->Name << endl;
	cout << "ID : " << this->ID << endl;
	cout << "Total Price : " << GetTotalPrice() << endl;
}

string Invoice::toString()
{
	return 0;
}