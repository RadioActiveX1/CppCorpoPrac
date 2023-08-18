#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int getIndex(vector<int> v, int key){
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
    int x[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    vector<vector<int> > lst;
    int totalprice=0;

    int rows=sizeof(x)/sizeof(x[0]);
    int cols=sizeof(x[rows])/sizeof(x[rows][0]);

    for(int i=0;i<rows;i++){
        vector<int> temp;
        for (int j=0;j<cols;j++){
            temp.push_back(x[i][j]);
            }
        lst.push_back(temp);
        }

     totalprice+=*min_element(lst[0].begin(),lst[0].end());
     int index=getIndex(lst[0],totalprice);

     for (int i = 1; i < rows; ++i){

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
