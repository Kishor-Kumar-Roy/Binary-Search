#include<iostream>
using namespace std;
long long int binarysearch(long long int n)
{
    int s=0,e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e)
    {
        long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square<=n)
        {
            ans=mid;
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int k=binarysearch(n);
    cout<<"square root is="<<k;
    
}