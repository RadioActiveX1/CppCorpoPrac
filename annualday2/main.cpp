#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getIndex(vector<int> v, int key){
	for (int i = 0; i < v.size(); ++i)
		if (v[i]==key)
			return i;
	return -1;
}

int solution(int rows, int x[][4]){
	vector<vector<int> > lst;

	for (int i = 0; i < rows; i++)
	{
		vector<int> temp(x[i],x[i]+4);
		lst.push_back(temp);
	}

	int totalprice=0;

	totalprice+=*min_element(lst[0].begin(),lst[0].end());
	int index=getIndex(lst[0],totalprice);

	for (int i = 1; i < rows; i++){

            if (index!=getIndex(lst[i],*min_element(lst[i].begin(),lst[i].end()))){
                totalprice+=*min_element(lst[i].begin(),lst[i].end());
                index=getIndex(lst[i],*min_element(lst[i].begin(),lst[i].end()));
            }

            else{
                remove(lst[i].begin(),lst[i].end(),*min_element(lst[i].begin(),lst[i].end()));
                totalprice+=*min_element(lst[i].begin(),lst[i].end());
                index=getIndex(lst[i],*min_element(lst[i].begin(),lst[i].end()))+1;
            }
	}

	return totalprice;
}

int main()
{
	int x[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	cout<<solution(3,x);
	return 0;
}
