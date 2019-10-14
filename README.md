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

## Taller Básico empezando de cero
**Tiempo requerido total 10minutos**

Vamos a interactuar por primera vez con la placa circuit playground, para lo cual debemos tener instalado en nuestro computador el siguiente software:

 - [Arduino Studio](https://www.arduino.cc/en/Main/Software) (versión reciente)
 - [Controladores de CPG para Windows](https://github.com/adafruit/Adafruit_Windows_Drivers/releases/tag/2.4.0.0)

Verificar que el software antes indicado este instalado en su computador. Para ellos vamos a ejecutar el Arduino Studio y cargaremos el ejemplo de demo que trae la placa al instalarse. Ver la siguiente imagen.
![Demo](https://github.com/rgonzaleztec/makerworshops/blob/master/images/EjemploDemoCPG.png)
## Taller Creativo y si creamos una lámpara
**Tiempo requerido total 65minutos**

Tenemos un problema cada uno de los estudiantes de la clase a perdido su lámpara mágica, en este taller usted tendrá como reto crearle a un compañero. Para esto deberás buscar en el grupo un compañero sin lámpara y le preguntaras:

 1. Cuáles son almenos tres de tus colores preferidos?
 2. Cuáles son las dos figuras geométricas que más le gustan?
 3. Con cuál nombre le gusta que lo llamen?
**Trabajo (tiempo requerido 25minutos)**
Se le proporcionarán algunos elementos para que cree su lámpara, tendrá acceso a papel de construción, paletas, goma, tijeras y otros sorpresa.
Antes de tomar los elementos piense, analice y con las respuestas de su compañero cree una lámpara que lo represente. 
Cuando tenga una primer idea de como la quiere crear empiece a trabajar, considere antes de armar su covertor de lámpara debe crear su circuito y el programa para que funcione.
** El circuito (tiempo requerido 60minutos)**
Utilizando la plantilla base vamos a aprender a modificarla. Descargue la plantilla del siguiente enlace([aqui](https://github.com/rgonzaleztec/makerworshops/blob/master/codigo/BasicoArduino.ino)).

Vamos agregar código para cambiar el color sin tener que cambiar el código fuente y volverlo a subir.  Vamos incluir la acción de presionar un botón para que sea más divertido el cambio.
Ver el siguiente código:

    if(digitalRead(leftButton)) 
    {   // Si leer boton izquierdo es verdadero
	    encenderLed(1, 0,255,0,255);    // Verde
	}
	else if
  `ente  }
  else if(digitalRead(rightButton)) { // if reading the right button returns true
    makeTone(speaker,1760,100);   // output a 1760 Hz sound for a tenth of a second                    
  }r code here`

    




<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIxMzA1NTUxNzUsLTE4OTA1MzA4OTMsMj
gyMzk5NjE1LDIwMjE3NTI5ODAsNzIwMjA1MzgxLC0xODEzMjIx
NTA4LDExNjg4NDk4NDcsMTY3NTkzNzAyMSwtMjAyMzM0MTM3NS
wyMDcyODQzOTMyLC0xNzY0ODQxMDc4LC0xNTk0ODYzNDUzLDE1
NTk4NTM0MTIsMTM1OTkzODMwMSw3NjUyMDQ4ODcsLTEwMzY2OD
M5NDFdfQ==
-->