#include<iostream>
using namespace std;
string calculateGrade(string name, string subject, float marks);
main()
{
  string subject;
  float marks;
  string name;
  string subject1, subject2, subject3, subject4, subject5;
  float marks1, marks2, marks3, marks4, marks5;
  cout << "enter name of student: ";
  cin >> name;
  cout << "enter subject1: ";
  cin >> subject1;
  cout << "enter subject1 marks: ";
  cin >> marks1;
  cout << "enter subject2: ";
  cin >> subject2;
  cout << "enter subject2 marks: ";
  cin >> marks2;
  cout << "enter subject3: ";
  cin >> subject3;
  cout << "enter subject3 marks: ";
  cin >> marks3;
  cout << "enter subject4: ";
  cin >> subject4;
  cout << "enter subject4 marks: ";
  cin >> marks4;
  cout << "enter subject5: ";
  cin >> subject5;
  cout << "enter subject5 marks: ";
  cin >> marks5;
  
   marks = marks1 + marks2 +marks3 +marks4 +marks5;
   string result = calculateGrade(name, subject, marks);
   cout << "SBT grade is: "<< result << endl;
}
string calculateGrade(string name, string subject, float totalMarks)
{
    string grade;
   float percentage;
   
    percentage = (totalMarks * 100)/500;
   if((percentage>=90)&&(percentage<=100))
     {
         grade = "A+";
     }
     else if((percentage>=80)&&(percentage<=89))
     {
         grade = "A";
     }
     else if((percentage>=70)&&(percentage<=79))
     {
         grade = "B+";
     }
     else if((percentage>=60)&&(percentage<=69))
     {
         grade = "B";
     }
     else if((percentage>=50)&&(percentage<=59))
     {
         grade = "C";
     }
     return grade;

}