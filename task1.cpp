#include<iostream>
using namespace std;
void fuel( float distance );
main()
{
	float distance;
	cout << " Enter thr distance" << endl;
	cin >> distance;
	fuel(distance);
}
	void fuel( float distance )
{
	float fuel;
	fuel=distance*10;
	cout << "The amount of fuel used is: " << fuel << endl;
}
