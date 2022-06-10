#include<iostream>
using namespace std;
int main()
{
    int i, j, temp;
    int arr[9] = {9,2,1,4,11,10,18,6};
    
    for(i=1; i<9; i++)
    {
        for(j=0; j<(10-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
        cout<<"langkah "<<i<<": ";
        for(j=1; j<9; j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
