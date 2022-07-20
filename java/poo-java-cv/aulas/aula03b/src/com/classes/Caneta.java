package com.classes;

public class Caneta {
  public String modelo;
  public String cor;
  private float ponta;
  protected int carga;
  protected boolean tampa;

  public void status() {
    System.out.print("\nModelo: " + this.modelo);
    System.out.print("\nCor: " + this.cor);
    System.out.print("\nPonta: " + this.ponta);
    System.out.print("\nCarga (%): " + this.carga);
    System.out.print("\nela está tampada? " + this.tampa);
    System.out.print("\nconstruido com sucesso ");
  }

  protected void destampar(){
    this.tampa = false;
  }

  protected void tampar(){
    this.tampa = true;
  }

  public void rabiscar(){
    if(this.tampa == true){
      System.out.print("\nNão posso escrever, a caneta ainda está tampada! ");
    } else {
      System.out.print("\nConsigo Rabiscar!\n");
    }
  }

  public void pintar(){
    if(this.carga >= 30 && this.tampa == false){
      System.out.print("\nA caneta tem tinta suficiente para pintar um desenho!");
    } else {
      System.out.print("\nA tinta está acabando, não consigo pintar\n");
    }
  }
}