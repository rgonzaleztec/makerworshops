#include <Adafruit_CircuitPlayground.h>
// Libreria que se requiere para trabajar con la placa

  int rojo=0;
  int verde=0;
  int azul=0;

void setup() {
  // put your setup code here, to run once:
 //Iniciamos la placa
  CircuitPlayground.begin();
 
  // Limpiamos los colores que tenga el circuito anteriormente programados
  CircuitPlayground.clearPixels();
  CircuitPlayground.setBrightness(180);
}

void loop() {
  // Codigo que se repite eternamente
 

  rojo = random(255);
  verde=random(255);
  azul=random(255);
  Serial.print("Rojo: ");
  Serial.println(rojo);
  Serial.print("Verde: ");
  Serial.println(verde);
  Serial.print("Azul: ");
  Serial.println(azul);
  encenderTodos(rojo,verde,azul);
  delay(3000);
  CircuitPlayground.clearPixels();
}


void encenderTodos(int rojo, int verde, int azul)
{// Vamos a hacer que todos se prendan a ver que tal
  
 for (int i=0; i<10; ++i) 
   {
      CircuitPlayground.strip.setPixelColor(i, rojo, verde, azul);
   }
    CircuitPlayground.strip.show();
}
