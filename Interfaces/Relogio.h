/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Relogio.h
 * Author: Domingos
 *
 * Created on 8 de Dezembro de 2018, 12:09
 */

#ifndef RELOGIO_H
#define RELOGIO_H

#define DS1307_I2C_ADDRESS 0x68
#define opt 0

#include <../../Ds1307_ID1926/src/Ds1307.h>

class Relogio: public Ds1307{
public:
    Relogio(byte hora, byte minutos):Ds1307(DS1307_I2C_ADDRESS){};
    
    String getData();
    String getHora();
    
    void setData(String data);
    void setHora(String hora);
    
private:
    byte _hora, _minutos;
    
    char daysOfTheWeek [ 7 ] [ 12 ] = { " Domingo " , " Segunda-feira " ,
                                        " Terça-feira " , " Quarta-feira " , 
                                        " Quinta-feira " , " Sexta-feira " , 
                                        " Sábado " };

};

#endif /* RELOGIO_H */

