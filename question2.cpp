#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    try
    {
        if (a == 0)
            throw 'e';
        else
            cout << "Not zero" << endl;
        throw;
    }
    catch (char c)
    {
        cout << "number is zero";
    }
    catch (char s[20])
    {
        cout << s;
    }
    return 0;
}