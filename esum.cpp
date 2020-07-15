#include<iostream>


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

int main(int argc, char *argv[]) {

    int sum = 0;

    if (argc == 1) {
        cout << "Please pass some arguments to be summed" << endl;
        cout << "esum <arg1> <arg2> ... <argn>" << endl;
        return 0;
    }

    for (int i = 1; i < argc; i++ ) {
        string s = argv[i];
        try {
            sum += str2int(s);
        }
        catch(const char* msg) {
            continue;
        }
        
    }

    cout << "Sum is " << sum << endl;
    return 0;
}


