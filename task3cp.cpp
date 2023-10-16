#include<iostream>
using namespace std;

string findZodiacSign(int day, string month);

main() {
	int day; string month;
	cout << "Enter the day of birth: ";
	cin >> day;
	cout << "Enter the month of birth (e.g., January, February): ";
	cin >> month;
	cout << findZodiacSign(day, month);

}
string findZodiacSign(int day, string month)
{	
	string sign;
	if ((month == "March" && day >= 21 && day <= 31) || (month == "April" && day >= 1 && day <= 19))
	{
		sign = "Zodiac Sign: Aries";
	}
	if ((month == "April" && day >= 20 && day <= 30) || (month == "May" && day >=1 && day <= 20))
	{
		sign = "Zodiac Sign: Taurus";
	}
	if ((month == "May" && day >=21 && day <= 31) || (month == "June" && day >=1 && day <= 20))
	{
		sign = "Zodiac Sign: Gemini";
	}
	if ((month == "June" && day>=1 && day <= 30) || (month == "July" && day >=1 && day <= 22))
	{
		sign = "Zodiac Sign: Cancer";
	}
	if ((month == "July" && day>=23&& day <= 31) || (month == "August" && day >=1 && day <= 22))
	{
		sign = "Zodiac Sign: Leo";
	}
	if ((month == "August" && day >=223 && day <= 31) || (month == "September" && day >=1 && day <= 22))
	{
		sign = "Zodiac Sign: Vigro";
	}
	if ((month == "September" && day >=23 && day <= 30) || (month == "October" && day >=1 && day <= 22))
	{
		sign = "Zodiac Sign: Libra";

	}
	if ((month == "October" && day >=23 && day <= 31) || (month == "November" && day >=1 && day <= 21))
	{
		sign = "Zodiac Sign: Scorpio";
	}
	if ((month == "November" && day >=22 && day <= 30) || (month == "December" && day >=1 && day <= 21))
	{
		sign = "Zodiac Sign: Aries";
	}
	if ((month == "December" && day >=22 && day <= 31) || (month == "January" && day >=1 && day <= 19))
	{
		sign = "Zodiac Sign: Capricorn";
	}
	if ((month == "January" && day >=20 && day <= 31) || (month == "February" && day >=1 && day <= 18))
	{
		sign = "Zodiac Sign: Aquaris";
	}
	if ((month == "February" && day >=19 && day <= 29) || (month == "March" && day >=1 && day <= 20))
	{
		sign = "Zodiac Sign: Pisces";
	}
	return sign;
}