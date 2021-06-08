#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int i,j = -1;
    while (true)
    {
        i = s.find("WUB");
        if(i == -1)
        {break;}
        s.erase(i,3);
        if ((i - j) != 1)
        {
            s.insert(i," ");
            j = i;
        }
        else{
            j = i - 1;
        }
    }
     if(s.at(0) == ' ')
    {
        s.erase(0,1);
    }
    if (s.back() == ' ')
    {
        s.pop_back();
    }
    cout << s;
}