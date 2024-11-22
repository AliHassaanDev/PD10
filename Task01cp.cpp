#include <iostream>
using namespace std;
bool sorting(int array[], int len);
int main()
{
    int len;
    cout<<"Enter the length of array: ";
    cin>>len; 
    int array[len];
    for(int i = 0; i < len; i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>array[i];
    }
    bool result=sorting(array,len);
    if(result==0)
    {
        cout<<"False";
    }
    else if(result==1)
    {
        cout<<"True";
    }
    
}
bool sorting(int array[],int len)
{
    for(int j=0;j<len-1;j++)
    {
        for(int h=0;h<len-j-1;h++)
        {
            if(array[h]>array[h+1])
            {
                int temp=array[h];
                array[h]=array[h+1];
                array[h+1]=temp;
            }
        } 
    }
    cout<<"Sorted array=[ ";
    for(int k=0;k<len;k++)
    {
        cout<<array[k]<<",";
    }
    cout<<" ]"<<endl;
    for(int d=0;d<len-1;d++)
    {
        if(array[d]+1 != array[d+1])
        {
            return false;
            break;
        }  
    }
    return true;
}