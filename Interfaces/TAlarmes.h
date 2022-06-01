/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TAlarmes.h
 * Author: Domingos
 *
 * Created on 3 de Outubro de 2018, 21:15
 */
//#include <LiquidCrystal/src/LiquidCrystal.h>

#ifndef TALARMES_H
#define TALARMES_H

#define opt 1

class TAlarmes{
public:
    TAlarmes(char pin1, char pin2);
    void ativar(byte t);
    
private:
    char _pin1, _pin2;
    byte _t;
    void desativar();
};

#endif /* TALARMES_H */

