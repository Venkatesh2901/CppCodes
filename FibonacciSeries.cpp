#include<iostream>
using namespace std;

void Fibonacci(int number ){
        int firstterm=0;
        int secondterm=1;
        int nextterm;

        cout<<" Fibonacci Series : "<<endl;
        for (int i =1 ; i<=number ;i++){
           cout<<" "<<firstterm;

            nextterm = firstterm + secondterm ;
            firstterm = secondterm;
            secondterm = nextterm;
            
        }
}

int main(){
      int number ;
       cout<< "Enter the value of number " <<endl;
        cin>>number ;

     Fibonacci(number);

    }

