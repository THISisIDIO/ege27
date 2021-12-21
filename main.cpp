#include <iostream>
#include <vector>
#include <fstream>
    using namespace std;

    void max_sum_div()
    {
        int n(0);
        int z(0);
        int x=0;
        int y=0;
        int p=3;
        int k=0;
        int vo=99999;
        cin >> n;
        vector<int> numbers(n, 0);
        for (int i(0); i<n; i++)
            cin >> numbers[i];
        for (int i(k); i<p; i++)
            {
                int vod=numbers[i]*numbers[i+1]*numbers[i+2];
                if (vod%4==0)
                {
                    k+=1;
                    p+=1;
                }
                else
                {
                    x=numbers[i];
                    y=numbers[i+1];
                    z=numbers[i+2];
                    break;
                }

            }


        cout << x << " "<< y << " " << z << endl;
    }
    int main()
{
    max_sum_div();
}


