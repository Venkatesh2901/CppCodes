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
    int n , r ;
    cout<<"Enter the value of n and r "<<endl;
    cin>>n>>r;


    int com=Fact(n)/(Fact(r)*Fact(n-r));      //combination

    int per=Fact(n)/Fact(n-r);               //permuation

    cout<<" Combination of  " <<n << " and "<<r << " is : " <<com <<endl;

    cout<<" Permuation  of  " <<n << " and "<<r << " is : " <<per;

}