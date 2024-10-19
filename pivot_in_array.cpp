#include<iostream>
using namespace std;
int pivot(int *arr,int size)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}

int main()
{
    int arr[6]= {7,9,10,1,2,3};
    int size=6;
    cout << "pivot index=" <<pivot(arr,size)<< endl;
    return 0;
}