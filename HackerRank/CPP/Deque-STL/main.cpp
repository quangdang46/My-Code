#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> maxs;
    for (int i = 0; i < k; i++) {
        while (!maxs.empty() && arr[i] > maxs.back()) {
            maxs.pop_back();
        }
        maxs.push_back(arr[i]);
    }
    cout << maxs.front() << " ";
    for (int i = k; i < n; i++) {
        if (arr[i-k] == maxs.front()) {
            maxs.pop_front();
        }
        while (!maxs.empty() && arr[i] > maxs.back()) {
            maxs.pop_back();
        }
        maxs.push_back(arr[i]);
        cout << maxs.front() << " ";
    }
    cout << "\n";
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}