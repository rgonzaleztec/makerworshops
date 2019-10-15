# Cultura Maker aprender haciendo

## Taller de Cultura Maker

Esto es un guía para que los estudiantes sigan con el apoyo del facilitador, el cual estará indicando como se debe avanzar para completar cada una de las tareas.
**Duración estimada**
Cada taller a desarrollar indicará la duración estimada.
**Materiales**
Cada estudiante tendrá su propio kit el cual será entregado por los facilitadores para que puedan desarrollar las actividades de los talleres. Los kits son personales y cada estudiante es el respondable del mismo, el cual al finalizar el taller podrá llevarselo para que continue creando más prototipos como un nuevo maker.
Materiales adicionales serán proporcionados solo para que puedan desarrollar los talleres, pero los mismos deberán ser devueltos al finalizar la actividad.
**Forma de Trabajo**
Es individual a menos que los facilitadores indiquen o el taller así lo requiera podrán juntarse para crear una mejor solución.

## Conociendo el Circuit Playground
![Circuit Playground Conectores](https://github.com/rgonzaleztec/makerworshops/blob/master/images/cpdevS.jpg)


**Versiones del Circuito**
En la actualidad existen dos tipos de controladores uno denominado Express y el Classic, ambos nos permiten realizar actividades que podrían parecer increibles.
Se identifican principalmente en los modelos más recientes que se indica **Express** o **Classic**.

**Caracteristicas de la placa**
Esta placa aunque parece muy sencilla es bastante poderosa y viene con una cantidad de sensores muy interesantes, un conjunto de puertos, además de un gran ambito de lenguajes para programarla.

**Lenguajes**

 - Python
 - C (arduino)
 - C++ (arduino)
 - MakeCode

**Sensores**

 - Temperatura A0
 - Luz A5
 - Sonido A4
 - Sensor de movimiento x,y,z 

**Puertos**
Son 8 puertos los cuales pueden ser utilizados mediante larguitos, soldandolos o hasta tocandolos.

**Ademas**
Tenemos 10 neopixels que pueden ser programados con casi cualquier color en formato RGB(Red,Green,Blue) [Selector de Colores](https://htmlcolorcodes.com/es/selector-de-color/). Dos botones para presionar, uno derecho y uno izquierdo que se puede detectar si están presionados o no.  Boton de switch que se puede combinar con alguna acción. Si quieres realidad un pequeño sonido digital o análogo tienes pequeño parlantito.
Vamos a trabajar un poco nuestros nuevos componentes.

[Imagen etiquetada del circuito](https://github.com/rgonzaleztec/makerworshops/blob/master/images/classic-labeled.jpg)

## Taller básico por bloques
**Tiempo requerido total 30minutos**
Gracias a la gran cantidad de opciones y facilidades que presenta la placa de Circuit PlayGround Express, se desarrollo una plataforma para Internet con la que podemos programar nuestro circuito. Los que han aprendido Scratch en sus clases de tecnología se sentirán totalmente cómodos programando en este laboratorio.
Para inicar vamos a cargar la plataforma en un navegador para Internet, por lo que por favor abran el siguiente enlace ([aquí](https://makecode.adafruit.com/#editor)).

 1. Intentar prender un neopixel
 2. Utilizar sensor de luz para emitir sonido
 3. Encender leds de color azul, amarillo o rojo según temperatura
 4. Generar sonidos según el movimiento del sensor
 5. Graficar valor de temperatura
 6. Probar utilizar los botones para genar sonidos

## RECESO DE 20 MINUTOS
Tiempo para despejarse

## Taller Básico empezando de cero
**Tiempo requerido total 15minutos**

Vamos a interactuar por primera vez con la placa circuit playground, para lo cual debemos tener instalado en nuestro computador el siguiente software:

 - [Arduino Studio](https://www.arduino.cc/en/Main/Software) (versión reciente)
 - [Controladores de CPG para Windows](https://github.com/adafruit/Adafruit_Windows_Drivers/releases/tag/2.4.0.0)

Verificar que el software antes indicado este instalado en su computador. Para ellos vamos a ejecutar el Arduino Studio y cargaremos el ejemplo de demo que trae la placa al instalarse. Ver la siguiente imagen.
![Demo](https://github.com/rgonzaleztec/makerworshops/blob/master/images/EjemploDemoCPG.png)
## Taller Creativo y si creamos una lámpara
**Tiempo requerido total 65minutos**

Tenemos un problema cada uno de los estudiantes de la clase a perdido su lámpara mágica, en este taller usted tendrá como reto crearle a un compañero su lámpara. Para esto deberás buscar en el grupo un compañero sin lámpara y le preguntaras:

 1. Cuáles son almenos tres de tus colores preferidos?
 2. Cuáles son las dos figuras geométricas que más le gustan?
 3. Con cuál nombre le gusta que lo llamen?
 4. Cuál sería la seña de encendido de la lámpara?
 
**Trabajo (tiempo requerido 25minutos)**
Se le proporcionarán algunos elementos para que cree su lámpara, tendrá acceso a papel de construción, goma, tijeras y otros sorpresa.
Antes de tomar los elementos piense, analice y con las respuestas de su compañero cree una lámpara que lo represente. 
Cuando tenga una primer idea de como la quiere crear empiece a trabajar, considere antes de armar su covertor de lámpara que debe crear su circuito y el programa para que funcione, por lo que la prioridad no es solo el covertor.

** El circuito (tiempo requerido 60minutos)**
Utilizando la plantilla base vamos a aprender a modificarla. Descargue la plantilla del siguiente enlace([aqui](https://github.com/rgonzaleztec/makerworshops/blob/master/codigo/BasicoArduino.ino)).

Vamos agregar código para cambiar el color sin tener que cambiar el código fuente y volverlo a subir.  Vamos incluir la acción de presionar un botón para que sea más divertido el cambio.
Ver el siguiente código:

    if(digitalRead(leftButton)) 
    {   // Si leer boton izquierdo es verdadero
	    encenderLed(1, 0,255,0,255);    // Verde
	    delay(2000); // espera
	}
	else if(digitalRead(rightButton)) { // Si leer boton izquierdo es verdadero
		encenderLed(1, 0,0,255,255);    // Azul
		delay(2000);
		}
	else
	{
		encenderLed(1, 50,145,150,255);    // Azul
		delay(4000);
	}
	
Ahora que ya saben como programar un color y cambiarlo con un boton, **Cómo podemos hacerlo para algún otro led?**
*Le recordamos que tenemos 10 neopixel*

Vamos a probar otro código que les puede ayudar con su proyecto descargar el siguiente código ([aquí](https://github.com/rgonzaleztec/makerworshops/blob/master/codigo/BasicoArduino2.ino)). 
Algunos documentos para ir más adelante en este proceso de aprendizaje. No olviden que pueden preguntar a los instructores como agregar alguna idea más. 

 - [Guía de Circuit Playground Express](https://github.com/rgonzaleztec/makerworshops/blob/master/documentos/adafruit-circuit-playground-express.pdf)
 - [Guía de Circuit Playground](https://github.com/rgonzaleztec/makerworshops/blob/master/documentos/introducing-circuit-playground.pdf)

**Espacio de 30 minutos para que presenten los resultados de sus lámparas**


## Taller creativo intermedio
**Tiempo requerido total 40 minutos**
Este trabajo se puede desarrollar en equipo.

En este taller vamos a trabajar con los actuadores y otros sensores que la placa nos facilita para hacer nuestra creatividad volar.
Primero entenderemos como funciona el acelerometro de tres ejes, para lo que debe cargar el ejemplo como se muestra en la siguiente imagen.
![Acelerometro Ejemplo](https://github.com/rgonzaleztec/makerworshops/blob/master/images/EjemploAcelerometro.png)
Utilizar makecode para realizar esta tarea.
Vamos a recrear un problema nacional el cual es restringir el paso cuando viene el tren. Para ello deberan crear su propia estación de aguja para el tren, que deberá tener almenos los siguiente elementos:

 - Aguja baja al sentir la vibración del tren que se aproxima (utilizando el servo)
 - Indicador visual con colores que indique si el paso esta cerrado o no
 - La aguaja permanece  por 5 segundos como mínimo abajo mientras pasa el tren y se sube automáticamente
 - Deben crear una estación de paperl donde montar el microcontrolador que permita detectar el movimiento

**Espacio de 30 minutos para que presenten los resultados**

## Taller de comunicación entre circuitos
**Tiempo requerido total 15 minutos**
Vamos a conectar dos circuitos entre si utilizando comunición inalámbrica tipo IR. La misma permite transferir pocos datos por lo que vamos a enviar el valor de temperatura y graficarlo de un lado a otro. Se debe trabajar en equipos entre sus compañeros de clase.



<!--stackedit_data:
eyJoaXN0b3J5IjpbLTExNDg0NTY1MDIsMTY4NDg5NDc2NywtMj
AzNDIzNjU4MywtMTIwODI0MDgwMywxOTQyOTQ3NzU1LC0xNDYw
NDkxMzgzLDE1OTA5MjMxODQsLTE4NTgxODY0MDksLTM4NDc4ND
U4NiwtMjc5NTcxNDI3LDUxMTM2MTI3NywyMDAwNTI4MDQzLDEx
MDQ2MTI3MjAsLTEyNTUyMDIyMzQsLTEyNzcyNDQyNywtMTg5MD
UzMDg5MywyODIzOTk2MTUsMjAyMTc1Mjk4MCw3MjAyMDUzODEs
LTE4MTMyMjE1MDhdfQ==
-->