#include <iostream>
#include <string>
using namespace std;
string nombre, apellido, curso, materia;
float nota1, nota2, nota3;
void Inicializar() {
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, nombre);
    cout << "Ingrese el apellido del alumno: ";
    getline(cin, apellido);
    cout << "Ingrese el curso del alumno: ";
    getline(cin, curso);
    cout << "Ingrese la materia: ";
    getline(cin, materia);
    cout << "Ingrese la nota del primer trimestre: ";
    cin >> nota1;
    cout << "Ingrese la nota del segundo trimestre: ";
    cin >> nota2;
    cout << "Ingrese la nota del tercer trimestre: ";
    cin >> nota3;
}
float calcularPromedio() {
    return (nota1 + nota2 + nota3) / 3.0;
}
string calcularCondicion() {
    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7) {
        return "Promociona";
    } else if (nota1 >= 5 && nota2 >= 5 && nota3 >= 5) {
        return "Puede recuperar trimestres";
    } else {
        return "Reprobado";
    }
}
void Imprimir() {
    float promedio = calcularPromedio();
    string condicion = calcularCondicion();
    cout << "Alumno: " << nombre << " " << apellido << endl;
    cout << "Curso: " << curso << endl;
    cout << "Materia: " << materia << endl;
    cout << "Promedio final: " << promedio << endl;
    cout << "Condicion: " << condicion << endl;
}
int main() {
    Inicializar();
    Imprimir();
    return 0;
}
