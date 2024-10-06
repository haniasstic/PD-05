#include<iostream>
using namespace std;
float Volume(float lenghth, float width, float height,string unit);

main()
{
	float length, width, height,result;
	cout << " Enter the length of pyramid (in  meters): ";
	cin >> length;
	cout << "Enter the width of pyramid (in meters): " ;
	cin >> width;
	cout << " Enter the height of pyramid (in meters): ";
	cin >> height;
	cout << " Enter the desired output unit (millimeters, centimeters, kilometers): meters " ;
	cin >> unit;
	result= volume( length,width, height);
	cout <<" The volume of the pyramid is: " <<result << " cubic meters " ;
}
float Volume(float lenghth, float width, float height,string unit)
{
	float volume;
	if(unit=="meters")
	{
	volume= length*width*height;
	return volume;
	}
	if(unit =="centimeters")
	{
	volume= (length*height*width)*100;
	return volume;
	}
	if(unit=="millileters")
	{
	volume=(length*width*height)*1000;
	return volume;
	}
	if(unit=="kilometers")
	{
	volume= (length*width*height)/1000;
	return volume;
	}
}