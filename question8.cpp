#include<iostream>
using namespace std;
int main()
{
    string password;
    
    try
    {
        cout<<"Enter password:"<<endl;
        cin>>password;
        int cap=0,small=0, digit=0,symbol=0;
        for(int i=0;password[i]!='\0';i++)
        {
            if(password[i]>='a'&& password[i]>='z')
            small++;
            if(password[i]>='A'&& password[i]>='Z')
            cap++;
            if(password[i]>='0' && password[i]<='9')
            digit++;
            if((password[i]>='#' && password[i]<='/')|| password[i]=='@')
            symbol++;
        }
        if((cap+small+digit+symbol)<6  || digit==0 || symbol==0||cap==0)
        throw 0;
        cout<<"\n\nPassword : "<<password<<endl;
    }
    catch(int n)
    {
        cout<<"\n\nError! Password does not have 6 character or special symbol or digit or capital letter"<<endl;
    }
    return 0; 
}