#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
             ans=mid;
             e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
             ans=mid;
             s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[8]={2,4,5,5,6,8,8,8};
    int key=3;
    int size=8;
    cout<<"first occurance of 8 is "<<firstocc(arr,8,8);
    cout<<"last occurance of 8 is "<<lastocc(arr,8,8)<<"\n";
    int total=(lastocc(arr,8,8)-firstocc(arr,8,8))+1;
    cout<<"total number of occurance of 8 ="<<total;

    return 0;
}