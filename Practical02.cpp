#include <iostream>
using namespace std;

namespace first
{
    int a = 10;
    
    int add(int a, int b)
    {
        return a+b;
    }
}
namespace second
{
    int a = 20;
    
    int add(int a, int b)
    {
        return a+b;
    }
}

int main()
{
    cout << "using first namespace a = " << first::a << endl;
    cout << "using second namespace a = " << second::a << endl;
    
    cout << "using first namespace sum(10,20) = " << first::add(10,20) << endl;
    cout << "using second namespace sum(20,40) = " << second::add(20, 40) << endl;
    return 0;
}
