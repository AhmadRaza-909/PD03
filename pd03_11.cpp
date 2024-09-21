#include <iostream>
using namespace std;

main()
{
float age, moved, averageInHouse;

cout<<"Enter person's age: ";
cin>>age;

cout<<"Enter the number of times they've moved: ";
cin>>moved;

averageInHouse=age/(moved+1);
cout<<"Average age lived in house:"<<averageInHouse;

}