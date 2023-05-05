/*
    system (color «color de fondo» «color de letra»);
    0 = Negro
    1= Azul
    2= Verde
    3= Aguamarina
    4= Rojo
    5= Púrpura
    6= Amarillo
    7= Blanco
    8= Gris
    9= Azul Claro
    A= Verde Claro
    B= Aguamarina Claro
    C= Rojo Claro
    D= Púrpura Claro
    E= Amarillo Claro
    F= Blanco Brillante
*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h> //system color
#include <fstream>
#include <iomanip> //setw
#include "PirataNacho.h"
#define color SetConsoleTextAttribute

using namespace std;
// structs
struct alumnos{
	string nombres,comentario, sexo;
    int edad, codigo;
    float nota1,nota2,nota3;
}DPLzzz[15], prograGod[15],Calculo[15], Biologia[15];
int a = 8, b = 8, c = 8, d = 8;

struct profesores{
	string nombres, sexo, correo,codigoPro;
    int edad;
}DPLpro[5], PROGRApro[5],CALCULOpro[5], biologialbth[5];
int e=1,f=1,g=1,h=1;


//algunos datos
void DB(){
    DPLzzz[0].nombres= "Andres Mendoza Lunares"; DPLzzz[0].edad=23; DPLzzz[0].sexo="masculino"; DPLzzz[0].codigo =2014; 
    DPLzzz[0].nota1=15; DPLzzz[0].nota2=17; DPLzzz[0].nota3=19;
    DPLzzz[1].nombres= "Carolina Gutierrez Lopez"; DPLzzz[1].edad=16; DPLzzz[1].sexo="femenino"; DPLzzz[1].codigo =2022;
    DPLzzz[1].nota1=12; DPLzzz[1].nota2=15; DPLzzz[1].nota3=14;
    DPLzzz[2].nombres= "Norma Bermúdez Garriazo"; DPLzzz[2].edad=15; DPLzzz[2].sexo="femenino"; DPLzzz[2].codigo =2021;
    DPLzzz[2].nota1=16;
    DPLzzz[3].nombres= "Pedro Mantilla Gonzales"; DPLzzz[3].edad=19; DPLzzz[3].sexo="masculino"; DPLzzz[3].codigo =2018;
    DPLzzz[3].nota1=9; DPLzzz[3].nota2=19; DPLzzz[3].nota3=6;
    DPLzzz[4].nombres= "Martha Merino Castillo"; DPLzzz[4].edad=17; DPLzzz[4].sexo="masculino"; DPLzzz[4].codigo =2019;
    DPLzzz[4].nota1=11; DPLzzz[4].nota2=19; DPLzzz[4].nota3=12;
    DPLzzz[5].nombres= "Jussten Chero Quillatupa"; DPLzzz[5].edad=17; DPLzzz[5].sexo="femenino"; DPLzzz[5].codigo =2020;
    DPLzzz[5].nota1=15; DPLzzz[5].nota2=15; DPLzzz[5].nota3=14;
    DPLzzz[6].nombres= "Sofia Mendoza De la Cruz"; DPLzzz[6].edad=20; DPLzzz[6].sexo="femenino"; DPLzzz[6].codigo =2023;
    DPLzzz[6].nota1=20; DPLzzz[6].nota2=17; DPLzzz[6].nota3=18;
    DPLzzz[7].nombres= "Abraham Kingteka Canes "; DPLzzz[7].edad=21; DPLzzz[7].sexo="masculino"; DPLzzz[7].codigo =2013;
    DPLzzz[7].nota1=13; DPLzzz[7].nota2=12; DPLzzz[7].nota3=19;
}
void DB2(){
    prograGod[0].nombres="Cristhofer Julca Mendoza"; prograGod[0].edad=23; prograGod[0].sexo="masculino"; prograGod[0].codigo=2324;
    prograGod[0].nota1=20; prograGod[0].nota2=16; prograGod[0].nota3=19;
    prograGod[1].nombres="Luis Escobedo Mayanga"; prograGod[1].edad=12; prograGod[1].sexo="masculino"; prograGod[1].codigo=3434;
    prograGod[1].nota1=20; prograGod[1].nota2=16; prograGod[1].nota3=19;
    prograGod[2].nombres="Adonis Hidalgo Sanchez"; prograGod[2].edad=34; prograGod[2].sexo="masculino"; prograGod[2].codigo=3343;
    prograGod[2].nota1=20; prograGod[2].nota2=16; prograGod[2].nota3=19;
    prograGod[3].nombres="Mia Silva Guiterrez"; prograGod[3].edad=66; prograGod[3].sexo="femenino"; prograGod[3].codigo=3222;
    prograGod[3].nota1=20; prograGod[3].nota2=16; prograGod[3].nota3=19;
    prograGod[4].nombres="Joseph Guerrero Mucha"; prograGod[4].edad=34; prograGod[4].sexo="masculino"; prograGod[4].codigo=1111;
    prograGod[4].nota1=20; prograGod[4].nota2=16; prograGod[4].nota3=19;
    prograGod[5].nombres="Herberth Asencios Rojas"; prograGod[5].edad=23; prograGod[5].sexo="masculino"; prograGod[5].codigo=3383;
    prograGod[5].nota1=20; prograGod[5].nota2=16; prograGod[5].nota3=19;
    prograGod[6].nombres="Adrian Zacarias Palomino"; prograGod[6].edad=4; prograGod[6].sexo="masculino"; prograGod[6].codigo=9999;
    prograGod[6].nota1=20; prograGod[6].nota2=16; prograGod[6].nota3=19;
    prograGod[7].nombres="Jose Sernaque Salinas"; prograGod[7].edad=18; prograGod[7].sexo="masculino"; prograGod[7].codigo =2012;
    prograGod[7].nota1=14; prograGod[7].nota2=11; prograGod[7].nota3=19;
}
void DB3(){
    Calculo[0].nombres= "Gustavo Benites Ramos"; Calculo[0].edad=16; Calculo[0].sexo="masculino"; Calculo[0].codigo= 2336;
    Calculo[0].nota1= 14; Calculo[0].nota2=13; Calculo[0].nota3=18;
    Calculo[1].nombres= "Miriam Salas Romero"; Calculo[1].edad=17; Calculo[1].sexo= "femenino"; Calculo[1].codigo= 9877;
    Calculo[1].nota1=16; Calculo[1].nota2=16; Calculo[1].nota3=19;
    Calculo[2].nombres= "Enrique Rivera Palomino"; Calculo[2].edad=20; Calculo[2].sexo="masculino"; Calculo[2].codigo=5564;
    Calculo[2].nota1=18; Calculo[2].nota2=20; Calculo[2].nota3=13;
    Calculo[3].nombres= "Fernando Rojas Rojas"; Calculo[3].edad=17; Calculo[3].sexo="masculino"; Calculo[3].codigo=8543;
    Calculo[3].nota1= 17; Calculo[3].nota2=19; Calculo[3].nota3= 20;
    Calculo[4].nombres= "Liliana Paredes Tapia"; Calculo[4].edad= 19; Calculo[4].sexo="femenino"; Calculo[4].codigo=6231;
    Calculo[4].nota1=15; Calculo[4].nota2= 16; Calculo[4].nota3=19;
    Calculo[5].nombres= "Nayely Mendoza Castillo"; Calculo[5].edad=19; Calculo[5].sexo="femenino"; Calculo[5].codigo=1258;
    Calculo[5].nota1=12; Calculo[5].nota2=11; Calculo[5].nota3=16;
    Calculo[6].nombres= "Pedro Castillo Terrones"; Calculo[6].edad=22; Calculo[6].sexo="masculino"; Calculo[6].codigo= 7496;
    Calculo[6].nota1= 19; Calculo[6].nota2=15; Calculo[6].nota3=11;
    Calculo[7].nombres= "Anibal Torres Tineo"; Calculo[7].edad=21; Calculo[7].sexo="masculino"; Calculo[7].codigo=5419;
    Calculo[7].nota1=17; Calculo[7].nota2=19; Calculo[7].nota3=13;
}
void DB4(){
    Biologia[0].nombres=" Eder Tapia Guerra"; Biologia[0].edad=19; Biologia[0].sexo="masculino"; Biologia[0].codigo=3678;
    Biologia[0].nota1=16; Biologia[0].nota2=11; Biologia[0].nota3=19;
    Biologia[1].nombres="Matias Aguirre Pardave"; Biologia[1].edad=20; Biologia[1].sexo="masculino"; Biologia[1].codigo=6382;
    Biologia[1].nota1=14; Biologia[1].nota2=17; Biologia[1].nota3=20;
    Biologia[2].nombres= "Juan Silva Martinez"; Biologia[2].edad=22; Biologia[2].sexo="masculino"; Biologia[2].codigo=1244;
    Biologia[2].nota1=11; Biologia[2].nota2=18; Biologia[2].nota3=13;
    Biologia[3].nombres="Maria Garcia Perez"; Biologia[3].edad=18; Biologia[3].sexo="femenino"; Biologia[3].codigo=8756;
    Biologia[3].nota1=12; Biologia[3].nota2=19; Biologia[3].nota3=20;
    Biologia[4].nombres= "Jazmin Martinez Sernaque"; Biologia[4].edad=17; Biologia[4].sexo="femenino"; Biologia[4].codigo=1758;
    Biologia[4].nota1=18; Biologia[4].nota2=15; Biologia[4].nota3=13;
    Biologia[5].nombres="Juana Flores Flores"; Biologia[5].edad= 16; Biologia[5].sexo="femenino"; Biologia[5].codigo=9933;
    Biologia[5].nota1=19; Biologia[5].nota2=11; Biologia[5].nota3=18;
    Biologia[6].nombres= "Jose Manrique Torres"; Biologia[6].edad=19; Biologia[6].sexo="masculino"; Biologia[6].codigo=4289;
    Biologia[6].nota1=10; Biologia[6].nota2=11; Biologia[6].nota3=9;
    Biologia[7].nombres= "Francias Ramos Salinas"; Biologia[7].edad=21; Biologia[7].sexo="masculino"; Biologia[7].codigo=9253;
    Biologia[7].nota1=7; Biologia[7].nota2=12; Biologia[7].nota3=16;
}
void DBP() {
    DPLpro[0].nombres = "Lourdes Sermenio";
    DPLpro[0].sexo = "femenino";
    DPLpro[0].correo = "lourde2";
    DPLpro[0].codigoPro = "33333";

    PROGRApro[0].nombres = "Juan Tapia";
    PROGRApro[0].sexo = "masculino";
    PROGRApro[0].correo = "juan.tapia";
    PROGRApro[0].codigoPro= "99999";

    CALCULOpro[0].nombres = "Jorge Salinas";
    CALCULOpro[0].sexo = "masculino";
    CALCULOpro[0].correo = "jorge.salinas";
    CALCULOpro[0].codigoPro = "66666";

    biologialbth[0].nombres = "Papa Biologia";
    biologialbth[0].sexo = "masculino";
    biologialbth[0].correo = "comovamos";
    biologialbth[0].codigoPro = "77777";

}

//protos
int opc1, opc2;
int n;
void Cargando();//no va
void bienvenida();//ya
void Despedida();//ya
void marco();//ya
void home();
char loginPro();
void loginAl();
void alumno();
void profesor(alumnos x[], string regTt, int w, int h);
void cursoPertenece(alumnos x[], int k);//falta 
void ingresarDatos(alumnos x[], int&); //ya está creo
void matriculaProfe(profesores x[], int &z);
void modificarNombre(alumnos x[], int );//ya
void mostrarNotas(alumnos x[], int p);//ya
void registro(alumnos x[], int f, string letters);// ya (José)
void asignarNotas(alumnos x[], int);//ya
void modificarCalificacion(alumnos x[] ,int );//ya
int menu(string tittle, string opciones[], int n);//ya (Gustavo)
void imprimir(alumnos x[], int);//ya (Gustavo)
bool validar(string x){
    for(int i=0; i<x.length(); i++){
        if(!((x[i]>=65 and x[i]<=90) or (x[i]>=97 and x[i]<=122) or x[i]==46 or x[i] == 32)){ 
            gotoxy(20,30); cout << "Error, ingrese solo letras";
            PlaySound(TEXT("audios\\sololetras.wav"), NULL, SND_ALIAS);
            nacho::cls();
            return true;
        }
    }
    return false;
}
void draw(int x1, int y1, int x2, int y2)
{
    for(int i=x1; i<x2; i++){


        gotoxy(i,y1);printf("%c",250) ;
	    gotoxy(i,y2);printf("%c",250) ;

        /*
        gotoxy(i, y1);
        cout << "\304"; // linea horizontal superior
        gotoxy(i, y2);
        cout << "\304"; // linea horizontal inferior
        */

    }

    for (int i = y1; i < y2; i++)
    {
        gotoxy(x1,i);printf("%c",250) ;
	    gotoxy(x2,i);printf("%c",250) ;
        
        /*
        gotoxy(x1, i);
        cout << "\263"; // linea vertical izquierda
        gotoxy(x2, i);
        cout << "\263"; // linea vertical derecha
        
        */
    }


    gotoxy(x1,y1);printf("%c",250);
    gotoxy(x1,y2);printf("%c",250);
    gotoxy(x2,y1);printf("%c",250);
    gotoxy(x2,y2);printf("%c",250);

    /*
    gotoxy(x1, y1);
    cout << "\332";
    gotoxy(x1, y2);
    cout << "\300";
    gotoxy(x2, y1);
    cout << "\277";
    gotoxy(x2, y2);
    cout << "\331";
    */
}


