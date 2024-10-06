#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
	char type;
	float price;
	float result;
	cout << "Enter the vehicle type code (M, E, S, V, T): " ;
	cin >> type;
	cout << " Enter the price of the vehicle: $" ;
	cin >> price;
	result = taxCalculator(type, price);
	cout <<"The final price of th vehicle after adding the tax is: "<<"$"<< result;
}
float taxCalculator(char type, float price)
{
	float total;
	if(type=='M')
	{
	total= price+(price*0.06);
	return total;
	}
	if(type=='E')
	{
	total = price+(price*0.08);
	return total;
	}
	if(type=='S')
	{
	total=price+(price*0.10);
	return total;
	}
	if(type=='V')
	{
	total= price+(price*0.12);
	return total;
	}
	if(type=='T')
	{
	total= price+(price*0.15);
	return total;
	}
}
