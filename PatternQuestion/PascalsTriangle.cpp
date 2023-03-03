#include<iostream>
using namespace std;

int Fact(int n ){
 int factorial=1;

 for (int i=2 ; i<=n;i++){
    factorial*=i;
  }
   return factorial;

}

int main(){
    int n  ;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    for(int i=0 ; i<n ; i++){
      for(int j=0 ; j<=i;j++){
        cout<<Fact(i)/(Fact(j)*Fact(i-j)) <<" ";           //combination
      } cout<<endl;
   }
    

}