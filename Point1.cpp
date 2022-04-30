
// Diference between i++ and ++i in loops.

#include <iostream>
using namespace std;

// int main()
// {
//     for (int i = 0; i <= 10; ++i)
//     {
//         cout << i << endl;
//     }
// }

// -------------------------------------------------------------

int main()
{
    for (int i = 0; i <= 10;)
    {
        cout << i++ << endl;
        // cout << ++i << endl;
    }
}
