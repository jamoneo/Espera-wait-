//  Clase Espera.h
// (c) Jose Angel Moneo (2016)
//  Sistema de espera sin usar timer
//
 // (c)  José Angel Moneo (2016)
// V1.3


#ifndef _Espera_class_H
#define _Espera_class_H

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif


class TEspera
{


 private:
       unsigned long Tsec;
       unsigned long Tespera; //tiempo almacenado
       boolean fdone=true; //marca tiempo finalizado, para no tener que comprobar el tiempo despues de que se cumpla
 
public:
   
   TEspera(){}; //constructor para servo. indicamos el las salidas del servo
   boolean done(bool op=false);
   void set(unsigned long espera);
   void reset(); //Reinicia el tiempo preficado anteriormente

	};
  #endif


   
