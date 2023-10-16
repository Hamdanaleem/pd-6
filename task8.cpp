#include<iostream>
#include<cmath>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

main()
{
    string yearType;
    int holidays;
    int hometownWeekends;
    cout<<"Enter year type: ";
    cin>>yearType;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>hometownWeekends;
    int result=calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout<<result;


}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    float result;
    int weekends=48-hometownWeekends;
    result=((2*holidays)/3)+((3*weekends)/4)+hometownWeekends;
    if(yearType=="leap")
    {
        result=round(result+(result*0.15));
    }
    return result;
}
