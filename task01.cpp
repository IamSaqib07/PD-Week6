#include<iostream>
using namespace std;

string performActivity(string temperature, string humidity);
main()
{
  string temperature;
  string humidity;

  cout << "enter temperature today: ";
  cin >> temperature;
  cout << "enter the value of humidity: ";
  cin >> humidity;
  string result;
  result = performActivity(temperature, humidity);
  cout << "you have to do this activity: " << result;

}
string performActivity(string temperature, string humidity)
{
 string activity;
if(temperature=="warm" && humidity=="dry")
 {
     activity = "play_tennis";
 }
if(temperature=="warm" && humidity=="humid")
 {
     activity = "swim";
 }
if(temperature=="cold" && humidity=="dry")
{
    activity = "play_basketball";
}
if(temperature=="cold" && humidity=="humid")
{
    activity = "watch_tv";
}
return activity;

}