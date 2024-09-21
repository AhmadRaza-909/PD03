#include <iostream>
using namespace std;

main()
{
float size,cost,area;

cout<<"Enter the size of the fertilizer bag in pounds:";
cin>>size;

cout<<"Enter the cost of the bag: $";
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag:";
cin>>area;

float costPerPound=cost/size;
float costPerFoot=cost/area;

cout<<"Cost of fertilizer per pound: $"<<costPerPound<<endl;

cout<<"Cost of fertilizer per square foot: $"<<costPerFoot;
}