int main(){
    nacho::hidecursor();
    
    DB(); DB2(); DB3(); DB4(), DBP();
    bienvenida();
    home();
    Despedida();
    getch();
}

int menu(string titulo, string option[], int n)
{
    
    system("cls");
    
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});// probando
    int selectedOption  = 1; // arriba y abajo regresa un entero

    bool repite = true; // controla el bucle
    //fondo();
    marco();
    do
    {
        //system("cls");
        //fondo();
        //nacho::setBackgroundColor(nacho::WHITE);
        system("color f2"); //blancho brillante verde
        gotoxy(49, 13 + selectedOption );
        cout << (char)175 << endl;

        // Imprime el título del menú si es que hay
        gotoxy(53, 12);
        //cout << setw(53) << right << titulo;
        cout << titulo;

        // Muestra las opciones del menú
        for (int i = 0; i < n; ++i)
        {
            gotoxy(51, 14 + i);//gotoxy(45, 14 + i);
            cout << option[i];
        }

        // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

        switch (nacho::getkey()) //switch (nacho::getkey())
        {

        case 14: // Para arriba, mi rey
            gotoxy(49, 13 + selectedOption );
            cout << " "<< endl;

            selectedOption --;

            if (selectedOption  < 1)
            {
                selectedOption  = n;
            }

            break;

        case 15:
            gotoxy(49, 13 + selectedOption );
            cout << " "<< endl;
            selectedOption ++;

            if (selectedOption  > n)
            {
                selectedOption  = 1;
            }

            break;

        case 1:
            repite = false;
            break;
        }
    } while (repite);
    return selectedOption ;//número de opc
}
/*
void Cargando(){
    system("cls");
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 15);
    cout << "\n";
	gotoxy(53,11); cout << " CARGANDO...\n";
	for(int i=0; i<=79; i++)
	{
		gotoxy(20+i,13); cout<<char(219);
		Sleep(5*1000/80);
	}
}
*/
void bienvenida(){
    system("cls");
    int matriz[29][109]= {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,1,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,0,0,1,1,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,1,1,0,0,1,1,0,0,0,0,4,4,4,4,0,4,4,4,0,4,4,4,0,4,0,0,0,4,0,4,0,0,0,4,0,4,4,4,0,4,0,0,0,4,0,4,4,4,0,4,4,4,4,0,4,4,4,4,0,0,0,0,4,4,4,0,0,0,0,0},
                        {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,4,0,4,0,0,4,0,0,4,0,0,0,4,4,0,0,4,0,4,0,0,0,4,0,4,0,0,0,4,4,0,0,4,0,0,4,0,0,0,4,0,4,0,4,0,0,4,0,0,0,0,4,0,4,0,0,0,0,0},
                        {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,4,4,4,0,0,4,0,0,4,4,4,0,4,0,4,0,4,0,4,0,0,0,4,0,4,4,4,0,4,0,4,0,4,0,0,4,0,0,0,4,0,4,0,4,0,0,4,0,0,0,0,4,4,4,0,0,0,0,0},
                        {0,0,0,0,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,2,2,2,2,0,0,0,0,2,2,2,2,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,4,0,4,0,0,4,0,0,4,0,0,0,4,0,0,4,4,0,0,4,0,4,0,0,4,0,0,0,4,0,0,4,4,0,0,4,0,0,0,4,0,4,0,4,0,0,4,0,0,0,0,4,0,4,0,0,0,0,0},
                        {0,0,0,0,0,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,0,0,0,0,4,4,4,4,0,4,4,4,0,4,4,4,0,4,0,0,0,4,0,0,0,4,0,0,0,4,4,4,0,4,0,0,0,4,0,4,4,4,0,4,4,4,4,0,4,4,4,4,0,0,0,0,4,0,4,0,0,0,0,0},
                        {0,0,0,0,0,1,1,2,2,0,0,2,2,2,2,2,2,2,2,2,2,1,1,0,0,0,0,1,1,0,0,2,2,2,2,2,2,2,2,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,0,0,3,3,3,3,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,3,3,3,3,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,3,3,3,3,3,3,3,3,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,3,3,3,3,3,3,3,3,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,0,4,4,4,0,4,4,4,4,0,4,0,0,0,4,0,4,4,4,4,0,4,4,4,4,4,0,4,4,4,0,4,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,0,0,3,3,3,3,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,3,3,3,3,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,4,0,0,4,0,0,0,0,0,4,0,4,0,0,4,0,0,0,0,0,0,4,0,0,0,4,0,0,0,4,4,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,2,2,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,0,0,4,0,0,4,4,4,4,0,0,0,4,0,0,0,4,4,4,4,0,0,0,4,0,0,0,4,4,4,0,4,0,4,0,4,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,2,2,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,1,1,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,0,0,4,0,0,0,4,0,0,0,0,0,0,4,0,0,0,4,0,0,0,4,0,0,0,4,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,2,2,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,4,4,4,0,4,4,4,4,0,0,0,4,0,0,0,4,4,4,4,0,0,0,4,0,0,0,4,4,4,0,4,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,1,1,2,2,2,2,3,3,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,1,1,1,1,1,1,1,1,1,3,3,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,1,1,0,0,2,2,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,2,2,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,2,2,2,2,2,2,1,1,1,1,2,2,2,2,2,2,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,0,0,2,2,1,1,1,1,2,2,0,0,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,2,2,1,1,1,1,2,2,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,2,2,1,1,1,1,2,2,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,1,1,1,1,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 6);
    for (int i = 0; i < 29; i++)
    {
        for (int j = 0; j < 109; j++)
        {
            if (matriz[i][j]==1 or matriz[i][j]==4)
            {
                //nacho::setColor(nacho::BLACK);
                SetConsoleTextAttribute(hConsole, 8);
                cout <<(char)219;
            }else if (matriz[i][j]==2)
            {
                SetConsoleTextAttribute(hConsole, 7);
                cout <<(char)219;
            }else if (matriz[i][j]==3){
                SetConsoleTextAttribute(hConsole, 12);
                cout <<(char)219;
            }else if(matriz[i][j]==0){
                SetConsoleTextAttribute(hConsole, 15);
                cout <<(char)219;
            }else {
                cout << " ";
            }
        }
        cout<<endl;
    }
    
    //nacho::setColor(nacho::BLACK);
	//gotoxy(53,11); cout << " CARGANDO...\n";
	for(int i=0; i<=54; i++)
	{
        SetConsoleTextAttribute(hConsole, 8);
		gotoxy(50+i,23); cout<<char(219);
		Sleep(2*1000/55);
	}
    PlaySound(TEXT("audios\\bienvenido.wav"), NULL, SND_ALIAS);
    getch();
    nacho::cls();
}

