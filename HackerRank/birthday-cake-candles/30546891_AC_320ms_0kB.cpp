#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, largest = 0 , c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if(arr[j] > largest)
        {
            largest = arr[j];
        }   
    }
    for (int k = 0; k < n; k++)
    {
        if (largest == arr[k]){
            c++;
        }
    }
    cout << c;
    
    
    
}