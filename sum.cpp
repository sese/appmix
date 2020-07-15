#include<iostream>
#include<cstring>

using namespace std;

int str2int(string str) {
    int result = 0;

    for(int i = 0; i < str.length(); i++) {
        short int v = str[i] - '0';
        if (v < 0 || v > 9) {
            throw "Invalid char at number ";
        }
        result = result * 10 + v;
    }
    return result;
}

int main() {

    string v;
    int sum = 0;

    while (cin.peek() != '\n') {      

        cin >> v;
        try {
            int inumber = str2int(v);
            sum += inumber;
        }
        catch(const char* msg) {
            cout << msg << v << endl;
        }
    }

    cout << "Suma este "  << sum << endl;

    return 0;
}


