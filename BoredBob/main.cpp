#include <iostream>
#include <map>
using namespace std;

int solution(int input1,int *input2){

    map<int, int> mp;
    int total=0;
    for (int i = 0 ; i < input1; i++){
        int k = input2[i];
        int sum=0;

        while(k!=0){
            if(k%2==1)
                sum++;
            k=k/2;
        }

        total+=mp[sum];
        mp[sum]++;
    }
    return total;
}

int main()
{
    int n=5;
    int nums[n]={8,3,9,12,33};
    cout<< solution(n,nums);
}