void home(){
    int opc;
    string opciones[]={"Estudiante", "Docente", "Salir"};
    string opcaux[]={"NUEVO", "Registrado", "Salir"};
    opc = menu("FISYSTEM", opciones, 3);
    
    switch (opc){
        case 1:
            alumno();
        break;
        case 2:
            
            switch (loginPro())
            {
                case 'a':
                    profesor(DPLzzz, "DPL", a, 1);
                    break;
                case 'b':
                    profesor(prograGod, "Programacion", b, 2);
                break;
                case 'c':
                    profesor(Calculo, "CALCULO", c, 3);
                break;
                case 'd':
                    profesor(Biologia, "Programacion", d, 4);
                break;
            }
        break;
        case 3:
        break;
    }
}
void profesor(alumnos x[], string regTt, int w, int h){   //w glogal variable  h reg nmumber   regTt letters
    nacho::cls();
    int auxcode1,opc1;
    bool repite=true, repite2=true;

    string opciones[]={"LISTA DE ALUMNOS", "ASIGNACION DE CALIFICACIONES ", "MODIFICAR CALIFICACIONES","IMPRIMIR REGISTRO", "SALIR"};
    do{
        opc1=menu("FISYSTEM",opciones,5);
        switch (opc1){
            case 1: registro(x, w, regTt); break;
            case 2: asignarNotas(x,w); break;
            case 3:     
                nacho::cls();
                cout << "Digite su codigo: "; cin >> auxcode1;
                for (int i = 0; i < w; i++){
                    if (x[i].codigo == auxcode1){
                        modificarCalificacion(x,i);
                    }
                }
            break;
            case 4:
                imprimir(x, h);
            break;
            case 5:
                repite=false;
            break; 
        }
    }while(repite);
    home();
}
void alumno()
{
    bool repite5 = true;
    bool repite2 = true;
    system("cls");
    int opc1, auxcode, opc2, aux;
    bool repite=true;
    float promedio;
    string opciones[]={"Alumno nuevo", "Alumno matriculado", "Atras"};
    string opc[]={"Visuzalizar notas", "Ver promedio final", "Modificar nombres", "Salir"};
    string opc5[]={"DPL", "PROGRAMACION","CALCULO", "BIOLOGIA", "Salir"};
    do
    {
        opc1=menu("FISYSTEM",opciones,3);
        switch (opc1)
        {
        case 1:
            system("cls");
            do
            {
                opc2=menu("Seleccione un curso",opc5,5);   
                switch (opc2)
                {
                case 1:
                    ingresarDatos(DPLzzz, a);
                    break;
                case 2:
                    ingresarDatos(prograGod, b);
                    break;
                case 3:
                    ingresarDatos(Calculo, c);
                    break;
                case 4:
                    ingresarDatos(Biologia, d);
                case 5:
                    repite5= false;
                    break;    
                }
            } while (repite5);
            break;
        case 2:
            fflush(stdin);
            nacho::cls();
            opc2=menu("Seleccione un curso",opc5,5);
            switch(opc2){
                case 1:
                mostrarNotas(DPLzzz, a);
                    break;
                case 2:
                mostrarNotas(prograGod, b);
                    break;
                case 3: 
                mostrarNotas(Calculo, c);
                    break;
                case 4:
                mostrarNotas(Biologia, d);                                            
            }
        case 3:
            repite = false;
            break;
        }
    }while (repite);
    home();
}

