#include <iostream>
using namespace std;
void check(int n)
{
    try
    {
        if (n <= 20)
            throw n;
        else
            cout << "\nIt is greater than 20 " << endl;
        throw;
    }
    catch (int x)
    {
        cout << "\nIt is a less than 20" << endl;
    }
    catch (char b[50])
    {
        cout << b;
    }
}
int main()
{
    int num;
    cin >> num;
    check(num);
    return 0;
}