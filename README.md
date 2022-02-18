# Espera-WAIT-
Clase para Espera sin bloqueo para Arduino. Con posibilidad de enlazamiento.

Esta Clase permitirá crear esperas, sin bloqueo del LOOP y sin timer, para realizar acciones.
Estas esperas podrán ser periódicas o unicas. Y las de flanco unico podrán reiniciarse en cualquier movento.
Igualmente se podrá reprogramar el tiempo en cualquier momento, pudiendo realizarse ejecuciones de un proceso con 
incrementos de tiempo sucesivos.

Funciones:
   boolean done(bool op=false); //indica si se cumplio el tiempo. Con op=true el temporizdo se reinicia automáticamente
   void set(int espera);  //Reinicia el temporizador con el valor de tiempo para la siguiente espera
   void reset(); //Reinicia temporizado con el ultimo el tiempo preficado

Ejemplo:
    T1.set(5000); // Inicia el temporizador a 5 seg
    T2.set(10000); // Inicia el temporizador a 10 seg
    T3.set(50000); // Inicia el temporizador a 50 seg
    if(T1.done()) Serial.print("T1 cumplido");  //envia un mensaje solo una vez, cuando se cumple el tiempo= 5eg
    if(T2.done(true)) Serial.print"T2 cumplido); //Envia el mensaje cada 10 seg
    if(T3.done(true)) {Serial.print"T2 cumplido); //Mensaje cada 50 seg
                      T1.reset(); } //reinicia el T1 a los 50 segundos, con lo que el mensaje de t1 sucede cada 60 seg
