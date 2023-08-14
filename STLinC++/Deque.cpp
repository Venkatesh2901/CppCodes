//  Sequence Container :  3.) Deque
#include<iostream>
#include<deque>

using namespace std;

int main(){
  
  deque<int> d = {2,3};

    // i.) Insert Another elements
     d.push_front(1);
     d.push_back(4);


    // ii.) Size Of Deque
     cout<<"Size : "<<d.size()<<endl;

     cout<<"Deque Elements : ";
     for(int i=0;i<d.size();i++){
        cout<< d[i] <<" ";
     }
      cout<<endl;

    // iii.)  Element at any index in  Deque
    cout<<"Element At 2nd  index -> "<<d.at(2)<<endl;

    // iv.)  First and last element 
     cout<<"First Element -> "<<d.front()<<endl;
     cout<<"Last Element -> "<<d.back()<<endl;

    // v.)   it returns bollean value (True:1 or False:0)
     cout<<"Empty or Not ? "<<d.empty()<<endl;

    cout<<endl;



    //vi.) Erase  2 elements 

     d.erase(d.begin(),d.begin()+2);

     cout<<"After Erase Size : "<<d.size()<<endl;

     cout<<"Element After Erase : ";
     for(int i : d){
        cout<<i<<" ";
     }cout<<endl;

     cout<<endl;



    //vii.) Pop in Deque
     d.pop_front();

     cout<<"Element After Front Pop : ";
     for(int i : d){
        cout<<i<<" ";
     }cout<<endl;

     d.pop_back();
     cout<<"Element After Back Pop : ";
     for(int i : d){
        cout<<i<<" ";
     }cout<<endl;


     cout<<"Empty or Not ? "<<d.empty()<<endl;


    
     

      
     
}