#include<bits/stdc++.h>
using namespace std;

vector<int> vector01(int n0,int n1){
	vector<int> in(n0+n1);
	for (int i = n0; i < n0+n1; ++i)
		in[i]=1;
	return in;
}

struct S
{
	int value=0;
	int difference=0;
	int permutation=0;
};

bool operator<(S &l, S &r){
	int d=l.difference-r.difference;
	return d==0?r.value<l.value:d<0;
}

void solution(int arr[], int k, int n){
	sort(arr,arr+n);
	vector<int> stu(arr,arr+n);
	int permutation=0;
	vector<int> in=vector01(stu.size()-k,k);

	S min;

	do
	{
		S now;
		for (int i = 0; i < in.size(); ++i)
		{
			if(in[i]){
				now.value+=arr[i];
				for (int j = i+1; j < in.size(); ++j)
					if (in[j])
						now.difference+=arr[j]-arr[i];
			}
		}
		now.permutation=++permutation;
		if(min.value==0 || now<min)
			min=now;
	} while (next_permutation(in.begin(), in.end()));

	for (permutation = 1;  permutation < min.permutation; ++permutation)
		next_permutation(in.begin(), in.end());

	for (int i = 0; i < in.size(); ++i)
		if(in[i])
			cout<<arr[i]<<" ";

	cout<<endl;	
}

int main() {

    int n[]={21,12,99,98,19,22,23,14,2};
    solution(n, 7, 9);
    solution(n, 5, 9);
    solution(n, 2, 9);
    solution(n, 1, 9);
    solution(n, 6, 9);

    return 0;
}