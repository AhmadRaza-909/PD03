#include <iostream>
using namespace std;

main()
{
int sides;
cout<<"Enter the sides of the polygon:";
cin>>sides;

int sumAngles=(sides-2)*180;

cout<<"The sum of internal angles of a "<<sides<<"side polygon is:"<<sumAngles<<" degrees";


}