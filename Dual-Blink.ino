#include "Espera.h"
TEspera TRfsh,TCambio;
bool cambio=false;
void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 TRfsh.set(100);
 TCambio.set(1000);
}

void loop() {
if(TRfsh.done(true))    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
if(TCambio.done(true))  {cambio^=1;
                         TRfsh.set(cambio*100+50); 
                         }
}
