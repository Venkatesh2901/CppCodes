//  Sequence Container :  4.) List
#include<iostream>
#include<list>

using namespace std;

int main(){
  
  list<int> l = {2,3};

    // i.) Insert Another elements
     l.push_front(1);
     l.push_back(4);


    // ii.) Size Of Deque
     cout<<"Size : "<<l.size()<<endl;
    
    cout<<"Elements : ";
     for(int i:l){
        cout<<i<<" ";
     }
     cout<<endl;
     

    // iv.)  First and last element 
     cout<<"First Element -> "<<l.front()<<endl;
     cout<<"Last Element -> "<<l.back()<<endl;

    // v.)   it returns bollean value (True:1 or False:0)
     cout<<"Empty or Not ? "<<l.empty()<<endl;

     cout<<endl;



    //vi.) Erase  Element 

     l.erase(l.begin());

     cout<<"After  Erase,  Size : "<<l.size()<<endl;
     cout<<"Element left  : ";
     for(int i : l){
        cout<<i<<" ";
     }cout<<endl<<endl;

    
    
    //vii.) Pop in Deque
     l.pop_front();

     cout<<"Element After Front Pop : ";
     for(int i : l){
        cout<<i<<" ";
     }cout<<endl;

     l.pop_back();
     cout<<"Element After Back Pop : ";
     for(int i : l){
        cout<<i<<" ";
     }cout<<endl<<endl;


     


    
     

      
     
}