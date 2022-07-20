package com.classes;

public class Caneta {
  public String modelo;
  public String cor;
  public float ponta;
  public int carga;
  public boolean tampa;

  public void status() {
   System.out.print("\n\nTenho uma caneta: " + this.cor);
   System.out.print("\nela está tampada? " + this.tampa);
  }

  public void destampar(){
    this.tampa = false;
  }

  public void tampar(){
    this.tampa = true;
  }

  public void rabiscar(){
    if(this.tampa == true){
      System.out.print("\nNão posso escrever, a caneta ainda está tampada! ");
    } else {
      System.out.print("\nConsigo Rabiscar!\n");
    }
  }
}


