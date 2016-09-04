
#include <iostream>
#include <fstream>
 
using namespace std;

int hasher (string str) {
    int n = 1;
    for (int i = 0; i < str.length(); i++)
        n *= (int)(str[i]-'A')+1;
    
    return n;
}

int main()
{
    
    ifstream fin ("ride.in");
    ofstream fout("ride.out");
    
    string comet;
    string group;
    fin >> comet >> group;
    
    if (hasher(comet) % 47 == hasher(group) % 47)
        fout << "GO" << endl;
    else
        fout << "STAY" << endl;
    
    return 0;
}
