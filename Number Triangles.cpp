/*
 ID: RaresC
 LANG: C++
 TASK: numtri
 */
/*

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

#define MAX 1000
int N;
int tree[MAX][MAX];

int main() {
    
    ifstream fin ("numtri.in");
    ofstream fout ("numtri.out");
    
    fin >> N;
    for (int i = 0; i < N; i++)
        for (int k = 0; k <= i; k++)
            fin >> tree[i][k];
    
    // start from bottom, and run greedy from each number at the bottom of the tree;
    for (int i = N-1; i > 0; i--) {
        for (int k = 0; k < N-1; k++) {
            if (tree[i][k] > tree[i][k+1]) tree[i-1][k] += tree[i][k];
            else tree[i-1][k] += tree[i][k+1];
        }
    }
    
    fout << tree[0][0] << "\n";
    
    return 0;
}
*/
