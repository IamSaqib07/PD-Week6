#include<iostream>
using namespace std;
float bill(string service,int minutes,string time);
main()
{
    string service;
    int minutes;
    float charges;
    string time;
    cout<<"Enter service=";
    cin>>service;
    cout<<"Enter minutes=";
    cin>>minutes;
    cout<<"Enter time=";
    cin>>time;
    charges=bill(service, minutes, time);
    cout<<"The Charges Are="<<charges<< "$"<<endl;
}
 float bill(string service,int minutes,string time)
 {
    float charges2;
    
      if(service=="regular" && minutes<=50 && time=="day" || time=="night")
     {
        charges2=10;
     }
     if(service=="regular" && minutes>50 && time=="day" || time=="night")
      {
      charges2 =(minutes-50)*0.20;
      }
      if(service=="premium" && time=="day" && minutes<=75)
      {
        charges2=25;
      }
      if(service=="premium" && time=="day" && minutes>75)
      {
        charges2=(minutes-75)*0.10;
      }
         if(service=="premium" && time=="night" && minutes<=100)
      {
        charges2=25;
      }
        if(service=="premium" && time=="night" && minutes>100)
      {
        charges2=(minutes-75)*0.05;
      }

     return charges2;
    
    
 }