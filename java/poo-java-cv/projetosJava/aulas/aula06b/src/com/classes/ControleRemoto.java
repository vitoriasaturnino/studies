package com.classes;

import  com.interfaces.Controlador;

public class ControleRemoto implements Controlador {
  private int volume;
  private boolean ligado;
  private boolean tocando;

  //métodos especiais
  public ControleRemoto() {
    this.volume = 5;
    this.ligado = true;
    this.tocando = true;
  }

  public void setVolume(int volume) {
    this.volume = volume;
  }

  public void setLigado(boolean ligado) {
    this.ligado = ligado;
  }

  public void setTocando(boolean tocando) {
    this.tocando = tocando;
  }

  public int getVolume() {
    return volume;
  }
  
  public boolean isLigado() {
    return ligado;
  }

  public boolean isTocando() {
    return tocando;
  }

  //metodos abstratos

  @Override
  public void ligar() {
    this.setLigado(true);
  }

  @Override
  public void desligar() {
    this.setLigado(false);
  }

  @Override
  public void abrirMenu() {
    ligado = isLigado();
    tocando = isTocando();
    volume = getVolume();

    System.out.println("TV ligada:" + ligado);
    System.out.println("Está tocando?" + tocando);
    for (int i = 0; i <= volume; i+=10){
      System.out.println("|");
    }
  }

  @Override
  public void fecharMenu() {
    System.out.println("Fechando Menu...");
  }

  @Override
  public void maisVolume() {
    volume = getVolume();
    ligado = isLigado();

    if(ligado == true){
      this.setVolume(volume + 5);
    }
  }

  @Override
  public void menosVolume() {
    volume = getVolume();
    ligado = isLigado();

    if(ligado == true){
      this.setVolume(volume - 5);
    }
  }

  @Override
  public void ligarMudo() {
    volume = getVolume();
    ligado = isLigado();

    if(volume > 0 && ligado == true){
      this.setVolume(0);
    }
  }

  @Override
  public void deligarmMudo() {
    volume = getVolume();
    ligado = isLigado();

    if(volume == 0 && ligado == true){
      this.setVolume(50);
    }
  }

  @Override
  public void play() {
    tocando = isTocando();
    ligado = isLigado();

    if(ligado && !tocando){
      this.setTocando(true);
    }
  }

  @Override
  public void pause() {
    tocando = isTocando();
    ligado = isLigado();

    if(ligado && tocando){
      this.setTocando(false);
    }
  }
}
