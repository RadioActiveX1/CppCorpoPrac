#include <bits/stdc++.h>
using namespace std;

int solution(int num){

	if (num<=0)
		return 0;

	else{
		int div=2;
		while(div<num){
			if(num%div!=0)
				div++;
			else{
				num=num/div;
				div=2;
			}
		}
		return num;
	}
}
int main()
{
	int num;
	cin>>num;
	cout<<solution(num);
	return 0;
}