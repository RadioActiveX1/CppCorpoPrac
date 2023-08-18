#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int input2[6]={4,3,2,2,5,7};
    int count=0;

    for(int i=0;i<n;i++)
        for(int j=j+1;j<n;j++)
            
            if(input2[i]>input2[j])
            {
                int a=input2[i];
                input2[i]=input2[j];
                input2[j]=a;
            }

    for(int i=1; i<=n-3; i++)
        if(input2[i-1]!=i)
            count++;
    
    cout<<count;
    return 0;
}