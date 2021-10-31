#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    double atlag = 0.00;
    double szam = 1.00;
    double szamjegyek = 0.00;
    double osszeg = 0.00;


    while (szam != 0) {
        cin >> szam;
        szamjegyek++;
        osszeg = osszeg + szam;

    }
    szamjegyek = szamjegyek - 1;
    atlag = osszeg/szamjegyek;
    cout << fixed << setprecision(2) << atlag;
    return 0;
}

/*
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int eredmeny;

    int osszeg = 0;
    int darab = 0;

    while (cin >> eredmeny) {
        if (eredmeny == 0) {
            break;
        }

        osszeg += eredmeny;
        darab++;
    }

    cout << setprecision(2) << fixed << (double) osszeg / darab;

    return 0;
 */
