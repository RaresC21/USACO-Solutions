
/*
 ID: RaresC
 LANG: C++
 TASK: wormhole
 */


#include <iostream>
#include <fstream>

using namespace std;
#define MAX 12
int N, ans;
int X[MAX+1], Y[MAX+1];
int next_on_right[MAX+1];
int partners[MAX+1];

bool is_loop() {
    
    // start the cow in each possilbe w.
    for (int i = 1; i <= N; i++) {
        int cur = i;
        // if after 12 moves the cow is still in a loop it always will be,
        for (int step = 0; step <= 12; step++)
            cur = next_on_right[partners[cur]];
        if (cur != 0) return true;
    }
    
    return false;
}
void solve() {
    
    // find first w without a partner. call it i;
    int i;
    for (i = 1; i <= N; i++)
        if (partners[i] == 0) break;
    
    // if they all have partners already
    if (i == N+1){
        if (is_loop()) {ans++; return;}
        else return;
    }
    
    for (int k = i+1; k <= N; k++)
        if (partners[k] == 0 && i != k) {
            partners[i] = k;
            partners[k] = i;
            
            solve();
            
            partners[k] = partners[i] = 0;
        }
    
}

int main() {
    
    ifstream fin ("wormhole.in");
    ofstream fout ("wormhole.out");
    
    int i, k;
    fin >> N;
    
    for (i = 1; i <= N; i++)
        fin >> X[i] >> Y[i];
    
    // find next_on+right wormhole.
    for (i = 1; i <= N; i++)
        for (k = 1; k <= N; k++)
            if (X[k] > X[i] && Y[i] == Y[k])
                if (next_on_right[i] == 0 || X[next_on_right[i]] > X[k])
                    next_on_right[i] = k;
    
    solve();
    fout << ans << endl;
    
    return 0;
}
