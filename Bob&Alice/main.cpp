#include <iostream>
#include <math.h>
using namespace std;

int think(int n){
    if(n==0)
        return 0;
    else
        return int(log2(n))+1;
}

int main()
{
    int a;
    cin>>a;
    cout<<think(a);

    return 0;
}