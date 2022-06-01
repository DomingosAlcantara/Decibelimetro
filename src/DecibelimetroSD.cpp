/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <../Interfaces/TDecibelimetroSD.h>
#include <SD/src/SD.h>

TDecibelimetroSD::TDecibelimetroSD(byte* CS){
   if(!SD.begin(CS)){
      
   }
}

boolean TDecibelimetroSD::addRegistro(String* dataHora, byte* decibels){
   
}

boolean TDecibelimetroSD::conectar(String* arquivo){
   if()
}