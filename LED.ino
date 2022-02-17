#include "Espera.h"
TEspera TRfsh,TCambio;
bool cambio=false;
void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 TRfsh.set(500);
 TCambio.set(3000);
}

void loop() {
if(TRfsh.done(true))    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
if(TCambio.done(true))  {cambio=!cambio;
                         if(cambio) TRfsh.set(500); 
                         else TRfsh.set(100);
                         }
}
