#include<iostream>
using namespace std;
float calculatePrice(string fruit, string day, float quantity);
main()
{
 string fruit; 
 string day;
 float quantity;
 cout << "enter fruit: ";
 cin >> fruit;
 cout << "enter day: ";
 cin >> day;
  cout << "enter quantity: ";
 cin >> quantity;
 float price = quantity * fruit;
 float result;
 result = calculatePrice(fruit, day, quantity);
 cout << result;
}
float calculatePrrice(string fruit, string day, float quantity)
{ 
     float Price;
     if((day=="saturday"||day=="sunday"))
      {
          if(fruit=="banana")
           {
               Price = 2.70;
           }
           if(fruit=="apple")
           {
               Price = 1.25;
           }
           if(fruit=="orange")
           {
               Price = 0.90;
           }
           if(fruit=="grapefruit")
           {
               Price = 1.60;
           }
           if(fruit=="kiwi")
           {
               Price = 3.00;
           }
           if(fruit=="pineapple")
           {
               Price = 5.60;
           }
           if(fruit=="grapes")
           {
               Price = 4.20;
           }
         if((day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday")) 
            if(fruit=="banana")
           {
               Price = 2.50;
           }
           if(fruit=="apple")
           {
               Price = 1.20;
           }
           if(fruit=="orange")
           {
               Price = 0.85;
           }
           if(fruit=="grapefruit")
           {
               Price = 1.45;
           }
           if(fruit=="kiwi")
           {
               Price = 2.70;
           }
           if(fruit=="pineapple")
           {
               Price = 5.50;
           }
           if(fruit=="grapes")
           {
               Price = 3.85;
           } 
           else()
           {
            Price = "notValid";
           }
           
       return Price;

      }


}