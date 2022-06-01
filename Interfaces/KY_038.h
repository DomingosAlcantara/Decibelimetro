/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KY_038.h
 * Author: Domingos
 *
 * Created on 7 de Dezembro de 2018, 22:41
 */

#ifndef KY_038_H
#define KY_038_H

#include <avr/io.h>
#include <math.h>

//Considerando que o sensor utilizado será o KY-038, ou algum semelhante quanto a pinagem
class KY_038{
public:
    KY_038(uint8_t pino); //Construtor
    
    uint8_t getLeituraAtual();
    uint8_t TensaoDecibeis(float* tensao);
    
private:
    uint8_t     _pino;
    uint8_t     _leitura;
    float       _tensao;
    float LeituraTensao(uint8_t* leitura);
    void adc_init(void);
    int analogRead(int porta);
};

#endif /* KY_038_H */

