/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Domingos
 *
 * Created on 3 de Maio de 2019, 00:05
 */
/*
#include <avr/io.h>
#include <util/delay.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <SD/src/SD.h>
#include <SPI.h>
#include <Time.h>
#include <TimeLib.h>
#include <DS3232RTC_ID78/src/DS3232RTC.h>

#define MICROFONE PINC0    //Definindo pino de leitura
#define CHIPSET PIND4
#define VOLUME_MEDIO 0x0
#define VOLUME_ALTO 0x1
#define VOLUME_NORMAL 0x2

byte dB;
byte counter = 0;
unsigned int leituraAtual = 0;
LiquidCrystal_I2C lcd(0x27, 16, 2);

int main(){
   setSyncProvider(RTC.get);
   inicializa_MCU();
   
}

void inicializa_MCU(){
   DDRC = 0x00;   //Definindo o PORTC como entrada
   DDRD = 0x0C;   //Definido os pinos 2 e 3 do PORTD como saida
   
   PORTD = 0x0C;   //Inicializando os pinos 2 e 3 do PORTD desligados
}

void testarSaidas(){
   PORTD = 0x00;  //Liga os relés
   delay(2000);
   PORTD = 0x0C;  //Desliga os relés
}

void lcd_Update(byte flag, int* leituraConvertida){
   String temp = "";
   
   switch(flag){
      case 0:
         temp = "Volume Medio: ";
         break;
      case 1:
         temp = "Volume Alto: ";
         break;
      case 2:
         temp = "Leitura: ";
         break;
   }
   
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print(DataFormatada());
   
   lcd.setCursor(0,1);
   lcd.print(temp);
   lcd.print(&leituraConvertida);
   lcd.print("dB");
}

String DataFormatada(){
   char temp[255];
   
   sprintf(temp, "%.2d/%.2d/%d %.2d:%.2d", day(), month(), year(), hour(), minute());
   
   return temp;
}

float converter_Leitura_p_Tensao(float* leitura){
   return (float)((leitura * 5.0) / 1023.0);
}

int converter_Tensao_p_Decibel(float* tensao){
   int temp;
	
	temp = ((87.1 * tensao) - 75.4);
	
	return ((temp < 0) ? 0 : temp);
}

void ler_Inicializacoes(){
   
}

void iniciarSD(){
   
}
*/