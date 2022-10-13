#include<iostream>
using namespace std;
int main()
{
    string userName;
    
    try
    {
        cout<<"Enter pincode:"<<endl;
        cin>>userName;
        int ch=0, digit=0,symbol=0;
        for(int i=0;userName[i]!='\0';i++)
        {
            if((userName[i]>='a'&& userName[i]>='z')|| (userName[i]>='A'&& userName[i]>='Z'))
            ch++;
            if(userName[i]>='0' && userName[i]<='9')
            digit++;
            if((userName[i]>='#' && userName[i]<='/')|| userName[i]=='@')
            symbol++;
        }
        if(ch<6 || digit==0 || symbol==0)
        throw 0;
        cout<<"\n\nUser name : "<<userName<<endl;
    }
    catch(int n)
    {
        cout<<"\n\nError! User name does not have 6 character or special symbol or digit"<<endl;
    }
    return 0; 
}