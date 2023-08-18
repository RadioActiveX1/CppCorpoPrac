#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], int n){

	int total=0;
	sort(arr,arr+n);

	for (int i = n-1; i >= 0; --i)
	{
		int m=i-1;
		int j=0;

		while(j<m){
			if (arr[i]==arr[j]+arr[m]){
				total++;
				break;
			}
			else if (arr[i]>arr[j]+arr[m])
				j++;
			else
				m--;
		}
	}
	return total;
}

int main()
{
	int n=5;
	int arr[n]={1,1,2,3,4};
	cout<<solution(arr,5);
	return 0;
}