package com.classes;

public class Caneta {
  private String modelo;
  private String cor;
  private Float ponta;
  private Boolean tampada;

  public Caneta(){ //esse é o método construtors
    setModelo("Bic Cristal");
    setCor("Azul");
    setPonta(0.5f);
    setTampada(tampar());
  }

  public void setModelo(String modelo) {
    this.modelo = modelo;
  }

  public String getModelo() {
    return modelo;
  }

  public void setCor(String cor) {
    this.cor = cor;
  }

  public String getCor() {
    return cor;
  }

  public Float getPonta() {
    return ponta;
  }

  public void setPonta(Float ponta) {
    this.ponta = ponta;
  }

  public void setTampada(Boolean tampada) {
    this.tampada = tampada;
  }

  public Boolean getTampada() {
    return tampada;
  }

  public Boolean tampar(){
    return this.tampada = true;
  }

  public Boolean destampar(){
    return this.tampada = false;
  }

  public void status(){
    System.out.println("\nModelo: " + getModelo());
    System.out.println("Cor: " + getCor());
    System.out.println("Ponta " + getPonta());
    System.out.println("tampada: " + getTampada());
  }

}