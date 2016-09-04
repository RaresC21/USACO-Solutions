

#include <iostream>
#include <fstream>
 
using namespace std;

#define MAX 1000
int N;
int height[MAX];

int main() {
    
    ifstream fin ("skidesign.in");
    ofstream fout ("skidesign.out");
    
    fin >> N;
    for (int i = 0; i < N; i++) fin >> height[i];
    
    int ans = 100000000;
    for (int i = 0; i < 83; i++) {
        int total = 0;
        for (int h = 0; h < N; h++) {
            if (height[h] < i) total += (i-height[h])*(i-height[h]);
            else if (height[h] - 17 >= i) total += (height[h]-i-17)*(height[h]-i-17);
        }
        if (total < ans) ans = total;
    }
    
    fout << ans << endl;
    
    return 0;
}
