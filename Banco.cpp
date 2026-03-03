#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    string direccion;

public:
    Persona() : nombre(""), edad(0), direccion("") {}

    Persona(string nombre, int edad, string direccion)
        : nombre(nombre), edad(edad), direccion(direccion) {
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Direccion: " << direccion << endl;
    }
};

class Cliente : public Persona {
private:
    string numeroCuenta;
    double saldo;
    string tipoCuenta;

public:
    void registrarCliente(string nombre, int edad, string direccion, string numeroCuenta, double saldo, string tipoCuenta) {
        this->nombre = nombre;
        this->edad = edad;
        this->direccion = direccion;
        this->numeroCuenta = numeroCuenta;
        this->saldo = saldo;
        this->tipoCuenta = tipoCuenta;
    }

    void mostrarDatosCliente() {
        mostrarDatos();
        cout << "Numero de cuenta: " << numeroCuenta << endl;
        cout << "Saldo: $" << saldo << endl;
        cout << "Tipo de cuenta: " << tipoCuenta << endl;
    }
};

class Empleado : public Persona {
private:
    string puesto;
    double salario;
    string horario;

public:
    void registrarEmpleado(string nombre, int edad, string direccion, string puesto, double salario, string horario) {
        this->nombre = nombre;
        this->edad = edad;
        this->direccion = direccion;
        this->puesto = puesto;
        this->salario = salario;
        this->horario = horario;
    }

    void mostrarDatosEmpleado() {
        mostrarDatos();
        cout << "Puesto: " << puesto << endl;
        cout << "Salario: $" << salario << endl;
        cout << "Horario: " << horario << endl;
    }
};

int main() {
    Cliente cliente1;
    Empleado empleado1;

    cliente1.registrarCliente("Carlos Carrillo", 32, "Calle Joe Louis 825", "123456789", 15000.75, "Ahorro");
    cout << "Datos del cliente registrado:\n";
    cliente1.mostrarDatosCliente();

    cout << "\n";

    empleado1.registrarEmpleado("Jeniffer", 40, "Av. Miguel Aleman 456", "Cajero", 18000.50, "Matutino");
    cout << "Datos del empleado registrado:\n";
    empleado1.mostrarDatosEmpleado();

    return 0;
}