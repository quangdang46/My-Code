#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
#define mod 1000000007
#define ll long long
int a[100009];
int d[100009];
int n;
int make(int i){
	if(i==n-1) return 0;
	if(d[i]!=-1)
	return d[i];
	int ans=make(i+1)+abs(a[i+1]-a[i]);
	if(i+2<n){
		ans=min(ans,make(i+2)+abs(a[i+2]-a[i]));
		
	}
	return d[i]=ans;
}
int main(){
	memset(d,-1,sizeof(d));
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<make(0)<<endl;
}
