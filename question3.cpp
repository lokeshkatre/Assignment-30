#include <iostream>
#include <string>
using namespace std;
int main()
{
        float num1, num2,ans;
        char Operator;

        try
        {
            cout << " Enter First Number :";
            cin >> num1;
        
            cout << " Enter Operator :";
            cin>>Operator;
            if(Operator !='+' && Operator !='-' && Operator !='*' && Operator !='/')
            throw Operator;

            cout << " Enter second Number :";
            cin >> num2;
            switch(Operator)
            {
                case '+':
                  ans=num1+num2;
                  break;
                case '-':
                  ans=num1-num2;
                  break;
                case '*':
                  ans=num1*num2;
                  break;
                case '/':
                  if(num2==0)
                  throw 0;
                  ans=num1/num2;
                  break;
            }
            cout<<"\n\nAnwer: " << num1 << Operator << num2 << "=" <<ans << endl;
        }       
        catch (const char c)
        {
                cout<<"Wrong operator : "<< c << " is invalid operator "<<endl;
        }
        catch (const int n)
        {
                cout<<"not possible"<<endl;
        }
        return 0;       

}