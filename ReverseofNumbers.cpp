#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the value of number "<<endl;
    cin>>number;
   
   int reverse =0;
  while(number>0){
     int lastdigit= number%10;
      reverse = reverse*10 + lastdigit;
     number= number/10;
   }

   cout<<"reverse of a number  : "<<reverse;

}
