#include <iostream>
#include <vector>
#include <fstream>
    using namespace std;

    void max_sum_div()
    {
        int n(0);
        cin >> n;
        vector<int> numbers(n, 0);
        for (int i(0); i<n; i++)
            cin >> numbers[i];
        for (int i(0); i<n; i++)
            cout << numbers[i];
    }
    int main()
{
    max_sum_div();
}


