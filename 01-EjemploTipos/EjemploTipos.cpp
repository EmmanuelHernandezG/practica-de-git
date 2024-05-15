/* Qué:  "Valores y Operaciones de Tipos de Datos"
 * Descripción: Consiste en escribir un programa que ejemplifique el uso de los tipos de datos básicos de C++ vistos
 en clase: bool, char, unsigned, int, double, y string.
 * Autores: Israel Ramírez, Lucas Almiron, Matias Santo Stefano,Emmanuel Hernandez Guadiamus  
 * Cuando: dd/05/24
 */

#include <cassert>
#include <iostream>

using namespace std;

int main()
{
    /*Ejemplo de Operaciones  Tipo de dato: Char*/

    assert('a' == "a"[0]);
    assert('c' < 'd');
    assert('a' == 97);
    assert('a' != 'A');

    /*Ejemplo de Operaciones, Tipo de dato: Int*/

    assert(10 > 0);
    assert(-5 < 5);
    assert(-15 == -15);
    assert(8 != 4);
    assert(10 + 'a' == 107);

    /*Ejemplo de Operaciones, Tipo de dato: Double*/

    assert(10.0 == 10);
    assert(2.5 > 2);
    assert(10.0 + 'a' == 107);
    // CREDITO EXTRA: notación alternativa:
    assert(1.5l==1.5 && 1.5f==1.5l); // "l" subfijo "long double", "f" subfijo "float"
    assert(1.5==15e-1);

    /*Ejemplo de Operaciones, Tipo de dato: booleano*/

    assert(false || true);
    assert(not false);
    assert(!false);
    assert(true * 5);
    assert(true && "Hola mundo");

    /*Ejemplo de Operaciones, Tipo de dato: string*/

    assert(("Hola mund" + 'o') != "Hola mundo");
    assert("Hola"
           " mundo" == "Hola mundo");
    assert("Hola mundo" != "Hola mund" + 111);
    // CREDITO EXTRA: notación alternativa:
    assert("Hola"=="Hola"s);
    assert("hola"s.length()==4);

    /*Ejemplo de Operaciones, Tipo de dato: unsigned*/

    assert(15u + 5 == 20);
    assert(15u * -5 != 75);
    assert(65u == 'A');
   
   /*otros ejemplos varios*/
    assert("hola"s =="ho"s + "la"s);
    assert("hola"s.at(2) != "hello"s.at(1));
    assert(32+21>2);
    assert(1+2<2*2);
    assert((32*2)+1=='A');
    assert('A'!="123456"s.at(3));
    assert(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1 != 1);
    /*Los numeros estan representados en binario, para representar fracciones se usan sumas de potencias de 2 negativas.Al hacer esto 
    0.1 termina siendo una aproximacion y no 1/10. Abajo dejo otro ejemplo */
    assert(0.1+0.2!=0.3); 
    return 0;
}