//PARA EL ALUMNO
void ingresarDatos(alumnos x[], int &z){
    bool repite3 =true;
    nacho::cls();
    
    do{
        gotoxy(44,9); cout << "..:: MATRICULA FISYSTEM ::..";
        fflush(stdin);
        gotoxy(39,12); cout << "Nombres y apellidos     : ";
        getline(cin, x[z].nombres);
    }while(validar(x[z].nombres));
    gotoxy(39,14); cout << "Edad                    : ";
    cin >> x[z].edad;
    fflush(stdin);
    gotoxy(39,16); cout << "masculino[m]/femenino[f]: ";
    do{
        gotoxy(65,16); getline(cin, x[z].sexo);
        if (x[z].sexo=="f" or x[z].sexo=="F"){
            x[z].sexo="femenino";
            repite3 = false;   
        }
        else if (x[z].sexo=="m" or x[z].sexo=="M"){
            x[z].sexo="masculino";
            repite3 = false;
        }
        if (repite3){
            gotoxy(45,26);cout << "Digite una opcion correcta";
            getch();
        }else{
            gotoxy(45,26);cout << "                          ";
        }
    }while(repite3);
    srand(time(NULL)); // generar el número aleatorio
    x[z].codigo = 2000 + rand() % (1000);
    gotoxy(38,20); cout << "Su codigo es: " << x[z].codigo << ", por favor guardelo :3 " << endl;z++;
    getch();
}
void modificarNombre(alumnos x[] ,int z)
{
    string auxnom, auxap;
    nacho::cls();
    fflush(stdin);
    cout << "\nIngrese el nuevo nombre completo: ";
    getline(cin, x[z].nombres);
    system("cls");
    cout << "\nnombre corregido :3" << endl;
    cout << "--> " << x[z].nombres<<endl;
    nacho::cls();
}
void mostrarNotas(alumnos x[], int p){ //la pe es el iterador global -> 
    system("cls");
    bool repite2=true;
    int opc1, auxcode, opc2, aux,l=0;
    bool repite=true, repiteGod=true;
    float promedio;
    string opc[]={"Visuzalizar notas", "Ver promedio final", "Modificar nombres", "Salir"};

    gotoxy(51,14); cout << "Ingrese su codigo: "; cin >> auxcode;

    nacho::cls();
    for (int i = 0; i <= p; i++){
        if(x[i].codigo==auxcode){
            repiteGod=false;
            gotoxy(40,14); cout << "Bienvenido " << x[i].nombres<<endl;
            PlaySound(TEXT("audios\\alumno.wav"), NULL, SND_ALIAS);
            getch();
            nacho::cls();
            do
            {
                opc2=menu("REGISTRO DE NOTAS",opc,4);
                cout<<x;        
                switch (opc2){
                    case 1:
                        nacho::cls();
                        gotoxy(49,12); cout << "Evaluacion continua:  ";cout<<"\t"; cout << x[i].nota1<<endl;
                        gotoxy(49,14); cout << "Examen parcial:       ";cout<<"\t"; cout << x[i].nota2<<endl;
                        gotoxy(49,16); cout << "Examen final:         ";cout<<"\t"; cout << x[i].nota3<<endl;
                        gotoxy(50,18);cout<<"Comentarios del profesor: "<<endl<<endl;gotoxy(50,19); cout<<x[i].comentario;
                        getch();
                        break;
                    case 2: 
                        nacho::cls();
                        gotoxy(52,11); cout << "PROMEDIO FINAL";
                        promedio=(x[i].nota1+x[i].nota2+x[i].nota3)/3;
                            if (promedio>=11)
                            {
                                gotoxy(34,13); cout << "Felicidades "<<x[i].nombres<<" has aprobado el curso\n";
                                gotoxy(48,15); cout << "Tu promedio es:      "<<promedio<<endl;
                                getch();
                            }
                            else
                            {
                                gotoxy(49,13); cout << "Usted ha desaprobado el curso";
                                gotoxy(49,15); cout << "Su promedio es: "<<promedio<<endl;
                                getch();
                            }
                        break;
                    case 3:
                        nacho::cls();
                        modificarNombre(x ,i);
                        break;
                    case 4:
                        repite2=false;
                        break;
                }        
            }while(repite2);
        }
        if(i==p and repiteGod==true){
            PlaySound(TEXT("audios\\alumnoNO.wav"), NULL, SND_ALIAS);
        }  
    }
}


