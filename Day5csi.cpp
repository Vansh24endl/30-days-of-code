#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n=10, c;
    cout << "Fibonachi series upto " << n << " terms" << endl;
    cout << a <<endl<< b <<endl;
    for (int i = 0; i <(n-2); i++)
    {
        c = a + b;
        cout << c<<endl;
        a = b;
        b = c;
    }

    return 0;
}
