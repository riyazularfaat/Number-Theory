#include<bits/stdc++.h>
using namespace std;

void seive(int n){
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(isPrime[i]){
            for (int j = i * i; j <= n; j +=i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(isPrime[i]) 
            cout << i <<" ";
    }
    isPrime[n] ? cout << "Prime" : cout << "Not Prime";
}

int main()
{
    int n;
    cin >> n;
    seive(n);
    
    return 0;
}