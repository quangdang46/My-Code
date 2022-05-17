#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    vector<int> p(arr,arr+n); //initialize vector from an array 
    // sort(p.begin(),p.end());
    int q;
    cin>>q;
    vector<int>::iterator it1;
    while(q--){
        int y;
        cin>>y;
        it1 = lower_bound(p.begin(),p.end(),y);
        for(int i=0;i<n;++i){
            if(y==(*it1)){
                cout<<"Yes "<<(it1-p.begin())+1<<endl;
                break;
            }else{
                cout<<"No "<<(it1-p.begin())+1<<endl;
                break;
            }
        }
    }
         
    return 0;
}