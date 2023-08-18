#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	//vector<int> a{8,40,77};
	vector<int> a{80,48,82};
	sort(a.begin(),a.end());
	vector<int> a1;

	for (int i = a.size()-1; i >= 0; --i)	//To make a list of possible maximums
	{										//ignoring consecutiveness
		int x=0;
		x=a[i]*(a.size()-i);
		a1.push_back(x);
	}

	for (int x: a1)
		cout<<x<<" ";

	endl(cout);

	for (int i = 0; i < a1.size(); ++i)		//if any element found from the right										
		if (a1[a1.size()-1-i]>=a1[i])		//to be larger than one from the left
		{									//at i then return it
			cout<<a1[a1.size()-1-i];
			break;
		}

	return 0;
}