#include <iostream>

using namespace std;
/// las autoridades de la carrera tup de la utn estan realizando un analisis de los cursos virtuales de las distintias materias
///por cada una de las 20 materias de la carrera tiene la siguiente informacion
/// -numero de materia (entre 1 y 20) NOMBRE, CANTIDAD DE ALUMNOS INSCRIPTOS, CANTIDAD DE PROFESORES
/// ADEMAS POR CADA INGRESO DE LOS ESTUDIANTES AL AULA VIRTUAL SE REGISTRA LO SIGUIENTE
/// -LEGAJO,FECJA DE ACCESP (DIA, MES),NUMERO DE LA MATERIA A LA QUE INGRESO, CANTIDAD DE HORAS (REAL)
/// EL FIN DE LOS DATOS SE INDICA CON UN NUMERO DE LEGAJO IGUAL A 0
/// A) LAS MATERIAS QUE NO TUVIERON ACCESO DE ALUMNOS NUNCA
/// B) LA MATERIA QUE MAS CANTIDAD DE HORAS REGISTRO DE ACCESO DE ALUMNOS
/// C) POR CADA MATERIA Y DIA DE MARZO, LA CANTIDAD DE ACCESOS DE ALUMNOS A LAS AULAS VIRTUALES


   int main()
{

    while (true){
    system("cls");
    cout<<"MENU PRINCIPAL"<<endl;
    cout<<"--------------"<<endl;
    cout<<"1) CARGAR INFORMACION"<<endl;
    cout<<"2) PUNTO A"<<endl;
    cout<<"3) PUNTO B"<<endl;
    cout<<"4) PUNTO C"<<endl;
    cout<<"5) PUNTO D"<<endl;
    cout<<"--------------"<<endl;
    cout<<"0) SALIR"<<endl;
    cout<<"OPCION: ";
    cin>>opc;
    system("cls");

    switch(opc){
        case 1: cargarInformacion();
        break;

        case 2: PuntoA();
        break;

        case 3: PuntoB();
        break;

        case 4: PuntoC();
        break;

        case 0: return 0;
        break;

        default: cout << "VALOR INCORRECTO" << endl;
        break;
    }
        cout << endl << endl;
        system("pause");
    }
        return 0;

}

