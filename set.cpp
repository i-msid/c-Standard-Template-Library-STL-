#include<iostream>
#include<set>
#include <algorithm>
using namespace std;
//maintains an ordered list unlike vector
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(-2);
    s.insert(-10);
    for(int x:s){
        cout <<x<<" ";
    }
    cout <<endl;
    set<int>::iterator it=s.find(-1);//alternate way to write auto it=s.find(-1);
    if(it==s.end()){
        cout <<"not present\n";
    }
     else{
         cout <<*it<<" present."<<endl;
     }
    auto it2 = s.lower_bound(-1);
    auto it3 = s.upper_bound(0);
    cout <<"upper bound : "<<*it3<<"\nlower bound : "<<*it2<<endl;
    auto it4 = s.upper_bound(3);
    if(it4==s.end()){
        cout <<"no upper bound!\n";
    }
    else{
        cout <<*it4<<endl;
    }
    //can also erase numbers in OlogN
    s.erase(1);
        for(int x:s){
        cout <<x<<" ";
    }
}