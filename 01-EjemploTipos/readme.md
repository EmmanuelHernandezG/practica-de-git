<div align="center">
<img src="https://www.frba.utn.edu.ar/wp-content/uploads/2016/08/logo-utn.ba-horizontal-e1471367724904.jpg" alt="utn-logo" style="width:300px;border-radius:20px" />
<br>
<br>

 **Número de equipo:** 3 <br/> 
 **Nombre del equipo (opcional):** --<br/> 
  <big>Trabajo (01) "Valores y Operaciones de Tipos de
Datos"</big><br/><br> 
**Autores:**
 <br/>
 | Nombre   | Apellido     | Usuario Github | legajo    |
 | -------- | --------     | -------------- | --------- |
 | Israel   | Ramírez      | Israelramirez9 | 209.754-0 |
 | Matias   | Santo Stefano| MSantoStefano | 215.502-3 |
|Lucas | Almiron     | almironlucas1      | 2114781 |
 | Emmanuel | Hernandez Guadiamus |   EmmanuelHernandezG | 208.030-8 |
 | -------- | --------     | --------       | --------  |
 | -------- | --------     | --------       | --------  |
 ### Transcripción: 
 Este es un trabajo no estructurado, que consiste en escribir un programa que
ejemplifique el uso de los tipos de datos básicos de C++ vistos en clase: bool,
char, unsigned, int, double, y string.
</div>
<br/>

<p>
<b>Creditos Extra:</b>

1) ¿Son los enumerados en la sección anterior realmente
todos los tipos que usamos en clase? Justifique.<br/>
1)  Para cada tipo de dato, agregue una notación literal alternativa, si la tiene.<br/>
2) Intente probar que la suma de diez veces un décimo (0.1) es uno (1.0).<br/>
¿Qué está ocurriendo?<br/><br/>

<b>Resolución creditos extra:</b> <br>

1) R= No, faltó "flujo" como tipo de dato donde los valores vistos en clase para este tipo de dato son ("cerr, cin, cout")<br><br>
2) R= Respondido en el archivo "EjemploTipos.cpp"<br><br>
3) R= En este tipo de operaciones se presenta "error de representación en punto flotante", los números de punto flotante (como 0.1) no se pueden representar con precisión exacta debido a la forma en que se almacenan en la memoria de la computadora. Cuando realizas la operación de sumar diez veces 0.1, el resultado no es exactamente 1.0 debido a pequeños errores de redondeo que se acumulan en cada operación de punto flotante, el resultado no es exactamente 1.0, sino algo muy cercano a él, pero no exactamente igual.
 Por ende es importante tener siempre en cuenta esto al momento de realizar dichas operaciones, puedes tomar ventaja y usar el método round de la librería math que permite redondear el resultado a los decimales que se desean.
</p>



 <p align="center" style="font-size:20px"><b>**Hipótesis de trabajo que surgen luego de leer el enunciado:**</b></p>

 <br>



