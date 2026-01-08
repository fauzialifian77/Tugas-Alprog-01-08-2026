#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    string hijau = "\033[32m";
    int data[10];

    cout << hijau << "Masukkan 10 angka berbeda: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> data[i];
    }

    for (int i = 0; i < 5; i++) {

        if (data[i] > 5) {

            for (int j = 5; j < 10; j++) {

                if (data[j] <= 5) {
                    int temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;

                    break;
                }
            }
        }
    }

    cout << "Hasil: ";
    for (int i = 0; i < 10; i++) {
        cout << data[i] << (i == 9 ? "" : ", ");
    }
    cout << endl;

    return 0;
}