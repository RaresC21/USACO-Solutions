
/*
 #include <iostream>
 #include <fstream>
 
using namespace std;

int N;
string necklace;

int calcBeads(int dir, int i) {
    int k, ans = 0;
    
    if (dir == 1) k = i;
    else k = i-1;
    if (k == -1) k = N-1;
    char curColor = necklace[k];
    
    while (true) {
        if (necklace[k] == curColor || necklace[k] == 'w')
            ans++;
        else if (curColor == 'w')
            curColor = necklace[k], ans++;
        else
            break;
        
        if (ans >= N) break;
        
        k+=dir;
        if (k == -1) k = N-1;
        else if (k == N) k = 0;
    }
    
    return ans;
}

int main()
{
    
    ifstream fin ("beads.in");
    ofstream fout("beads.out");
    
    fin >> N >> necklace;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (i == 28)
        {}
        int curAns = calcBeads(1, i) + calcBeads(-1, i);
        
        if (curAns > ans) ans = curAns;
        if (ans >= N) { ans = N; break; }
    }
    
    fout << ans << endl;
    
    return 0;
}*/
