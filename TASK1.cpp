#include<iostream>
using namespace std;
main()
{
    cout<<"in case of missing number please put 0:"<<endl;
    int num=55;
    int sum=0;
    int number[10];
    for(int i=0; i <10 ;i++ )
    {
        cout<<"enter numbers: from 1 to 10";
        cin >> number[i];
        sum=sum+number[i];
    }
    num=num-sum;
    cout<<"missing number is :"<<num<<endl; 
}