/*
 #include <iostream>
 #include <fstream>
 
using namespace std;

#define MAX 10
string names[MAX];
string friends[MAX][MAX];
int money[MAX];
int N;

int findName(string n) {
    int j;
    for (j = 0; j < N; j++)
        if (names[j] == n)
            break;
    
    return j;
}

int main()
{
    
    ifstream fin ("gift1.in");
    ofstream fout("gift1.out");
    
    fin >> N;
    for (int i = 0; i < N; i++) fin >> names[i];
    
    for (int i = 0; i < N; i++) {
        string nm; int curMoney; fin >> nm >> curMoney;
        int nfriend; fin >> nfriend;
        int ind = findName(nm);
        
        // 'lose' the money given to friends and receive the leftover after dividing it evenly.
        money[ind] -= curMoney; if (nfriend) money[ind] += curMoney % nfriend;
        
        // give each friend their share of the money.
        for (int k = 0; k < nfriend; k++) {
            fin >> nm;
            ind = findName(nm);
            money[ind] += curMoney/nfriend;
        }
    }
    
    for (int i = 0; i < N; i++)
        fout << names[i] << " " << money[i] << endl;
    
    return 0;
}*/