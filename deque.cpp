#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int>d;
    int i;
    for(i=0;i<k;i++){
        while((!d.empty())&&(arr[i])>=arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }
    for(i=k;i<n;i++){
        cout <<arr[d.front()]<<" ";
        while(!(d.empty())&&arr[d.back()]<=arr[i]){
            d.pop_back();
        }
        d.push_back(i);
        while(!(d.empty())&&d.front()<=i-k){
            d.pop_front();
        }
    }
    cout <<arr[d.front()]<<endl;
}

int main(){
  
	int t;
	//cin >> t;
    scanf("%d",&t);
	while(t>0) {
		int n,k;
    	//cin >> n >> k;
        scanf("%d %d",&n,&k);
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		scanf("%d",&arr[i]);
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}