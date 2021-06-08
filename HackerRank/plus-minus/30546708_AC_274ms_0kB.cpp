#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double p = 0,N = 0,z = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if(arr[j] > 0)
        {
            p++;
        }else if(arr[j] < 0){
            N++;
        }else{
            z++;
        }
    }
    printf("%lf\n%lf\n%lf\n", (p/n),(N/n),(z/n));
}