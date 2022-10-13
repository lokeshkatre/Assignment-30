#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    char nickName[20];
    cout<<"Enter Nick Name: ";
    cin.getline(nickName,20);
    bool flag=false;
    try 
    {
        if(strlen(nickName)>8)
        throw 1;
        for(int i=0;i<strlen(nickName);i++)
        {
            if((nickName[i]>='A'&& nickName[i]>='Z') || (nickName[i]>='a'&& nickName[i]>='z'))
            flag=true;
            else
            {
                flag=false;
                break;
            }
        }
        if(!flag)
        throw 1;
        cout<<"\nNick Name : "<<nickName<<endl;
    }
    catch(int n)
    {
        cout<<"\nInvalid nick name!"<<endl;
    }

}