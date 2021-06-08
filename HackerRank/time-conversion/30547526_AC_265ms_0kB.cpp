#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int hours = stoi(s.substr(0,2));
    
    if(s.substr(8,2) == "AM")
    {
        hours = hours % 12;
        s.replace(0,2,"0" + to_string(hours));
        s.erase(8,9);
        cout << s;
    }else{
        hours = (hours % 12) + 12;
        s.replace(0,2,to_string(hours));
        s.erase(8,9);
        cout << s;
    }
}