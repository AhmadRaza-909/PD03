#include <iostream>
using namespace std;

main()
{
float vi,vf,t,a;
cout<<"Enter initial Velocity(m/s):";
cin>>vi;

cout<<"Enter Acceleration(m/s^2):";
cin>>a;

cout<<"Enter Time(s):";
cin>>t;

vf=(a*t)+vi;

cout<<"Final velocity:"<<vf;
}