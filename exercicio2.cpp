#include <iostream>

using namespace std;

int main() {

    int altura1, altura2, altura3;

    cout <<"por favor, insira as alturas dos 3 professores, em cm:  " << endl;
    cin >> altura1;
    cin >> altura2;
    cin >> altura3;

    if (altura1<150 || altura1>220 || altura2<150 || altura2>220 || altura3<150 || altura3>220) {
        cout << "As alturas que voce inseriu sao invalidas! precisa ser de 150cm a 220cm. Reinicie e tente novamente.";
    }
    else if (altura1>altura2 && altura1<altura3) {
        cout <<"A altura do professor Gatti eh " << altura1 << " cm." << endl;
    } 
    else if ( altura2>altura1 && altura2<altura3) {
        cout << "A altura do professor Gatti eh " << altura2 << " cm." << endl;
    } 
    else {
        cout << "A altura do professor Gatti eh " << altura3 << " cm." << endl;
    }

}