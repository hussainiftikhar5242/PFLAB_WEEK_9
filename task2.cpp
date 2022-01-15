#include<iostream>
using namespace std;
main()
{
    int k;
    cin>>k;
    int array[k];
    int i=0;
    int small,count=1;
    for(; i < k ;)
    {
        cout<<"enter value:";
        cin>>array[i];
        i++;
    }
    int num=0;
    cout<<"entera smaller:";
    cin>>num;
    for(int i=0;i<k;i++)
    {
        small=array[i];
        for( int j=0;j<k;j++)
        {
            if(small > array[j])
            {
                count++;
            }
            
        }
        if(count==num)
        {
            cout<<"number:"<<array[i];
            break;
        }
        count=1;
    }
}