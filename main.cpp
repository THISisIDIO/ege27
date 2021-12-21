#include <iostream>
#include <vector>
#include <fstream>
    using namespace std;

    void max_sum_div()
    {
        int n(0);
        int z(0);
        int x(0);
        int y(0);
        int vo=99999;
        cin >> n;
        vector<int> numbers(n, 0);
        for (int i(0); i<n; i++)
            cin >> numbers[i];
        for (int i(0); i<n; i++)
        for (int j(i+1); j<n; j++)
        for (int p(j+1); p<n; p++)
        {
            int vod=numbers[i]*numbers[j]*numbers[p];
            if (vod%4!=0)
            {
                x=i;
                y=j;
                z=p;
                if (vod<vo)
                    vo=vod;
            }

        }

        cout << x << " "<< y << " " << z << endl;
        cout << vo;
    }
    int main()
{
    max_sum_div();
}


