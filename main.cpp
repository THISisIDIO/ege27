#include <iostream>
#include <vector>
#include <fstream>
    using namespace std;

    void max_sum_div()
    {
        int n(0);
        int v(0);
        cin >> n;
        vector<int> numbers(n, 0);
        for (int i(0); i<n; i++)
            cin >> numbers[i];
        for (int i(0); i<n; i++)
        for (int j(i+1); j<n; j++)
        {
            v=numbers[i]*numbers[j];
            if (v%35==0)
                cout << v<< endl;
        }


    }
    int main()
{
    max_sum_div();
}


