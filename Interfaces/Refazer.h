/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TBotoes.h
 * Author: Domingos
 *
 * Created on 6 de Janeiro de 2019, 00:40
 */
#include <avr/iom328p.h>

#ifndef TBOTOES_H
#define TBOTOES_H

class TBotoes{
private:
    uint8_t _pino;
    size_t incrementarHorario(size_t* posicao, size_t* contador);
    size_t decrementarHorario(size_t* posicao, size_t* contador);
    
    size_t incrementarSetPoint(size_t* posicao, size_t* contador);
    size_t decrementarSetPoint(size_t* posicao, size_t* contador);
    
public:
    TBotoes(uint8_t pino);
    size_t incrementarContador(byte* flag_opt, size_t* contador, byte* posicao);
    size_t decrementarContador(byte* flag_opt, size_t* contador, byte* posicao);
    void verificarSelecao();
    
    void setOpcaoSelecionada(String* opcao);
    void setOpcaoMostrada(String* opcao);
    byte getCodOpcaoSelecionada();
    byte getCodOpcaoMostrada();
    boolean getStatus();

};

#endif /* TBOTOES_H */

