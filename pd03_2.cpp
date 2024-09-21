#include <iostream>
using namespace std;

main()
{
int min,perSec,frames;

cout<<"Number of Minutes:";
cin>>min;

cout<<"Frames per Second:";
cin>>perSec;

frames= min*60*25;
cout<<"Total Number of Frames:"<<frames;
}