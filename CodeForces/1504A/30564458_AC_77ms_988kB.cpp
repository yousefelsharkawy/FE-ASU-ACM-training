#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        x = 0;
        cin >> s;
        for (int j = s.size()-1; j >= 0; j--)
        {
            if (s.at(j) == 'a')
            {
                x++;
                continue;
            }else
            {
                s.insert(s.size()-j-1,1,'a');
                cout << "YES" << '\n' << s << '\n';
                break;
            }
            
        }
        if (x == s.size())
            {
                cout << "NO" << "\n";
                continue;
            }
        
    }
    
}