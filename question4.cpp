#include<iostream>
using namespace std;

int main()
{
    string email;
    int count=-1,countDot=-1;
    try 
    {
        int i;
        cout<< "Enter email Id:"<<endl;
        cin>>email;
        for( i=0; email[i]!='\0';i++)
        {
            if(email[i]=='@')
            count=i;
            else if(email[i]=='.')
            countDot=i;
            
        }
        if(count==-1 || countDot==-1)
        throw 0;
        if(count>countDot || countDot==i-1)
        throw 'e';
        cout<<"\nEmail : "<<email <<endl;
    }
    catch (int n)
    {
        cout<< "email does not contain @ ERROR"<<endl;
    }
    catch (char c)
    {
        cout<<" '@' after '.' or dot at last error"<<endl;
    }
    return 0;

}