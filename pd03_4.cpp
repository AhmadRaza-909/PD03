#include <iostream>
using namespace std;

main()
{
float imp,player,chance;
cout<<"Enter Imposter count:";
cin>>imp;

cout<<"Enter Player count:";
cin>>player;

chance=(imp/player)*100;\

cout<<"chance of being an imposter: "<<chance<<"%";


}