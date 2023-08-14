//  Sequence Container :  1.) Array
#include<iostream>
#include<array>

using namespace std;

int main(){
    //int a[4]=={1,2,3,4};
  
  array<int,4> a = {1,2,3,4};

    // i) Size Of Array 
     int size=a.size();
     cout<<"Array Elements : ";
     for(int i=0;i<size;i++){
        cout<< a[i] <<" ";
     }
      cout<<endl;

    // ii.)  Element at any index in array
    cout<<"Element At 2nd  index -> "<<a.at(2)<<endl;

    // iii.)  First and last element 
    cout<<"First Element -> "<<a.front()<<endl;
    cout<<"Last Element -> "<<a.back()<<endl;

    // iv.) Array is empty or not , it returns bollean value (True:1 or False:0)
    cout<<"Empty or Not ? "<<a.empty()<<endl;
      
     
}