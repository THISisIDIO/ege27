#include <iostream>
#include <vector>
#include <fstream>
    using namespace std;

    void max_sum_div()
    {
        int n(0);
        int n5(0);
        int n7(0);
        int n0(0);
        int n35(0);
        cin >> n;
        vector<int> numbers(n, 0);
        for (int i(0); i<n; i++)
            cin >> numbers[i];
        for (int i(0); i<n; i++)
        {
            if (numbers[i]%5==0 and numbers[i]%35!=0)
                n5+=1;
            if (numbers[i]%7==0 and numbers[i]%35!=0)
                n7+=1;
            if (numbers[i]%7!=0 and numbers[i]%5!=0)
                n0+=1;
            if (numbers[i]%35==0)
                n35+=1;
        }
        cout << n5*n7+n35*n5+n7*n35+n0*n35+(n35*(n35-1))/2;


    }
    int main()
{
    max_sum_div();
}


