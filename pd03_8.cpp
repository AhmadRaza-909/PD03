#include <iostream>
using namespace std;

main()
{
float vegCoins,fruitCoins,earning;
int vegKg,fruitKg;


cout<<"Enter the vegetable price per kilogram(in coins): ";
cin>>vegCoins;

cout<<"Enter the fruit price per kilogram(in coins): ";
cin>>fruitCoins;

cout<<"Enter total kilograms of vegetables: ";
cin>>vegKg;

cout<<"Enter total kilograms of fruits: ";
cin>>fruitKg;

 float totalVeg=vegCoins*vegKg/1.94;
 float totalFruit=fruitCoins*fruitKg/1.94;
 
 earning= totalFruit + totalVeg;

cout<<"Total earning in Rupees (Rps): "<<earning;
}

