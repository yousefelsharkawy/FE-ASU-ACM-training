#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long arr[n];
    long sum = 0;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}