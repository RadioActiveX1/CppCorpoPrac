#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solution(int n, char* a[])
{
    int total=0;

    for (int i = 0; i < n; i++)
    {
        string st=a[i];
        string rev=st;
        reverse(rev.begin(),rev.end());

        if (rev==st && st.length()>=2){
            total+=1;
        }
        else{
            string s1,s2;

            if (strlen(a[i])%2==0){
                s1=st.substr(0,strlen(a[i])/2);
                s2=st.substr((strlen(a[i])/2),strlen(a[i])/2);
                }
            else{
                s1=st.substr(0,(strlen(a[i])/2));
                s2=st.substr((strlen(a[i])/2)+1,(strlen(a[i])/2)+1);            //skipping the middle element
                }
                
            string temp=s1;
            reverse(temp.begin(),temp.end());

            if(temp==s1 && s1.length()>=2){
                total+=1;
                }
            else{
                temp=s2;
                reverse(temp.begin(),temp.end());

                if(temp==s2 && s2.length()>=2){
                    total+=1;
                }
            }
        }
    }
    return total;
}


int main(){
    char *buff[4] = {"ccc" , "how" , "xexxex" ,"niggaaggin"};
    return solution(4,buff);
}
