#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int solution (char *a,char* b){
    vector<char> a1,a2;
    int longest=0;
    for(int i=0;i<=sizeof(a)/sizeof(a[0]);i++){
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            a1.push_back(a[i]);
    }
    for(int i=0;i<=sizeof(b)/sizeof(b[0]);i++){
        if (b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
            a2.push_back(b[i]);
    }

    for(int i=0;i<a1.size();i++){
        int temp=0;
        for(int j=0;j<a2.size();j++){
            if (a1[j]==a2[j])
                temp+=1;
            else
                break;
        }
        if (temp>longest)
            longest=temp;
    }

    return longest;
}

int main()
{
    cout<<solution("shabi","abcid");

}
