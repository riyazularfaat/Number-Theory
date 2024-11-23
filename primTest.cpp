#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    // Print all prime numbers less than n
    // for(int i=0;i<n;i++)
    // {
    //     if(isPrime(i))
    //         cout<<i<< " ";
    // }
    if(isPrime(n))
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    return 0;
}