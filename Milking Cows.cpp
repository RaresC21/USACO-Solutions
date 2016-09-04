
/*
 
 #include <iostream>
 #include <fstream>
 #include <algorithm>
 
using namespace std;

#define MAX 5001
int start[MAX], finish[MAX];
int N;

int main() {
    
    ifstream fin ("milk2.in");
    ofstream fout ("milk2.out");
    
    fin >> N;
    for (int i = 0; i < N; i++) fin >> start[i], fin >> finish[i];
    sort (start, start+N);
    sort (finish, finish+N);
    
    int s=0, f=0, ncows=0;
    int nomilk=0, longmilk=0, startMilk=start[0];
    while (s < N || f < N) {
        // if next 'special' time, a cow start to be milked
        if (s < N && start[s] <= finish[f]) {
            ncows++;
            s++;
            continue;
        }
        // or if a cow stops to be milked
        if ((f < N && finish[f] < start[s]) || s >= N) {
            ncows--;
            // update longest milking time if necessary
            if (finish[f] - startMilk > longmilk) longmilk = finish[f] - startMilk;
            if (ncows == 0)
            {
                startMilk = start[s];
                if (start[s] - finish[f] > nomilk) nomilk = start[s] - finish[f];
            }
            f++;
            continue;
        }
    }
    if (nomilk < 0) nomilk = 0;
    fout << longmilk << " " << nomilk << endl;
    
    return 0;
}*/