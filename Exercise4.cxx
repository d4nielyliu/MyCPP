#include <iostream>
using namespace std;

int main()
{
cout<<"Please enter the number of seconds: ";
long long int sec_input;
cin>>sec_input;
int sec_base = sec_input / 60;
int sec_frac = sec_input % 60;
int min_base = sec_base / 60;
int min_frac = sec_base % 60;
int hour_base = min_base /60;
int hour_frac = min_base % 60;
int day_base = sec_input/(60*60*24);
//cout << sec_frac << endl;
//cout << min_frac << endl;
//cout << hour_frac << endl;
//cout << day_base << endl;
cout << sec_input << " seconds = " << day_base << " days, " << hour_frac << " hours, " << min_frac << " minutes, " << sec_frac << " seconds" << endl;
}
