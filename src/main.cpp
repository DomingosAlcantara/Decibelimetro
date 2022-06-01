/*
 *          Projeto desenvolvido para a matéria de PFCI e II
 * Neste projeto desenvolveremos um Medidor de Pressão Sonora
 */

/*
 * File:   main.cpp
 * Author: Domingos
 *
 * Modificado em 18/06/2019 01:34
 */

#include <avr/io.h>
#include <util/delay.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <SD/src/SD.h>
#include <SPI.h>
#include <Time.h>
#include <TimeLib.h>
#include <DS3232RTC_ID78/src/DS3232RTC.h>
#include <../Interfaces/TDecibelimetroSD.h>
#include "KY_038.h"

#define CHIPSET PIND4

/*
 * Código para teste da classe DecibelimetroSD
 */
TDecibelimetroSD sd = TDecibelimetroSD(CHIPSET);
int main(){
   String temp = "";
   File arq = "Ajustes.txt";

   sd.conectar(arq, FILE_READ);

   if(arq){
      while(arq.available()){
         temp = arq.read();

      }
   }
}

