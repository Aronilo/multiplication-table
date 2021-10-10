#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    for (int k = 0; k <= 1; k++)
    {
        for (int i = 2; i <= 10; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                cout << setw(2) << j + k * 4 + 1 << " X " << setw(2) << i << " = " << setw(2) << (j + k * 4 + 1) * i << "     ";

            }
            cout << endl;
        }
        cout << endl;
    }
    system("pause");
}