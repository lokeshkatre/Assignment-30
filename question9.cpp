#include<iostream>
#include<string>
using namespace std;

int main()
{
    string email;
    int count=-1;
    try 
    {
        int i;
        cout<< "Enter email Id:"<<endl;
        cin>>email;
        for( i=0; email[i]!='\0';i++)
        {
            count = email.find("@gmail.com");
            if(count!=-1)
            break;
        }
        if(count==-1)
        throw 0;
        
        cout<<"\nEmail : "<<email <<endl;
    }
    catch (int n)
    {
        cout<< "email does not contain @gmail.com ERROR"<<endl;
    }
   
    return 0;

}