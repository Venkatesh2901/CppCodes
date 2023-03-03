#include<iostream>
using namespace std;

int main(){
    //prime or not prime 
    int num;
    cout<<" Enter the value of number "<<endl;
    cin>>num;
    
    for(int i = 2 ; i<=num/2 ; i++){
        if(num %i==0){
            cout<<" The  Number "<<num<<" is Not  Prime "<<endl;
            break;
        }

        else {
            cout<< " The number "<<num<< " is  Prime number "<<endl ;
            break;
        }
    }

    //prime b/w two number 

    int a , b ;
    cout<<" Enter the value of interval :"<<endl;
    cin>>a>>b;
  
   cout<<"Prime Number b/w "<<a <<" and "<<b<<" are :  ";
    int i;
    for (int  num = a; num <=b ; num++)
    {
        for( i = 2 ; i <num ; i++){
            if(num%i==0){
                break;                       //Non-Prime number ...
            }
        }

        if(i==num){
                cout<<num<<"  ";            // if come out by inner for loop then print number 
        }
    }
    
   return 0;
}















































































