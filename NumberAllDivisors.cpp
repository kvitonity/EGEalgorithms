#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> divisors(int number)
{
    vector<int> dv;
    dv.push_back(1);
    dv.push_back(number);

    if (number > 3) {
        int k = 2;
        while (k * k <= number) {
            if (number % k == 0) {
                if (number / k > k) {
                    dv.push_back(k);
                    dv.push_back(number / k);
                }
                else dv.push_back(k);
            }
            k = k + 1;
        }
    }
    sort(dv.begin(), dv.end());
    return dv;
}

int main()
{
    int number;
    cin >> number;
    auto dv = divisors(number);
    for(int j = 0; j < dv.size(); j++)
        cout << dv[j] << " ";

    return 1;
}
