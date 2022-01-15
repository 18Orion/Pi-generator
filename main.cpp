#include <iostream>
#include "include/montecarlo.hh"
#include <iomanip>

using namespace std;

int main(){
    //montecarlo = new montecarlo();
    int lado, diametro, iteraciones;
    cout<<"Escriba el lado: ";
    cin>>lado;
    cout<<"Esciba el diametro: ";
    cin>>diametro;
    cout<<"Escribe el número de puntos: ";
    cin>>iteraciones;
    montecarlo * mn=new montecarlo();
    mn->generatePlatform(lado,diametro);
    mn->performSimulation(iteraciones);
    cout<<setprecision(100)<<mn->results.distribution;
    delete mn;
}