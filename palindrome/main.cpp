#include <iostream>
#include  <bits/stdc++.h>
#include <cctype>
using namespace std;

int palindrome(char* input1){
    vector <char> s;
    vector <char> r;
    for(int i=0;i<strlen(input1);i++){
        if (int(input1[i])>=65 && int(input1[i])<=90 || int(input1[i])>=97 && int(input1[i])<=112){
            s.push_back(toupper(input1[i]));
        }
    }

    for(int i=s.size()-1;i>=0;i--){
        r.push_back(s[i]);
    }


    if (s==r){
        return 1;
    }
    else
        return 0;

}

int main()
{
    cout<<palindrome("put it up");
}
