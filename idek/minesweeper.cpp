#include <iostream>
#include <vector>

using namespace std;
int count = 0;

int check(bool first[], int p, int n) {
    int check = 0;
    if (first[p]) {
        check++;
    }
    if (p == n - 1) {
        if (p > 0 && first[p - 1]) {
            check++;
        }
    } else {
        if (first[p + 1]) {
            check++;
        }
        if (p > 0 && first[p - 1]) {
            check++;
        }
    }
    return check;
}

// Recursive backtracking function
void recursion(bool first[], int second[], int p, int n) {
    int checkCount = check(first, p, n);

    if (p > 0) {
        int checkbefore = check(first, p - 1, n);
        if (checkbefore != second[p - 1]) {
            return;
        }
    }

    if (checkCount == second[p]) {
        if (p == n - 1) {
            count++;
        } else {
            first[p + 1] = false;
            recursion(first, second, p + 1, n);
        }
    } else if (checkCount < second[p]) {
        if (p == n - 1) {
            return;
        } else {
            first[p + 1] = true;
            recursion(first, second, p + 1, n);
            first[p + 1] = false;
            recursion(first, second, p + 1, n);
        }
    } else {
        return;
    }
}

int main() {
    int n;
    cin >> n;
    
	int second[n+5];
	bool first[n+5];
    for (int i = 0; i < n; i++)cin >> second[i];
    
    first[0] = true;
    recursion(first, second, 0, n);
    first[0] = false;
    recursion(first, second, 0, n);

    cout << count << endl;

    return 0;
}

