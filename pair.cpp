#include<iostream>
#include<set>
#include <algorithm>
using namespace std;

int main(){
    set<pair<int,int> >s;
    s.insert({2,3});
    s.insert({10,20});
    s.insert({30,400});
    s.insert({401,500});
    int point =501;
    auto it = s.upper_bound({point,INT_MAX});
    if(it==s.begin()){
        cout <<"element is not present in any interval.\n";
    }
    it--;
    pair<int ,int>temp=*it;
    if(temp.first<=point&&temp.second>=point){
        cout << "yes it is present in : "<<temp.first<<" "<<temp.second<<endl;
    }
    else{
        cout <<"the given point is not in any interval.\n";
    }
}