#include<iostream.h>
main(){
	float x,y,z=0;
    cout<<"please enter the weight for the package first the the distance of the place you want it deleveird to weight in kg and distance in km";
   cin>>x>>y;
   if((x<=0||x>20)||(y<10||y>3000))
   cout<<"please enter a valid number as we don't accept distance less than 10km and over 3000km and we don't accept weight more than 20 kg";
   else
       if(x<=2){
       z=(y/500)*1.10;
       cout<<z;
           
       }
        
        else if(2<x&&x<6)
            {
                z=(y/500)*2.20;
                cout<<z;
            
        }
        else if(6<x&&x<10)
            {
                z=(y/500)*3.70;
                cout<<z;
            
        }
        else if(10<=x&&x<20)
            {
                z=(y/500)*4.80;
                cout<<z;
        
}
}