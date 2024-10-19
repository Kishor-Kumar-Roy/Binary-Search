#include<iostream>
using namespace std;
bool binarysearch(int *arr,int s,int e,int key)
{
    //base case
    if(s>e){
    //element not found
return false;
    }
int mid=s+(e-s)/2;
 if(arr[mid]==key)
{
    return true;
}
    if(arr[mid]<key)
    {
        return binarysearch(arr,mid+1,e,key);
    }
    if(arr[mid]>key)
    {
        return binarysearch(arr,mid-1,s,key);
    }

}
int main()
{
    int arr[5]={2,5,10,14,18};
    int size=5;
    int key=22;
    
    cout<<"present or not"<<endl<<binarysearch(arr,s,e,key)<<endl;

    return 0;
}