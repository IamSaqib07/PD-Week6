#include<iostream>
using namespace std;

float Volleyball(string year, int holidays, int weekends);
main()
{
  string year;
  int holidays;
  int weekends;
  cout << "enter year: ";
  cin >> year;
  cout << "enter holidays: "; // not include saturday or sunday;
  cin >> holidays;
  cout << "enter weekends: "; // when he will go to hometown;
  cin >> weekends;
 float result;
 result = Volleyball(year, holidays, weekends);
 cout << result << "Times" << endl;
}
float Volleyball(string year, int holidays, int weekends)
{
  float holiday;
  float weekend;
  float Weekend;
  float Result;
 holiday = holidays * (0.67);
 weekend = 48 - weekends;
 Weekend = weekend * (0.75);
 Result = holiday +Weekend +weekends;
  if(year == "normal")
   {
       return Result;
   }
   if(year == "leap")
   {
       return Result + (Result * (0.15)) ;
   }
 
   return 0;
}