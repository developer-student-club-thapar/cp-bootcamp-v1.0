#include <iostream>
using namespace std;

void TOH(int n, char start, char aux, char end)
{
    if (n == 1)
    {
        cout << start << " - > " << end << endl;
        return;
    }
    TOH(n - 1, start, end, aux);
    cout << start << " -> " << end << endl;
    TOH(n - 1, aux, start, end);
}

int main()
{
    int n;
    cin >> n;
    char start = 'a', aux = 'b', end = 'c';
    TOH(n, start, aux, end);
}