#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int solution(char *a){
    if (a[0]=='.'&&a[strlen(a)-1]=='-'){
        stack<char> s;

        for(int i=0;i<strlen(a);i++){
            if (s.empty())
                s.push(a[i]);
            else if (s.top()=='.'&&a[i]=='-')
                s.pop();
            else
                s.push(a[i]);
        }

        if (s.empty())
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int main()
{
    char *code=".-.-.-.-.-";
    return solution(code);
}
