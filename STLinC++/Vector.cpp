//  Sequence Container :  4.) List
#include<iostream>
#include<vector>

using namespace std;

int main(){
   
   vector<int> v = {1,2};
    
    // i.) Insert  another elements
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);

    // ii.) Capacity of Vector    
     cout<<"Capacity : "<< v.capacity() <<endl;   //(capacity become double when element of size()+1 is insert in vector)

    // iii.)  Size of Vector
     cout<<"Size : "<< v.size() <<endl;

     cout<<endl;
     
    cout<<"Vector Elements : ";
     for(int i=0;i<v.size();i++){
        cout<< v[i] <<" ";
     }
      cout<<endl;


    // iv.) 
     cout<<"Element At 2nd  index -> "<<v.at(2)<<endl;

    // v.)    
     cout<<"First Element -> "<<v.front()<<endl;
     cout<<"Last Element -> "<<v.back()<<endl;

    // vi.) Check Vector is empty or not , it returns bollean value (True:1 or False:0)
     cout<<"Empty or Not ? "<<v.empty()<<endl<<endl;

    

    // vi.) Pop Elements
     v.pop_back();

     cout<< " After Pop ,  Size : "<<v.size()<<endl;
    
     cout<<"Elements After Pop : ";
     for(int i :v ){
        cout<< v[i] <<" ";
     }
      cout<<endl<<endl;


    // viii.)  
      v.clear();
     cout<< " After clear ,  Size  : "<<v.size()<<endl;
     cout<< " After clear ,  Vector is empty or not ? "<<v.empty()<<endl;
     

     
}