#include<iostream>
using namespace std;

main()

{
int paint,width,height,wallsPainted;

cout<<"Enter number of square meters you can paint: ";
cin>>paint;

cout<<"Width of a single wall (in meters): ";
cin>>width;

cout<<"Height of a single wall (in meters): ";
cin>>height;

wallsPainted=paint/(width*height);

cout<<"Number of walls you can paint: "<<wallsPainted;

}