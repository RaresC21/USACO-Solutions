
 #include <iostream>
 #include <fstream>
 #include <map>
 
 using namespace std;

 
map<char,char> convert;
string digits;

int main() {
    
    ifstream fin ("namenum.in");
    ifstream dict ("dict.txt");
    ofstream fout ("namenum.out");
    
    convert['A'] = convert['B'] = convert['C'] = '2';
    convert['D'] = convert['E'] = convert['F'] = '3';
    convert['G'] = convert['H'] = convert['I'] = '4';
    convert['J'] = convert['K'] = convert['L'] = '5';
    convert['M'] = convert['N'] = convert['O'] = '6';
    convert['P'] = convert['R'] = convert['S'] = '7';
    convert['T'] = convert['U'] = convert['V'] = '8';
    convert['W'] = convert['X'] = convert['Y'] = '9';
    
    fin >> digits;
    
    string ans[1000]; int p = 0;
    string name; dict >> name;
    while (name != "ZYTA") {
        // different length names cannot give the same name.
        if (digits.length() != name.length()) {
            dict >> name; continue;
        }
        
        string num = "";
        for (int i = 0; i < name.length(); i++) {
            num += convert[name[i]];
            if (num[i] != digits[i]) break;
        }
        
        if (num == digits)
            ans[p] = name, p++;
        
        dict >> name;
    }
    
    if (p == 0) fout << "NONE" << endl;
    else {
        for (int i = 0; i < p; i++)
            fout << ans[i] << endl;
    }
}