void asignarNotas(alumnos x[], int m){ //m global var
    int auxcode1;
    char desea;
    bool repeatt =true;
    for (int i=m-1; i<m; i++){
        nacho::cls();
        fflush(stdin);
        gotoxy(30,12); cout<< "Alumno " << x[i].nombres;
        gotoxy(30,14); cout << "Ingrese la nota de la evaluacion continua: ";
        cin >> x[i].nota1;
        gotoxy(30,16); cout << "Ingrese la nota del examen parcial: ";
        cin >> x[i].nota2;
        gotoxy(30,18); cout << "Ingrese la nota del examen final: ";
        cin >> x[i].nota3;
        do{
        gotoxy(30,20);cout<<"Desea agregar comentario ? [y]/[n]:   ";
        cin>>desea;
            if(desea=='y' || desea =='Y'){
                fflush(stdin);
                gotoxy(30,21);
                cout<<"escriba el comentario: "<<endl;
                gotoxy(30,22);
                cout<<"->";
                getline(cin, x[i].comentario);
                system("pause");
                repeatt= false;
            }
            else if(desea == 'n' || desea == 'N'){
                x[i].comentario= "sin comentarios";
                repeatt = false;
            }
            else {
                cout<<"digite una opcion correcta"<<endl;
                system("pause");
            }
        }while(repeatt);
    }
    nacho::cls();
          
}
void modificarCalificacion(alumnos x[] ,int z){
    nacho::cls();
    fflush(stdin);
    cout << "Modificar nota del alumno: " << x[z].nombres <<endl;
    cout << "\nIngrese la nota de la evaluacion continua: "; cin >> x[z].nota1;
    cout << "Ingrese la nota del examen parcial: "; cin >> x[z].nota2;
    cout << "Ingrese la nota del examen final: "; cin >> x[z].nota3;
    system("cls");
    cout << "\nLa calificacion del alumno: " << x[z].nombres << " ha sido corregida con exito :3" << endl;
    system("pause");
}
void registro(alumnos x[], int f, string letters){
    nacho::cls();
    fflush(stdin);
    gotoxy(35,1);cout<<"LISTA DE ALUMNOS DEL CURSO DE "<<letters<<endl;
    gotoxy(2,3);cout<<"nombres";gotoxy(45,3);cout<<"edad";gotoxy(56,3);cout<<"sexo";gotoxy(70,3);cout<<"codigo";
    gotoxy(80,3);cout<<"EC";gotoxy(84,3);cout<<"EP";gotoxy(88,3);cout<<"EF"<<endl;
    cout<<"-----------------------------------------------------------------------------------------";
    for (int i = 0; i < f; i++){
        gotoxy(1,i+5); cout << x[i].nombres;
        gotoxy(45,i+5);cout << x[i].edad<<" anios";
        gotoxy(56,i+5);cout << x[i].sexo;
        gotoxy(70,i+5);cout << x[i].codigo;
        gotoxy(80,i+5);cout << x[i].nota1;
        gotoxy(84,i+5);cout << x[i].nota2;
        gotoxy(88,i+5);cout << x[i].nota3<<endl;
    }
    getch();
}

