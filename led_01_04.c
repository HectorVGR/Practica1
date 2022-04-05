//////Replicación de trabajo de clase con apuntadores
///Header
#include "lib/include.h"

//main
int main (void){



      uint32_t ui32Loop; // variable para retrasos, volatil en vscode

        *((uint32_t *)0x400FE608U) = 0x1000;///Habilitacion de reloj para PN

       while((*((uint32_t *)0x400FE608U)) == 0){;} //Dar tiempo para que habilite reloj



        *((uint32_t *)0x40064400U) = 0x02; // habilitar PN1
        *((uint32_t *)0x4006451CU) = 0x02; // DEN para PN1

        while(1U){

            *((uint32_t *)0x400643FCU) = 0x02; //Encender led PN1
            for(ui32Loop = 0; ui32Loop < 50000; ui32Loop++){} //Retardo para blinky
            *((uint32_t *)0x400643FCU) = 0x00; //Apagar led PN1
            for(ui32Loop = 0; ui32Loop < 50000; ui32Loop++){} //Retardo para blinky
        }
}