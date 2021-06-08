#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[5];
    long least = INT64_MAX,largest = 0,sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < 5; j++)
    {
        sum += arr[j];
        if(arr[j] < least)
        {
            least = arr[j];
        }
        if(arr[j] > largest)
        {
            largest = arr[j];
        }
    }
    cout << (sum-largest) << " " << (sum-least);
    
    
}