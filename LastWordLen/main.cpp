#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    vector<string> words;

    string n="";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' ' || i==s.length()-1){
            if(i==s.length()-1)
                n+=s[i];
            words.push_back(n);
            n="";
        }
        else
            n+=s[i];
    }

    cout<<words[words.size()-1].length();

    return 0;
}
