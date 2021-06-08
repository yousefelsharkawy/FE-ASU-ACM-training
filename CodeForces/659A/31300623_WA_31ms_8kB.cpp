#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, x;
    cin >> n >> a >> b;
    if (abs(b) % n == 0)
    {
        cout << a;
        return 0;
    }
    
    if (b<0)
    {
        x = abs(b) % n;
        x *= -1;
        x += n;
        cout << (x+a % n);
    }
    else
    {
        x = b % n;
        cout << (x+a % n);
    }
    
    
}