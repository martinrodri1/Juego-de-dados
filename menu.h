#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "funciones.h"
void JuegoJ1 (int punTotal, string &nombreJ1, int menosRondas){
    int v[6], rondas=0, lanzamiento, vPuntos[3]{}, x, m;
    const int TAM = 6;

    while (punTotal<100){
    system("cls");
    rondas++;
    lanzamiento = 1;
    ponerCero (vPuntos, TAM);
    for (x=0; x<3; x++){
    system("cls");
    cout << "TURNO DE " << nombreJ1 << " | RONDA N " << rondas << " | PUNTAJE TOTAL: " << punTotal << " PUNTOS" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "MAXIMO PUNTAJE DE LA RONDA: " << vPuntos[m] << " PUNTOS" << endl;
    cout << "LANZAMIENTO N " << lanzamiento++ << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "PRESIONE UNA TECLA PARA LANZAR" << endl;
    system("pause");
    cargarAleatorio (v,TAM,6);
    mostrarVector (v, TAM);
    vPuntos[x] = resultadoCombinaciones (v, TAM);
    if (vPuntos[x]==0){
        punTotal = 0;
    }
    if (vPuntos[x]==100){
        punTotal = vPuntos[x];
        InterfazEscalera (rondas, punTotal, nombreJ1);
        entreTurnos (rondas, punTotal, nombreJ1);
        return;
    }
    m = maximoVector (vPuntos, 3);
    cout << endl << endl << "------------ |  CONSEGUISTE: " << vPuntos[x] << " PUNTOS  | -------------" << endl;
    system("pause");
    }
    punTotal += vPuntos[m];
    system("cls");
    entreTurnos (rondas, punTotal, nombreJ1);
    system("pause");
    }
}

#endif // MENU_H_INCLUDED
