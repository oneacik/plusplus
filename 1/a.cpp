#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {


    unsigned int najmniejszy_int = numeric_limits<unsigned int>::min();
    unsigned int najwiekszy_int = numeric_limits<unsigned int>::max();
    float najmniejszy_float = numeric_limits<float>::min();
    float najwiekszy_float = numeric_limits<float>::max();
    string::size_type najmniejszy_rozmiar_string = numeric_limits<std::string::size_type>::min();
    string::size_type najwiekszy_rozmiar_string = numeric_limits<std::string::size_type>::max();
    signed long long najmniejszy_signed_long_long = numeric_limits<long long>::min();
    signed long long najwiekszy_signed_long_long = numeric_limits<long long>::max();
    unsigned long long najmniejszy_unsigned_long_long = numeric_limits<unsigned long long>::min();
    unsigned long long najwiekszy_unsigned_long_long = numeric_limits<unsigned long long>::max();

    cout << "Najmniejsza wartosc dla unsigned int:              " << najmniejszy_int << endl;
    cout << "Najwieksza wartosc dla unsigned int:               " << najwiekszy_int << endl;
    cout << "Najmniejsza wartosc dla float:                     " << najmniejszy_float << endl;
    cout << "Najwieksza wartosc dla float:                      " << najwiekszy_float << endl;
    cout << "Najmniejszy rozmiar string:                        " << najwiekszy_rozmiar_string << endl;
    cout << "Najwiekszy rozmiar string:                         " << najwiekszy_rozmiar_string << endl;
    cout << "Najmniejsza wartosc dla signed long long:          " << najmniejszy_signed_long_long << endl;
    cout << "Najwieksza wartosc dla signed long long:           " << najwiekszy_signed_long_long << endl;
    cout << "Najmniejsza wartosc dla unsigned long long:        " << najmniejszy_unsigned_long_long << endl;
    cout << "Najwieksza wartosc dla unsigned long long:         " << najwiekszy_unsigned_long_long << endl;

    return 0;
}
