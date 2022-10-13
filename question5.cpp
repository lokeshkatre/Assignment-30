#include<iostream>
using namespace std;
int main()
{
    string mobile;
    try
    {
        cout<<"Enter mobile number:"<<endl;
        cin>>mobile;
        int l=0;
        for(int i=0;mobile[i]!='\0';i++)
        l++;
        if(l!=10)
        throw 0;
        cout<<"\n\nMobile number : "<<mobile<<endl;
    }
    catch(int n)
    {
        cout<<"\n\nError! Mobile number does not have 10 digits"<<endl;
    }
    return 0;
}