void marco(){
    nacho::cls();
    nacho::setColor(nacho::BLACK);
    for (int i = 0; i < 83; i++)
    {
        gotoxy(15+i, 2); cout << (char)219;
        gotoxy(15+i, 27); cout << (char)219;
        if (i >= 6 and i<= 76)
        {
            gotoxy(15+i, 5); cout << (char)219;
            gotoxy(15+i, 24); cout << (char)219;
        }
        if (i>=0 and i<22)
        {
            gotoxy(11, 4+i); cout << (char)219 << (char)219;
            gotoxy(100, 4+i); cout << (char)219 << (char)219;
            if (i>=3 and i<=18)
            {
                gotoxy(17, 4+i); cout << (char)219 << (char)219;
                gotoxy(94, 4+i); cout << (char)219 << (char)219;
            }
        }
    }
    gotoxy(13, 3); cout << (char)219<<(char)219; gotoxy(98, 3); cout << (char)219<<(char)219;
    gotoxy(19, 6); cout << (char)219<<(char)219; gotoxy(92, 6); cout << (char)219<<(char)219;
    gotoxy(13, 26); cout << (char)219<<(char)219; gotoxy(98, 26); cout << (char)219<<(char)219;
    gotoxy(19, 23); cout << (char)219<<(char)219; gotoxy(92, 23); cout << (char)219<<(char)219;
    /*

    for (int i = 0; i < 22; i++)
    {
        gotoxy(11, 4+i); cout << (char)219 << (char)219;
        gotoxy(100, 4+i); cout << (char)219 << (char)219;
        if (i>2 and i<19)
        {
            gotoxy(17, 4+i); cout << (char)219 << (char)219;
            gotoxy(94, 4+i); cout << (char)219 << (char)219;
        }
        
    }
    */
    
}
void imprimir(alumnos x[], int n){ //n -> a,b,c,d;
	ofstream file;
	string nameFile, frase;
    //cout<<"Imgrese el nombre del archivo: ";
	//getline(cin,nameFile);

    //(string)nameFile
    //file.open(nameFile,ios::out); //Creamos el archivo
	/*
	if(file.fail()){ //Si a ocurrido algun error
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
    */
   /*

    ifstream archivoB;
    archivoB.open("prueba.dat",ios::in | ios::binary);
    if (archivoB.fail())
    {
        cout <<"No se puede abrir";
        exit(1);
    }
    registro persona;

    archivoB.read((char*)&persona, sizeof(registro));
    cout << "Mostrando datos";
    cout << "\nNombre: "<<persona.nombre<<endl;
    cout << "Apellido: "<<persona.apellido<<endl;
    archivoB.close();
   
   */
    switch (n)
    {
    case 1://setfill('*') 
        file.open("DPL-alumnos.doc",ios::out);
            if(file.fail()){ //Si a ocurrido algun error
                cout<<"No se pudo abrir el archivo";
                exit(1);
            } 
        file << setw(43)<< "DPLZZZ"<<endl; 
        break;
    case 2:
        file.open("PROGRAMACION-alumnos.doc",ios::out);
            if(file.fail()){ //Si a ocurrido algun error
                cout<<"No se pudo abrir el archivo";
                exit(1);
            }
        file << setw(42)<< "PROGRAMACION"<<endl;
        break;
    case 3:
        file.open("CALCULO-alumnos.doc",ios::out);
            if(file.fail()){ //Si a ocurrido algun error
                cout<<"No se pudo abrir el archivo";
                exit(1);
            } 
        file << setw(43)<< "CALCULO"<<endl;
        break;
    case 4:
        file.open("BIOLOGIA-alumnos.doc",ios::out);
            if(file.fail()){ //Si a ocurrido algun error
                cout<<"No se pudo abrir el archivo";
                exit(1);
            } 
        file << setw(43)<< "BIOLOGIA"<<endl;
        break;
    }
                                                                     
    file << "\n Nombres y apellidos           edad   codigo   sexo      EC    EP    EF  "<<endl;
    file <<"_________________________________________________________________________\n"<<endl;
	for (int i = 0; i < 15; i++)
    {
        
        fflush(stdin); 
        if (x[i].nombres==""){ //acá hago un if para que no me escriba valores vacios en el .doc
            break;
        }
        file << setw(30)<< left << x[i].nombres; //el setw sirve para dar formato :v iwal que el gotoxy pero en archivos
        file << " ";

        file << setw(4) << right << x[i].edad;

        file << "  ";

        file << setw(6) << right << x[i].codigo;
        file << " ";

        file << setw(10) << right << x[i].sexo;
        file << "   ";

        file << setw(3) << left << x[i].nota1;
        file << "   ";

        file << setw(3) << left << x[i].nota2;
        file << "   ";

        file << setw(3) << left << x[i].nota3 << endl;
       
    }
    gotoxy(50,25); cout << "Archivo listo para imprimir :3"<<endl;
    getch();

	file.close(); //Cerramos el archivo
}

