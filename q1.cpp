#include<bits/stdc++.h>
using namespace std;

void findDer(vector<int> c) {

    int mul=5;
    for(int i=0; i<c.size(); i++) {
        string el = "";
        int newc = ((mul)*c[i]);
        if(i == c.size()-1) {
            cout << newc << "x^" << (mul-1);
        }
        else{
            cout << newc << "x^" << (mul-1) << " + ";
        }

        mul--;
    }

}

int main() {

    int n;
    cout << "enter coefficients (upto 5 degree): ";
    vector<int> c;
    for(int i=0; i<5; i++) {
        int a;
        cin >> a;
        c.push_back(a);
    }

    findDer(c);


    return 0;
}

