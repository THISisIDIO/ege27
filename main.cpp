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
        for (int j(i+1); j<n; j++)
        for (int p(j+1); p<n; p++)
        {
            if ((numbers[i]*numbers[j]*numbers[p])%4!=0)
                cout << numbers[i]*numbers[j]*numbers[p]  << endl;

        }


    }
    int main()
{
    max_sum_div();
}


