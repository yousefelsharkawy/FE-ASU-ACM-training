#include<bits/stdc++.h>

using namespace std;

int main(){
    bool arr[26] = {0};
    string s ;
    cin >> s;
    int tmp,sum = 0;
    
    for (int i = 0; i < s.size(); i++)
    {
        tmp = s.at(i);
        tmp = tmp % 97;
        if(arr[tmp] == false)
        {
            arr[tmp] = true;
        }      
    }
    for (int  j = 0; j < 26; j++)
    {
       if(arr[j] == true)
       {
           sum++;
       } 
    }
    if(sum % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }else
    {
        cout << "IGNORE HIM!";
    }
    
    
}