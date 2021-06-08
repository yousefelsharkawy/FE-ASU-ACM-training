#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sumr = 0, suml = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    for (int I = 0; I < n; I++)
    {
        for (int J = 0; J < n; J++)
        {
            if(I == J)
            {
                sumr += arr[I][J];
            }if ((I+J) == (n-1))
            {
                suml += arr[I][J];
            }
        }
        
    }
    if((suml - sumr) < 0)
    {
        cout << -1*(suml - sumr);
    }else{
        cout << (suml-sumr);
    }
}