#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"Enter number of soldiers: ";
    int nums;
    cin>>nums;

    cout<<pow(2,int(log2(nums)))-1;

    return 0;
}
