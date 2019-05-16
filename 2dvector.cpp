#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;
    cin >>n>>q;  
    vector<vector<int> >arr;
   // vector<vector<int> >::iterator it;
    for(int j=0;j<n;j++){
        int temp,size;
        cin >>size;
        vector<int>stuff;
      
        for(int i=0;i<size;i++){
            cin >>temp;
            stuff.push_back(temp);
        }
          arr.push_back(stuff);
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin >>a >>b;
        cout <<arr[a][b]<<endl;
    }
    return 0;
}