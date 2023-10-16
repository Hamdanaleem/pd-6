#include<iostream>
using namespace std;

string decideActivity(string temperature, string humidity);


main() {
	string temperature, humidity;
	cout << "Enter temperature (warm or cold): ";
	cin >> temperature;
	cout << "Enter humidity (dry or cold):";
	cin >> humidity;
	cout<<"Recommended activity: "<<decideActivity(temperature, humidity);

}
string decideActivity(string temperature, string humidity)
{
	string result;
	if (temperature == "warm" && humidity == "dry")
	{
		result = "Play tennis";
	}
	if (temperature == "warm" && humidity == "humid")
	{
		result = "swim";
	}
	if (temperature == "cold" && humidity == "dry")
	{
		result = "Play basketball";
	}
	if (temperature == "warm" && humidity == "humid")
	{
		result = "Watch TV";

	}
	return result;
}