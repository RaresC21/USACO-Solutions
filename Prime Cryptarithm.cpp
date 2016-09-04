/*
 ID: RaresC
 LANG: C++
 TASK: crypt1
 */

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int N;
bool possible[10];
int digits[10];

bool does_work(int a) {
    while (a > 0) {
        int d = a % 10;
        if (!possible[d]) return false;
        a /= 10;
    }
    return true;
}

bool multiply (int n1, int n2) {
    
    int a = n1 * n2;
    if (a > 1000) return false;
    
    return does_work(a);
}

int main() {
    
    ifstream fin ("crypt1.in");
    ofstream fout ("crypt1.out");
    
    int ans = 0;
    fin >> N;
    for (int i = 0; i < N; i++) {
        fin >> digits[i];
        possible[digits[i]] = true;
    }
    
    // first number
    for (int i = 0; i < N; i++)
        for (int k = 0; k < N; k++)
            for (int j = 0; j < N; j++) {
                int n = 100*digits[i] + 10*digits[k] + digits[j];
                
                // second number
                for (int a = 0; a < N; a++)
                    for (int b = 0; b < N; b++) {
                        int n1 = digits[a], n2 = digits[b];
                        if (multiply(n1, n) && multiply(n2, n)) {
                            int total = n*n1*10 + n*n2;
                            if (does_work(total))
                                ans++;
                        }
                    }
            }
    
    fout << ans << "\n";
    
    return 0;
}

