#include <iostream>
using namespace std;

main()
{
float priceA,priceC,soldA,soldC;
float charity;
string name;

cout<<"Enter  the movie name:";
cin>>name;

cout<<"Enter the adult ticket price: $";
cin>>priceA;

cout<<"Enter  the child ticket price: $";
cin>>priceC;

cout<<"Enter  the number of adult tickets sold: ";
cin>>soldA;

cout<<"Enter  the number of child tickets sold: ";
cin>>soldC;

cout<<"Enter the percantage of the amount to be donated to charity(without % sign):";
cin>>charity;


float total_revenue=(priceA*soldA)+(priceC*soldC);
float amount_charity=total_revenue*charity/100;
float remaining=total_revenue-amount_charity;


cout<<"\nMovie: "<<name<<endl;
cout<<"Total amount generated from ticket sales: "<<total_revenue<<endl;
cout<<"Donation to charity( "<<charity<<"%): $"<< amount_charity <<endl;
cout<<"Reamaining amount after donation: $"<<remaining<<endl;

}