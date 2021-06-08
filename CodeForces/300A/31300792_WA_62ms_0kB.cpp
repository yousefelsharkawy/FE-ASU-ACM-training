#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,cset1neg = 0,cset2neg = 0,cset2pos = 0,I = 0,J = 0,K = 0,cset1 = 0,cset2 = 0,cset3 = 0;
    cin >> n;
    int arr[n],set1[n],set2[n],set3[n];

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            set3[K] = arr[i];   
            K++;
            cset3++;
        }else if (arr[i] < 0)
        {
            if(cset1neg != 1){
                set1[I] = arr[i];
                cset1++;
                I++;
                cset1neg++;
            }else if ((cset2pos != 1) || (cset2neg != 2) )
            {
                set2[J] = arr[i];
                cset2++;
                J++;
                cset2neg++;
            }else{
                set3[K] = arr[i];
                cset3++;
                K++;
            } 
        }else
        {
            if(cset2pos != 1){
                set2[J] = arr[i];
                cset2++;
                J++;
                cset2pos++;
            }else{
                set3[K] = arr[i];
                cset3++;
                K++;
            }
        }
        
        
        
    }
    cout << cset1;
    for (int i = 0; i < cset1; i++)
    {
        cout<<set1[i];
    }
    cout<< "\n";
    cout << cset2;
    for (int i = 0; i < cset2; i++)
    {
        cout<<set2[i];
    }
    cout<< "\n";
    cout << cset3;
    for (int i = 0; i < cset3; i++)
    {
        cout<<set3[i];
    }
    
    
    
}