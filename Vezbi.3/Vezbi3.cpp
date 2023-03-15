#include <bits/stdc++.h>
#include <string>
using namespace std;


enum Mesec {
    Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

std::string sezona(int mesec) {
    switch(mesec) {
        case 12:
        case 1:
        case 2:
           return "Zima";
        case 3:
        case 4:
        case 5:
           return "Prolet";
        case 6:
        case 7:
        case 8:
           return "Leto";
        case 9:
        case 10:
        case 11:
           return "Esen";
        default:
             return "Mesecot ne postoi";
    }

}

std::string getOrdinalSuffix(int broj) {
    int Poslednacifra = broj % 10;
    int Predposlednatacifra = (broj / 10) % 10;
    if (Predposlednatacifra == 1) {
        return "ti";
    } else if (Poslednacifra == 1) {
        return "vi";
    } else if (Poslednacifra == 2) {
        return "ri";
    } else if (Poslednacifra == 3) {
        return "ti";
    } else if (Poslednacifra == 7) {
        return "mi";
    } else if (Poslednacifra == 8) {
        return "mi";
    } else {
        return "ti";
    }
}

int main() {
    std::cout<<" "<< std::endl;
    int i;
    for (i=January; i<=December; i++) {
        std::cout << i << "." << sezona(i) << " - " << ((i - 1) % 12+1)<< std::endl;
    }

    int Mesec;
    std::cout <<"Vnesi broj na mesec: ";
    std::cin>> Mesec;

    if (Mesec < 1 || Mesec > 12 ) {
        std::cout<< "Nepostoecki broj" <<std::endl;
    } else {
        std::cout<<"Mesecot "<<Mesec <<" e vo " << sezona(Mesec) <<" i e " << Mesec << getOrdinalSuffix(Mesec) << " mesec vo godinata." << std::endl;
    }
    cout<<"Natalija Stefanvska";
    return 0;
}
//Natalija Stefanovska
