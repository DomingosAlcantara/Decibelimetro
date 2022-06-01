/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DecibelimetroSD.h
 * Author: Domingos
 *
 * Created on 8 de Dezembro de 2018, 11:56
 */

#ifndef TDECIBELIMETROSD_H
#define TDECIBELIMETROSD_H

#include <SD/src/SD.h>
//#include <../Interfaces/Relogio.h>

class TDecibelimetroSD: public SD{
public:
    TDecibelimetroSD(byte* CS);
    
    boolean addRegistro(String* dataHora, byte* decibels);
    boolean conectar(String* arquivo, uint8 modo); 
    
private:
    int _opt;
    File arquivo;
    void carregarArquivo();
};

#endif /* DECIBELIMETROSD_H */

