#include<iostream>
#include<vector>
#include <algorithm>
//#include "stdafx.h"
//#include <bits/stdc++.h>
using namespace std;
bool comprator(int x,int y){
    return x>y;
}
int main(){
    vector <int>A={ 11,4,3,6 };
    //for sorting
    sort(A.begin(),A.end());//O(NlogN)
    bool present = binary_search(A.begin(),A.end(),3);//true
    present =binary_search(A.begin(),A.end(),100);//false
    A.push_back(100);
    present =binary_search(A.begin(),A.end(),100);//true
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);//iterator points to an item, that is a part of group of item.(basically a pointer)
    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);//returns iterator that is strictly greater than the specified value.
    cout << *it<<" "<<*it2<<endl;
    cout << it2-it<<endl;
    sort(A.begin(),A.end(),comprator);//sorts the vector in decreasing order
    cout << A[0]<<endl;
    vector<int>::iterator it3;
    for(it3 = A.begin();it3 != A.end();it3++){
        cout << *it3<<" ";
    }
    cout <<"other way is :"<<endl;
    for(int x:A){
        cout<<x<<" ";
    }
    cout <<endl;
}