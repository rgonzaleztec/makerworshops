#include <Adafruit_CircuitPlayground.h>
// Libreria que se requiere para trabajar con la placa


void setup() {
  // put your setup code here, to run once:
 //Iniciamos la placa
  CircuitPlayground.begin();
 
  // Limpiamos los colores que tenga el circuito anteriormente programados
  CircuitPlayground.clearPixels();
}

void loop() {
  // Codigo que se repite eternamente

  encenderLed(1, 255,0,0,255);
  delay(300);
  encenderLed(4, 255,0,0,255);
  delay(300);
  encenderLed(7, 255,0,0,255);
  delay(500);
  CircuitPlayground.clearPixels();
  delay(1000);

}



void encenderLed(int pixelNum, int rojo, int verde, int azul, int intensidad)
{
  // Funcion para configurar un color a un pixel
  // Los valores permitidos para los colores van de 0 a 255
  // La intensidad va de 0 a 255, siendo 0 apagado y 255 muy intenso
  // pixelNum van del 0 al 9
  
  
  CircuitPlayground.setPixelColor(pixelNum, rojo, verde, azul);
  CircuitPlayground.setBrightness(intensidad);
  
}
