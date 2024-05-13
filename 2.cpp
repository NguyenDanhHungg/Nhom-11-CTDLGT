#include <iostream>

void printYearsWithNoBirths(int N[], int X, int Y) {
    cout << "Nhung nam khong co nguoi sinh ra: ";
    for (int i = 0; i <= (Y - X); ++i) {
        if (N[i] == 0) {
            cout << X + i << " ";
        }
    }
    std::cout << std::endl;
}

int countYearsWithFewBirths(int N[], int X, int Y, int M) {
    int count = 0;
    for (int i = 0; i <= (Y - X); ++i) {
        if (N[i] <= M) {
            count++;
        }
    }
    return count;
}

int countPeopleOver50(int N[], int X, int Z) {
    int count = 0;
    for (int i = 0; i <= (Z - X); ++i) {
        count += N[i];
    }
    return count;
}

int main() {
    const int X = 1920; 
    const int Y = 1970; 
    const int Z = 1985; 
    const int M = 10;  

    int N[Y - X + 1] = { 10, 20, 0, 5, 8, 15, 25, 30, 40, 50, 10 };

    printYearsWithNoBirths(N, X, Y);

    int yearsWithFewBirths = countYearsWithFewBirths(N, X, Y, M);
    cout << "Nam co so nguoi sinh ra khong qua " << M << yearsWithFewBirths << endl;

    int peopleOver50 = countPeopleOver50(N, X, Z);
    cout << "So nguoi da tren "<< peopleOver50 << "tinh den nam "<< Z << endl;

    return 0;
}

