#include<iostream>
using namespace std;
void menu();
float calculate(char type, char time, float min);




int main()
{
	char type, time; float min;
	cout << "Enter the service code (R/r for regular, P/p for premium): ";
	cin >> type;
	if (type == 'P' || type == 'p')
	{
		cout << "Enter time of the call (D/d for day, N/n for night: ";
		cin >> time;
	}
	cout << "Enter the number of minutes used: ";
	cin >> min;
	if (type == 'P' || type == 'p')
	{
		cout << "Service Type: Premium" << endl;
	}
	if (type == 'R' || type == 'r')
	{
		cout << "Service Type: Regular" << endl;
	}
	cout << "Total Minutes Used: " << min << " minutes" << endl;
	float ans = calculate(type, time, min);
	cout << "Amount Due: $" << ans;



	return 0;

}

float calculate(char type, char time, float min)
{
	float always, net;
	if (type == 'r' || type == 'R')
	{
		always = 10;
	}
	if (type == 'p' || type == 'P')
	{
		always = 25;
	}
	if ((type == 'r' || type == 'R') && min <= 50)
	{
		net = always;
	}
	if ((type == 'r' || type == 'R') && min > 50)
	{
		net = always + ((min - 50) * 0.20);
	}
	if ((type == 'p' || type == 'p') && (time == 'D' || time == 'd') && min <= 75)
	{
		net = always;
	}
	if ((type == 'p' || type == 'p') && (time == 'N' || time == 'n') && min <= 100)
	{
		net = always;
	}
	if ((type == 'p' || type == 'p') && (time == 'N' || time == 'n') && min > 100)
	{
		net = always + ((min - 100) * 0.05);
	}
	if ((type == 'p' || type == 'p') && (time == 'D' || time == 'd') && min > 75)
	{
		net = always + ((min - 75) * 0.10);
	}

	return net;
}

