#include<iostream>
using namespace std;
int rotations(string array[],int len);
int main()
{
    int len;
    cout<<"Enter the length of array: ";
    cin>>len;
    string array[len];
    for(int i=0;i<len;i++)
    {
        while(true)
        {
            cout<<"Enter turn "<<i+1<<" direction: ";
            cin>>array[i];
            if(array[i]=="right" || array[i]=="left")
            {
                break;
            }
            else{
                cout<<"invalid input, Please enter 'right' or 'left'"<<endl;
            }
        }
    }
    int result=rotations(array,len);
    cout<<result;
}
int rotations(string array[],int len)
{ 
    int degree=0;
    for(int j=0;j<len;j++)
    {
        if(array[j]=="right")
        {
            degree=degree+90;
        }
        else if(array[j]=="left")
        {
            degree=degree-90;
        }
    }
    int turns=degree/360;
    if(turns<0)
    {
        return -turns;
    }
    return turns;
}