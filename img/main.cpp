/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream.h>

using namespace std;

int main()
{   int x,y,z=0;
    cout<<"please enter the weight for the package first the the distance of the place you want it deleveird to weight in kg and distance in km";
   cin>>x>>y;
   if((x<=0||x>20)||(y<10||y>3000))
   cout<<"please enter a valid number as we don't accept distance less than 10km and over 3000km and we don't accept weight more than 20 kg";
   else {
       if(x<=2){
       z=(y/500)*1.10;
       cout<<z;
           
       }
        }
        else if{
            if(2<x<6){
                z=(y/500)*2.20;
                cout<<z;
            }
        }
        else if{
            if(6<x<10){
                z=(y/500)*3.70;
                cout<<z;
            
        }
        else if{
            if(10<x<20){
                z=(y/500)*4.80;
                cout<<z;
        }
    return 0;
}