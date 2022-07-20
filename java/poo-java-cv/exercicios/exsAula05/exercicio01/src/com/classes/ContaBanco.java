package com.classes;

public class ContaBanco {
  public String numConta;
  protected String tipoConta; //aceita CC ou CP
  private String nomeDono;
  private Float saldo;
  private Boolean status; //conta aberta status = true, conta fecbhada = false
  
  //métodos especiais
  public void setnumConta(String numConta) {
    this.numConta = numConta;
  }

  public String getnumConta() {
    return numConta;
  }

  public  void setTipoConta(String string){
    this.tipoConta = string;
  }

  public String getTipoConta(){
    return tipoConta;
  }

  public void setNomeDono(String nomeDono) {
    this.nomeDono = nomeDono;
  }

  public String getNomeDono() {
    return nomeDono;
  }

  public void setSaldo(Float saldo) {
    this.saldo = saldo;
  }
  
  public Float getSaldo() {
    return saldo;
  }

  public void setStatus(Boolean status) {
    this.status = status;
  }

  //todo método que usar bolleano deve retornar is() e não get().
  public Boolean isStatus() {
    return status;
  }  

  //métodos personalizados
  public Float getBonusCC(){
    return 50.00F;
  }

  public Float getBonusCP(){
    return 150.00F;
  }

  public void abrirConta(){ //se o cliente abrir uma conta corrente ganha +50 no saldo total caso conta corrente +150 reais
    if(isStatus().equals(true) ){
      System.out.println("------------------------------------");
      System.out.println("Conta aberta com sucesso!");

      String tipoDeConta = getTipoConta();
      Float bonusCC = getBonusCC();
      Float bonusCP = getBonusCP();

      if(tipoDeConta.equals("CC")){
        this.setSaldo((getSaldo() + bonusCC));

        System.out.println("\nParabéns. por abrir uma Conta Corrente com a gente você ganhou um bônus de R$" + bonusCC + "\nO saldo atual da sua conta é de R$" + getSaldo());

      }else if(tipoDeConta.equals("CP")){
        this.setSaldo((getSaldo() + bonusCP));
        
        System.out.println("\nParabéns. por abrir uma Conta Poupança com a gente você ganhou um bônus de R$" + bonusCP  + "\nO saldo atual da sua conta é de R$" + getSaldo());
      }

    }else{
      System.out.println("------------------------------------");
      System.out.println("\nA conta ainda não está aberta");
    }
  }

  public void fecharConta(){// para fechar conta não pode haver saldo positivo ou negativo
    status = isStatus();
    saldo = getSaldo();

    if(status.equals(true)){
      
      if(saldo > 0){
        System.out.println("\nO saldo disponível na conta é de R$" + saldo + " para encerrar a conta saque todo o valor!");

      }else if(saldo < 0){
        System.out.println("\nA conta possui um débito de R$" + saldo + "para encerrar a conta acerte o valor em aberto. \nObrigada.");

      }else if(saldo.equals(0.00F)){
        this.setStatus(false);
  
          System.out.println("\n-------- INFORMAÇÔES DA CONTA --------\n");
          System.out.println("Conta foi encerrada com sucesso. Obrigada.");
          System.out.println("\n--------------------------------------\n\n\n");

      }
    }else if(status.equals(false)){
      System.out.println("\nConta não foi aberta. Tente novamente!");

    }
  }

  public void depositar(Float valorDeposito){//status = true 
    saldo = getSaldo();
    nomeDono = getNomeDono();

    if(valorDeposito > 0){
      if(status.equals(true)){
        System.out.println("\nDepósito de R$ " + valorDeposito + " realizado co sucesso na conta de " + nomeDono + ". O saldo atual da conta é R$" + (saldo + valorDeposito));
  
        this.setSaldo((saldo + valorDeposito));
      
      }else{
        System.out.println("\nConta nunca foi aberta. Para depositar algum valor é neccesário ter uma conta aberta no banco. Obrigada!");

      } 
    }else if(valorDeposito <= 0){
        System.out.println("\nNão é possível fazer o deposito desse valor R$" + valorDeposito);
    }
  }

  public void sacar(Float valorSaque){//valor a ser sacado deve ser == ou maior que o soldo disponível
    saldo = getSaldo();
    status = isStatus();

    if(status.equals(true)){

      if(saldo >= valorSaque){
        System.out.println("\nO valor sacado é de R$" + valorSaque);

        this.setSaldo((getSaldo() - valorSaque));
        saldo = getSaldo();

        System.out.println("O saldo atual da conta é de R$" + saldo);
      

      }else{
        System.out.println("\n Você não tem saldo suficiente para realizar este saque de R$" + saldo);

        this.setSaldo(saldo);

      }
    }else if(status.equals(false)){
      System.out.println("\nNão é possível realizar o saque pois sua conta não foi aberta. Tente novamente!");

    }
  }

  public void taxaDeManutencao(){//CC paga R#12 /  CP paga R$20
    saldo = getSaldo();
    Float taxaDeMautencao = 12.00F;
    Float mensalidadeCP = 20.00F;
    status = isStatus();
    tipoConta = getTipoConta();

    if(status.equals(true)){

      if(tipoConta.equals("CC")){
        System.out.println("\nA taxa de manutenção da conta (R$" + taxaDeMautencao + ") foi debitada. Obrigada.");

        this.setSaldo((saldo - taxaDeMautencao));

      }else if(tipoConta.equals("CP")){
        System.out.println("\nA taxa de manutenção da conta (R$" + mensalidadeCP + ") foi debitada. Obrigada.");

        this.setSaldo((saldo - mensalidadeCP));

      }
    }else{
      System.out.println("\nConta não foi aberta. Tente novamente!");

    }
  }

  public void statusPrint(){
    status = isStatus();

    if(status.equals(true)){
      numConta = getnumConta();
      nomeDono = getNomeDono();
      tipoConta = getTipoConta();
      saldo = getSaldo();

      System.out.println("\n---- INFORMAÇÔES DA CONTA ----");
      System.out.println("Número da conta: " + numConta); 
      System.out.println("Nome: " + nomeDono);
      System.out.println("Tipo de conta: " + tipoConta);
      System.out.println("Saldo atual: " + saldo);
      System.out.println("--------------------------------");

    }else{
      System.out.println("\n-------- INFORMAÇÔES DA CONTA --------\n");
      System.out.println("Conta não foi aberta. Tente novamente!");
      System.out.println("\n--------------------------------------\n\n\n");

    }
  }
}