#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((n-1) - i); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (i+1); k++)
        {
            printf("#");
        }
        printf("\n");
        
        
    }
    
}