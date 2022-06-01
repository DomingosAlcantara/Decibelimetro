/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "../Interfaces/KY_038.h"
//#include "../../../../Domingos/Documents/Arduino/libraries/db_meter_library-master/sound_meter.h"
//#include "C:/Users/Domingos/Documents/Arduino/libraries/db_meter_library-master/sound_meter.h"

KY_038::KY_038(uint8_t pino){
   _pino = pino;
}

uint8_t KY_038::getLeituraAtual(){
   _leitura = analogRead(_pino);
   return _leitura;
}

float KY_038::LeituraTensao(uint8_t* leitura){
   _tensao = ((*leitura * 5.0) / 1023.0);
   return _tensao;
}

uint8_t KY_038::TensaoDecibeis(float* tensao){
   uint8_t x = 20 * log(* tensao);

   return x;
}

void KY_038::adc_init(void){
   /* Configurando prescaler para 128, em 16Mhz,
      resulta 125Khz (deve estar entre 50~200Khz)
   */
  ADCSRA |= _BV(ADPS2) | _BV(ADPS1) _BV(ADPS0);
  //Desligando modo free-running
  ADCSRA &= ~BV(ADFR);
  //Habilitando ADC
  ADCSRA |=_BV(ADEN);
}

int KY_38::analogRead(int porta){
   uint8_t low, high;
   uint8_t bToChannel = porta & 0x07;

   // Configurando o canal da porta a ser amostrada
   ADMUX = bToChannel;
   // Voltagem de referencia para AVCC
   ADMUX |= _BV(REFS0);
   // Desligando o ajuste de esquerda
   // para ter 10 bits de resolução
   ADMUX &= ~_BV(ADLAR);
   // Ligando a amostragem e iniciando medição
   ADCSRA |= _BV(ADSC);
   // Bit ADIF é resetado quando operação termina
   loop_until_bit_is_set(ADCSRA, ADIF);
   // Lendo byte low primeiro para travar a leitura
   low = ADCL;
   high = ADCH;
   // Combinando bytes
   return (high << 8) | low;
}
