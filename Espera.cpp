/* ========================================================================== */
/*                                                                           */
/*   Espera.c                                                                */
/*   (c) 2019 Jose Angel Moneo                                               */
/*   v1.3                                                                         */
/*   Clase Espera                                                           */
/* ========================================================================== */

#include "Espera.h"

//asigna el valor tiempo de espera a lavariable tsec
void TEspera::set(unsigned long espera)
{ Tsec=millis()+espera;
Tespera=espera; //alamacena el tiempo fijado
  fdone=false;
}

//espera a que se cumpla el tiempo de espera asignado
//if op es true realiza un reset automático al cumplirse el tiempo
boolean TEspera::done(bool op)
{  if (!fdone) 
        if(Tsec<millis()) {fdone=true;
                           if (op) reset(); 
                           return true;}
  return fdone;
}

void TEspera::reset(void)
{   Tsec=millis()+Tespera;
  fdone=false;
}
