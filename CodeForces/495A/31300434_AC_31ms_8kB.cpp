#include <bits/stdc++.h>

using namespace std;

int possible(char x)
{
    int n;
    if(x == '0'){
        n = 2;
        return n;
    };
    if(x == '1'){
        n = 7;
        return n;
    };
    if(x == '2'){
        n = 2;
        return n;
    };
    if(x == '3'){
        n = 3;
        return n;
    };
    if(x == '4'){
        n = 3;
        return n;
    };
    if(x == '5'){
        n = 4;
        return n;
    };
    if(x == '6'){
        n = 2;
        return n;
    };
    if(x == '7'){
        n = 5;
        return n;
    };
    if(x == '8'){
        n = 1;
        return n;
    };
    if(x == '9'){
        n = 2;
        return n;
    };
}


int main(){
int n;
cin >> n;
string s = to_string(n);
int c0, c1;
if (s.size() == 1)
{
    c1 = 2;
}else
{
    c1 = possible(s[1]);
}


c0 = possible(s[0]);
cout << c0*c1;
}