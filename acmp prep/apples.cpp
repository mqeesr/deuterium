#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int apples_per_student = k / n;
    int apples_in_basket = k % n;
    int unhappy_students;

    if (k % n == 0) {
        unhappy_students = 0;
    } else {
        unhappy_students = n - (k % n);
    }

    cout << apples_per_student << " " << apples_in_basket << " " << unhappy_students;

}
