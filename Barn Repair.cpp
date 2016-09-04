/*
 ID: RaresC
 LANG: C++
 TASK: barn1
 */

/*
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

#define MAX 200
int Boards, StallN, CowN;
int holes[MAX], h;
bool stalls[MAX*10];

int main() {
    
    ifstream fin ("barn1.in");
    ofstream fout ("barn1.out");
    
    fin >> Boards >> StallN >>CowN;
    for (int i = 0; i < CowN; i++) {
        int n; fin >> n;
        stalls[n] = true;
    }
    
    // find how much we need using just one board.
    int start, finish;
    for (start = 1; start <= StallN; start++)
        if (stalls[start])
            break;
    for (finish = StallN; finish > 0; finish--)
        if (stalls[finish]) break;
    
    for (int i = start; i < finish; i++) {
        while (stalls[i] == false) {
            holes[h] ++;
            i++;
        }
        h++;
    }
    
    sort (holes, holes+h);
    
    int empty = 0;
    int hole_num = h-Boards;
    if (hole_num<0) hole_num = 0;
    for (int i = h-1; i > hole_num; i--)
        empty += holes[i];
    
    fout << finish - empty - start+1 << "\n";
    
    return 0;
}
*/