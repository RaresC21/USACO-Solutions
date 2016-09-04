/*
 ID: RaresC
 LANG: C++
 TASK: palsquare
 */
/*
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int Base;

bool is_palindrome(string s) {
    
    unsigned long l = s.length();
    for (int i = 0; i < l; i++)
        if (s[i] != s[l-i-1]) return false;
    
    return true;
}

string base_convert(int n) {
    
    string digits = "0123456789ABCDEFGHIJ";
    
    string ans;
    while (n > 0) {
        int ind = n % Base;
        ans = digits[ind] + ans;
        n /= Base;
    }
    
    return ans;
}

int main() {
    
    ifstream fin ("palsquare.in");
    ofstream fout ("palsquare.out");
    
    fin >> Base;
    for (int i = 1; i < 300; i++) {
        string num = base_convert(i*i);
        if (is_palindrome(num))
            fout << base_convert(i) << " " << num << '\n';
    }
    
    return 0;
}*/