#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start =0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
        return mid;
        }
         if(key>arr[mid])
        {
        start=mid+1;
        }
        else
        {
        end=mid-1;
        }
        mid=(start+end)/2;
        }
        return -1;
}

int main()
{
    int even[6]= {2,4,6,8,10,12};
    int odd[5]= {3,5,7,9,11};
    int indexeven=binarysearch(even,6,2);
    cout << "index of 10 is="<<indexeven << endl;
    int indexodd=binarysearch(odd,6,13);
    cout << "index of 5 is="<<indexodd << endl;
    return 0;
}