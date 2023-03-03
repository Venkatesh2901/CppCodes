#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<" enter the value of number : "<<endl;
    cin>>n;

   cout<<"Pattern are "<<endl;
   int count =1;
    for(int i=1 ; i<=n;i++ ){
        for (int j=1 ; j<=i; j++){
           cout<<count <<" ";
            count++;

         } cout<<endl;
    }
}