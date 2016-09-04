/*
 ID: RaresC
 LANG: C++
 TASK: ariprog
 */

/*
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

#define MAX 125000
int length, M;
bool is_bisquare[MAX];
int list[MAX];

struct Number {
    int start, diff;
} num[MAX];

bool cmp (Number const& n1, Number const& n2) {
    if (n1.diff < n2.diff) return true;
    else if (n1.start < n2.start) return true;
    
    return false;
}

int main() {
    
    ifstream fin ("ariprog.in");
    ofstream fout ("ariprog.out");
    
    fin >> length >> M;
    // premake bisquares
    int c = 0;
    for (int i = 0; i <= M; i++)
        for (int k = i; k <= M; k++) {
            int n = i*i + k*k;
            if (!is_bisquare[n]) list[c] = n, c++;
            else continue;
            is_bisquare[n] = true;
        }
    sort(list, list+c);
    
    int amnt = 0;
    for (int i = 0; i < c; i++)
        for (int k = i+1; k < c; k++) {
            int diff = list[k] - list[i];
            int b = 1;
            while (list[i] + b*diff < MAX && is_bisquare[list[i] + b*diff] && b < length)
                b++;
            
            if (b == length && diff > 0)
            { num[amnt].diff = diff; num[amnt].start = list[i]; amnt++;}
        }
    if (amnt == 0) { fout << "NONE\n"; return 0; }
    
    sort(num, num + amnt, cmp);
    for (int i = 0; i < amnt; i++)
        fout << num[i].start << " " << num[i].diff << "\n";
    
    return 0;
} */