#include <iostream>
using namespace std;
 int main()
    {
        int NC;
        double NF,NR,NK;

        cout << "--------------------" << endl;
        cout << "Suhu (dalam C)= ";
        cin >> NC;
        cout << "--------------------" << endl;

        NF=(1.8*NC)+32;
        NR=0.8*NC;
        NK=NC+273;

        cout << "Suhu (dalam F)= " << NF << endl;
        cout << "Suhu (dalam R)= " << NR << endl;
        cout << "Suhu (dalam K)= " << NK << endl;

  return 0;
    }
