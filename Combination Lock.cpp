/*
 ID: RaresC
 LANG: C++
 TASK: combo
 */

/*
 #include <iostream>
 #include <fstream>
 
 using namespace std;

int N, farmer[3], master[3];

bool comp(int a, int b) {
    
    if (abs(a-b) <= 2) return true;
    if (abs(a-b) >= N-2) return true;
    return false;
}

bool close (int i, int k, int j) {
    if (comp(i, farmer[0]) && comp(k, farmer[1]) && comp(j, farmer[2])) return true;
    if (comp(i, master[0]) && comp(k, master[1]) && comp(j, master[2])) return true;
    return false;
}

int main() {
    
    ifstream fin ("combo.in");
    ofstream fout ("combo.out");
    
    fin >> N;
    for (int i = 0; i < 3; i++) fin >> farmer[i];
    for (int i = 0; i < 3; i++) fin >> master[i];
    
    int ans = 0;
    for (int i = 1; i <= N; i++)
        for (int k = 1; k <= N; k++)
            for (int j = 1; j <= N; j++)
                if (close(i,k,j))
                    ans++;
    
    fout << ans << endl;
}*/