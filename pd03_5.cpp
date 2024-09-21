#include <iostream>
using namespace std;

main()
{
float loss,time;
string name;

cout<<"Enter Name of the Person:";
cin>>name;

cout<<"Enter the target weight loss in Kilograms:";
cin>>loss;

time=loss*15;
cout<<name<<" will need "<<time<<" days to lose "<<loss<<" kg of weight by following the doctor's suggestions";

}