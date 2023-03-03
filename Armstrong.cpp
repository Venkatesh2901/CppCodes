//Armstrong Number 
// (153  =  1^3 + 5^3 +3^3  = 1 + 125 + 9 = 153)

#include<iostream>
using namespace std;


int pow ( int lastdigit , int n){
   int power=1;
   for( int i=1 ; i<=3 ; i++){
       power = power*lastdigit;
   } return power;
}


int main(){
    int num;
    cout<<" Enter the value of number "<<endl;
    cin>>num;

    int sum=0;
    int originalN=num;

    while(num>0){
        int lastdigit = num%10;
        sum = sum + pow(lastdigit ,3);
        num = num/10;
    }

    if(sum == originalN){
        cout<<" Armstrong Number "<<endl;
    }
    else {
        cout<<" Non Armstrong "<<endl;
    }
}