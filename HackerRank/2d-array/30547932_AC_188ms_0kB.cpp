#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[6][6];
    int sumt = -63, sum;

    for (int I = 0; I < 6; I++)
    {
        for (int J = 0; J < 6; J++)
        {
            cin >> arr[I][J];
        }
        
    }

    for (int i = 1; i < 5 ; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            sum = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            if(sum > sumt){
            sumt = sum;
            }
        }
        
    }
    cout << sumt;
    

    
}