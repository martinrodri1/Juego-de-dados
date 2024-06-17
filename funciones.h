#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void CargarNombreJ1 (string &nombre);
void CargarNombreJ2 (string &nombre);
void cargarAleatorio(int v[], int tam, int limite);
void mostrarVector(int v[], int tam);
int sumarVector(int v[], int tam );
int maximoVector(int v[], int tam);
void ponerCero(int v[], int tam);
void entreTurnos (int ron, int punTotal, string &nombreJ1);
void InterfazEscalera (int ronda, int punTotal, string &nombreJ1);

void CargarNombreJ1 (string &nombre){
    cout << "Nombre del jugador 1: ";
    cin.ignore();
    getline(cin, nombre);
    if (nombre!=""){
        return;
    }
    else {
        cout << "ERROR AL CARGAR EL NOMBRE" << endl;
        system("pause");
        return;
    }
}
void CargarNombreJ2 (string &nombre){
    cout << "Nombre del jugador 2: ";
    getline(cin, nombre);
      if (nombre!=""){
        return;
    }
    else {
        cout << "ERROR AL CARGAR EL NOMBRE" << endl;
        system("pause");
        return;
    }
}

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}
void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
}

int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}

int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}

void entreTurnos (int ron, int punTotal, string &nombreJ1){
    if (punTotal<100){
    cout << "RONDA N " << ron+1 << endl;
    cout << "PROXIMO TURNO: " << nombreJ1 << endl;
    cout << "PUNTAJE: " << punTotal << endl;
    return;
    }
    else {
        cout << "­­­ LLEGASTE A 100 PUNTOS!!! EN: " << ron << " RONDAS" << endl;
        cout << "FELICIDADES" << endl << "FIN DEL JUEGO" << endl;
        return;
    }

}
int resultadoCombinaciones (int v[], int tam){
    int x, y, contGeneral=0, cont, valor;
    for (x=0; x<tam; x++){
        cont = 0;
        for (y=0; y<tam; y++){
            if (x+1==v[y]){
                cont++;
            }
        }
        if (cont==6){
            if (x+1!=6){
                return valor = v[y]*10;
            }
            else {
                return valor = 0;
            }
        }
        else if (cont==1){
            contGeneral++;
            if (contGeneral==6){
                return valor = 100;
            }
            else {
                valor = sumarVector(v, tam);

            }
        }
        else {
            valor = sumarVector (v, tam);
        }
    }


    return valor;
}
void InterfazEscalera (int ronda, int punTotal, string &nombreJ1){
        cout << endl << endl << "----------- |   CONSEGUISTE UNA ESCALERA  | -----------"<< endl;
        cout << " -------------- |  GANASTE EL JUEGO  | --------------- " << endl;
        system("pause");
        system("cls");
        return;

}
#endif // FUNCIONES_H_INCLUDED
