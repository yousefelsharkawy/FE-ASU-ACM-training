#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];   
    }
    cout << sum;
    
    
}