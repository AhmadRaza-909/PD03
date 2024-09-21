#include <iostream>
using namespace std;

main()
{
int dig1,dig2,dig3,dig4,sum,n;

cout<<"Enter a 4-digit number: ";
cin>>n;

dig1=n%10;
dig2=(n/10)%10;
dig3=(n/100)%10;
dig4=(n/1000)%10;

sum=dig1+dig2+dig3+dig4;

cout<<"Sum of individual digits: "<<sum;
}