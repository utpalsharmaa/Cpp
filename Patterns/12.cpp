// 0 
// 1 0 
// 0 1 0 
// 1 0 1 0 
// 0 1 0 1 0 
// 1 0 1 0 1 0 

#include <iostream>
using namespace std;
void Binarytraingle(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j < i; j++)
        {
            cout << start<<" ";
            start=1-start;
        }
        cout << endl;
    }
}
int main()
{
    int n = 7;
    Binarytraingle(n);

    return 0;
}