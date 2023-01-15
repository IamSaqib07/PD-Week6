#include <iostream>
using namespace std;
float checkMoney(float budget, string category, int people);
main()
{
    float budget;
    string category;
    int people;
    cout << "enter the budget: ";
    cin >> budget;
    cout << "enter type of category: ";
    cin >> category;
    cout << "enter no of people: ";
    cin >> people;

    float result = checkMoney(budget, category, people);
    cout << result << "QR" <<endl;
}
float checkMoney(float budget, string category, int people)
{
    float result;
    float availPrice;
    float required_price;

    if (category == "vip")
    {
        required_price = people * (499.99);
    }
    else if (category == "normal")
    {
        required_price = people * (249.99);
    }

    if (category == "vip" || category == "normal")
    {

        if ((people >= 1) && (people <= 4))
        {
            availPrice = budget - (budget * 0.75);
        }
         else if ((people >= 5) && (people <= 9))
         {
             availPrice = budget - (budget * 0.60);
         }
         else if ((people >= 10) && (people <= 24))
        {
             availPrice = budget - (budget * 0.50);
        }
         else if ((people >= 25) && (people <= 49))
         {
             availPrice = budget - (budget * 0.40);
         }
         else if (people >= 50)
         {
             availPrice = budget - (budget * 0.25);
         }
    }
    result = availPrice - required_price;
    if(result >= 0)
    {
        cout << "yes, you have enough money";
    }
    else
    {
        cout << "No you have not enough money";
        return result * (-1);
    }
    return result;

}