void Despedida(){
    system("cls");
    int matriz[29][109]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,1,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,4,4,4,0,4,4,0,0,4,4,4,0,4,4,4,0,4,4,4,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,0,0,1,1,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,1,1,0,0,1,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,4,0,4,0,4,0,4,0,0,4,0,0,4,0,4,0,4,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,4,0,4,0,4,0,4,0,0,4,0,0,4,0,4,0,4,4,4,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,4,4,4,0,4,0,4,0,0,4,0,0,4,0,4,0,4,4,4,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,2,2,2,2,0,0,0,0,2,2,2,2,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,4,0,4,0,4,0,4,0,0,4,0,0,4,0,4,0,0,0,4,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,4,0,4,4,0,0,4,4,4,0,4,4,4,0,4,4,4,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,2,2,0,0,2,2,2,2,2,2,2,2,2,2,1,1,0,0,0,0,1,1,0,0,2,2,2,2,2,2,2,2,0,0,2,2,1,1,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,0,0,3,3,3,3,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,3,3,3,3,0,0,1,1,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,3,3,3,3,3,3,3,3,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,3,3,3,3,3,3,3,3,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,0,0,3,3,3,3,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,3,3,3,3,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,2,2,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,2,2,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,1,1,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,2,2,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,1,1,2,2,2,2,3,3,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,1,1,1,1,1,1,1,1,1,3,3,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,1,1,0,0,2,2,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,2,2,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,2,2,2,2,2,2,1,1,1,1,2,2,2,2,2,2,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,0,0,2,2,1,1,1,1,2,2,0,0,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,0,0,2,2,1,1,1,1,2,2,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,2,2,1,1,1,1,2,2,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,0,1,1,1,1,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                         {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 6);
    for (int i = 0; i < 29; i++)
    {
        for (int j = 0; j < 109; j++)
        {
            if (matriz[i][j] == 1 or matriz[i][j] == 4)
            {
                SetConsoleTextAttribute(hConsole, 8);
                cout << (char)219;
            }
            else if (matriz[i][j] == 2)
            {
                SetConsoleTextAttribute(hConsole, 7);
                cout << (char)219;
            }
            else if (matriz[i][j] == 3)
            {
                SetConsoleTextAttribute(hConsole, 12);
                cout << (char)219;
            }
            else if (matriz[i][j] == 0)
            {
                SetConsoleTextAttribute(hConsole, 15);
                cout << (char)219;
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
    PlaySound(TEXT("audios\\bye.wav"), NULL, SND_ALIAS);

}


char loginPro(){
    string name,pw;
    bool repetir=true;
    char k=' ';
    int i,h=0,f=41;
    do{
        nacho::cls();
        draw(1,1,77,3);
        draw(0,0,78,24);
        gotoxy(29,2); cout<<"FISYSTEM DOCENTES";
        fflush(stdin);
        gotoxy(4,10); cout<<"Ingrese su usuario: ";gotoxy(50,10); cout << "\100unmsm.edu.pe";
        gotoxy(4,12); cout<<"Ingrese su contrasenia: ";
        gotoxy(32,10); getline(cin,name);
        gotoxy(32,12); getline(cin,pw);
        for(i=0;i<25;i++){

            if (name==DPLpro[i].correo and pw==DPLpro[i].codigoPro) {
                k='a';
                repetir=false;
                
                //break;
            }
            if (name==PROGRApro[i].correo and pw==PROGRApro[i].codigoPro){
                k='b';
                repetir=false;
                
                //break;
            }
            if (name==CALCULOpro[i].correo and pw==CALCULOpro[i].codigoPro){
                k='c';
                repetir=false;
                
                //break;
            }
            if (name==biologialbth[i].correo and pw==biologialbth[i].codigoPro){
                k='d';
                repetir=false;
                
                //break;
            }
        }
        if(k==' ')
        {
            gotoxy(20,26); cout<<"No existe el usuario";
            PlaySound(TEXT("audios\\docenteNO.wav"), NULL, SND_ALIAS);
        }else{
            for(int i = 0; i < 3; i++ ){
            gotoxy(33,19); cout<<"Cargando";
            gotoxy(f,19); cout<<".";
            f+=1;
            Sleep(500);
	        }
        }

    }while(repetir);

    if(k=='a' || k=='b' || k=='c' || k=='d'){
        gotoxy(3,22); cout<<"Bienvenido :3";
        PlaySound(TEXT("audios\\docente.wav"), NULL, SND_ALIAS);
    }
    
    

    return k;
}
    

void loginAl(){
    string name,pw;

    draw(1,1,77,3);
    draw(0,0,78,24);
    gotoxy(29,2); cout<<"FISYSTEM ALUMNOS";
    gotoxy(4,10); cout<<"Primer nombre: ";
    gotoxy(4,12); cout<<"Codigo ";
    gotoxy(30,10); getline(cin,name);
    gotoxy(30,12); getline(cin,pw);
    if (name=="nacho" and pw=="holaperros") {
        //char bien[] = "C:\\Users\\GBP17\\Downloads\\Music\\lineaylistos.wav";
        gotoxy(3,22); cout<<"Bienvenido :3";
    }
    else{
        gotoxy(3,22); cout<<"Error :'3, presione cualquier tecla y vuelva a intentar";
        getch();
        nacho::cls();
        loginAl();
    }
    nacho::cls();

}

//no creo que lo ponga

void matriculaProfe(profesores x[], int &z){
    bool repite3 =true;
    nacho::cls();
    
    do{
        gotoxy(44,9); cout << "..:: MATRICULA DOCENTES ::..";
        fflush(stdin);
        gotoxy(39,12); cout << "Nombres y apellidos     : ";
        getline(cin, x[z].nombres);
    }while(validar(x[z].nombres));
    gotoxy(39,14); cout << "Edad                    : ";
    cin >> x[z].edad;
    fflush(stdin);
    gotoxy(39,16); cout << "masculino[m]/femenino[f]: ";
    do{
        gotoxy(65,16); getline(cin, x[z].sexo);
        if (x[z].sexo=="f" or x[z].sexo=="F"){
            x[z].sexo="femenino";
            repite3 = false;   
        }
        else if (x[z].sexo=="m" or x[z].sexo=="M"){
            x[z].sexo="masculino";
            repite3 = false;
        }
        if (repite3){
            gotoxy(45,26);cout << "Digite una opcion correcta";
            getch();
        }else{
            gotoxy(45,26);cout << "                          ";
        }
    }while(repite3);
    srand(time(NULL)); // generar el número aleatorio
    x[z].codigoPro=to_string(5000 + rand() % (5000));
    gotoxy(38,20); cout << "Su codigo es: " << x[z].codigoPro<< ", por favor guardelo :3 " << endl;z++;
    getch();
}