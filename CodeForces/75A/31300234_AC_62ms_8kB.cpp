#include <bits/stdc++.h>

using namespace std;

long erase_zeros(long n)
{
    string x = to_string(n);
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '0')
        {
            x.erase(i,1);
            i--;
        }
        
    }
    n = stoi(x);
    return n;
}

int main(){
    long a,b,c;
    cin >> a >> b;
    c = a + b;
    a = erase_zeros(a);
    b = erase_zeros(b);
    c = erase_zeros(c);
    if((a+b) == c){
    cout << "YES";
    }
    else{
        cout << "NO";
    }

}