#include<iostream>
using namespace std;
main()
{
    int count=0;
    int number=0;
    int size = 4;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter a value:";
        cin >> array[i];
    }
    while(array[0] > array[1])
    {
        number=array[0];
        array[0]=array[1];
        array[1]=number;
        count=count+1;
    }
    while(array[1] > array[2])
    {
        number=array[1];
        array[1]=array[2];
        array[2]=number;
        count=count+1;
    }
    while(array[2] > array[3])
    {
        number=array[2];
        array[2]=array[3];
        array[3]=number;
        count=count+1;
    }
    while(array[0] > array[2])
    {
        number=array[0];
        array[0]=array[2];
        array[2]=number;
        count=count+1;
    }
    while(array[0] > array[3])
    {
        number=array[0];
        array[0]=array[3];
        array[3]=number;
        count=count+1;
    }
    while(array[1] > array[2])
    {
        number=array[1];
        array[1]=array[2];
        array[2]=number;
        count=count+1;
    }
    while(array[1] > array[3])
    {
        number=array[3];
        array[1]=array[3];
        array[3]=number;
        count=count+1;
    } 
    cout<<"count:"<<count<<endl;
    cout<<array[0]<<","<<array[1] << "," << array[2] <<"," << array[3];
}