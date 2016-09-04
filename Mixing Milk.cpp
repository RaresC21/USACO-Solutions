/*
 ID: RaresC
 LANG: C++
 TASK: milk
 */

/*
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


int N, M;

#define MAX 5000
struct Farmer {
    int price;
    int units;
} farmer[MAX];

bool cmp (Farmer const& f1, Farmer const& f2) {
    return f1.price < f2.price;
}

int main() {
    
    ifstream fin ("milk.in");
    ofstream fout ("milk.out");
    
    fin >> N >> M;
    for (int i = 0; i < M; i++)
        fin >> farmer[i].price >> farmer[i].units;
    if (M!=0) sort(farmer, farmer+M, cmp);
    
    int ind = 0;
    int cur = 0;
    long ans = 0;
    while (ind < M) {
        if (cur + farmer[ind].units <= N) {
            cur += farmer[ind].units;
            ans += farmer[ind].price * farmer[ind].units;
        }
        else {
            int need = N - cur;
            ans += farmer[ind].price * need;
            break;
        }
        ind++;
    }
    
    fout << ans << "\n";
    
    return 0;
}
*/
