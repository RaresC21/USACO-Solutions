/*
 ID: RaresC
 LANG: C++
 TASK: sprime
 */

#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;

int A;
int primes[6] = {2, 5, 1, 3, 7, 9};
int ans;

ofstream fout ("sprime.out");

bool is_prime(long n) {
    if (n == 2) return true;
    
    if (n % 2 == 0) return false;
    
    for (int i= 3; i*i <= n; i++)
        if (n % i == 0) return false;
    
    return true;
}

void solve(int cur, int len) {
    
    if (len == A-1) {
        fout << cur << "\n";
        return;
    }
    
    cur *= 10;
    
    if (is_prime(cur+1))
        solve(cur+1, len+1);
    if (is_prime(cur+3))
        solve(cur+3, len+1);
    if (is_prime(cur+7))
        solve(cur+7, len+1);
    if (is_prime(cur+9))
        solve(cur+9, len+1);
}

int main() {
    
    ifstream fin ("sprime.in");
    
    fin >> A;
    
    solve(2, 0);
    solve(3, 0);
    solve(5, 0);
    solve(7, 0);
    
    return 0;
}
