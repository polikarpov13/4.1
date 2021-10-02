#include <iostream>

using namespace std;

int main()
{
    int N;
    int k = 1;

    double S = 0;

    cout << "N = ";
    cin >> N;

    cout << endl;

    int i = 1;
    while (i <= N) {
        S += (1 + sqrt(1 + pow(i, 2))) / pow(i, 2);
        i++;
    }

    cout << "S = " << S << endl;

    S = 0;
    i = 1;

    do {
        S += (1 + sqrt(1 + pow(i, 2))) / pow(i, 2);
        i++;

    } while (i <= N);

    cout << "S = " << S << endl;

    S = 0;

    for (i = 1; i <= N; i++) {
        S += (1 + sqrt(1 + pow(i, 2))) / pow(i, 2);
    }

    cout << "S = " << S << endl;

    S = 0;

    for (i = N; i >= 1; i--) {
        S += (1 + sqrt(1 + pow(i, 2))) / pow(i, 2);
    }

    cout << "S = " << S << endl;

    system("pause");
    return 0;
}
