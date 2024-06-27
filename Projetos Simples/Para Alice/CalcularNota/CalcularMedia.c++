#include <bits/stdc++.h>
using namespace std;

int main(){
    float pro, form, media = 0;
    vector<float> notas(4,-1);

    for (int i = 0; i < 4; i++){
        system("cls");
        cout << "          +--------------------------------------+" << endl;
        cout << "          | Ola Alice, bora calcular sua notinha |" << endl;
        cout << "          +--------------------------------------+" << endl;
        cout << "          +--------------------------------------+" << endl;
        cout << "                       N1 : "<<(notas[0] < 0 ? "Nao informado" : to_string(notas[0])) << endl;
        cout << "                       N2 : "<<(notas[1] < 0 ? "Nao informado" : to_string(notas[1])) << endl;
        cout << "                       N3 : "<<(notas[2] < 0 ? "Nao informado" : to_string(notas[2])) << endl;
        cout << "                       N4 : "<<(notas[3] < 0 ? "Nao informado" : to_string(notas[3])) << endl;
        cout << "                    Media : "<<media<<"            " << endl;
        cout << "          +--------------------------------------+" << endl;


        cout << "\n\n            +--------------------------------+" << endl;
        cout << "            |          Calculando N"<<i+1<<"         |" << endl;
        cout << "            +--------------------------------+" << endl;
        cout << "            Valor Processual>> ";
        cin >> pro;
        cout << "            Valor Formal>> ";
        cin >> form;
        notas[i] = pro*0.2 + form*0.8;
        media = notas[0];
        for (int u = 1; u <= i; u++){
            media += notas[u]; 
        }
        media = media/(i+1);
    }

    system("cls");
    cout << "          +--------------------------------------+" << endl;
    cout << "          | Ola Alice, bora calcular sua notinha |" << endl;
    cout << "          +--------------------------------------+" << endl;
    cout << "          +--------------------------------------+" << endl;
    cout << "                       N1 : "<<(notas[0] < 0 ? "Nao informado" : to_string(notas[0])) << endl;
    cout << "                       N2 : "<<(notas[1] < 0 ? "Nao informado" : to_string(notas[1])) << endl;
    cout << "                       N3 : "<<(notas[2] < 0 ? "Nao informado" : to_string(notas[2])) << endl;
    cout << "                       N4 : "<<(notas[3] < 0 ? "Nao informado" : to_string(notas[3])) << endl;
    cout << "                    Media : "<<media<<"            " << endl;
    cout << "          +--------------------------------------+" << endl;
}
