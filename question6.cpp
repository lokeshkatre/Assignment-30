#include<iostream>
using namespace std;
int main()
{
   string pincode;
    try
    {
        cout<<"Enter pincode:"<<endl;
        cin>>pincode;
        int l=0;
        for(int i=0;pincode[i]!='\0';i++)
        l++;
        if(l!=6)
        throw 0;
        cout<<"\n\nPincode : "<<pincode<<endl;
    }
    catch(int n)
    {
        cout<<"\n\nError! Pincode does not have 6 digits"<<endl;
    }
    return 0; 
}