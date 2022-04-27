#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n,i,j,dem;
	long long a[1000005];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long long d=a[1]-a[0];
	dem=0;
	for(j=1;j<n;j++){
		if(a[j]!=(a[0]+j*d)){
			dem++;
			break;
		}
	}
	if(dem==0)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}
/*
#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
using namespace std;
void hamnhap(long long a[], int n)
{
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}
int kt(long long a[], int n, long long d)
{
    for (int i = 3; i <= n; i++)
    {
        if (a[i] - a[i - 1] != d)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    long long a[1000001];
    cin >> n;
    hamnhap(a, n);
    long long d = a[2] - a[1];
    if (kt(a, n, d) == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
*/ 
