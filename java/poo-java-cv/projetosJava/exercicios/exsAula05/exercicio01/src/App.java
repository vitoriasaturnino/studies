import com.classes.ContaBanco;

public class App {
    public static void main(String[] args) throws Exception {

        //Sei que não é a melhor forma, mas por motivos de: "ainda não apendi a melhor maneira", como meus métodos estão imprimindo mensagens eu deixei junto com cada objeto instanciado para a ordem das mensagens fazer sentido

        ContaBanco conta01 = new ContaBanco();
        conta01.setnumConta("0001");
        conta01.setTipoConta("CC");
        conta01.setNomeDono("Pedro de Alcântara");
        conta01.setSaldo(0.00F);
        conta01.setStatus(true);
        conta01.abrirConta();
        conta01.depositar(2000.00F);
        conta01.sacar(200.00F); 
        conta01.taxaDeManutencao();
        conta01.statusPrint();

        ContaBanco conta02 = new ContaBanco();
        conta02.setnumConta("0002");
        conta02.setTipoConta("CP");
        conta02.setNomeDono("Joana D'Arc");
        conta02.setSaldo(0.00F);
        conta02.setStatus(true);
        conta02.abrirConta();
        conta02.depositar(5000.00F);
        conta02.sacar(150.00F);
        conta02.taxaDeManutencao();
        conta02.statusPrint();

        ContaBanco conta03 = new ContaBanco();
        conta03.setnumConta("0003");
        conta03.setTipoConta("CC");
        conta03.setNomeDono("Alcione Marrom");
        conta03.setSaldo(0.00F);
        conta03.setStatus(false);
        conta03.abrirConta();
        conta03.depositar(0.00F);
        conta03.sacar(5.00F);
        conta03.taxaDeManutencao();
        conta03.statusPrint();

        ContaBanco conta04 = new ContaBanco();
        conta04.setnumConta("0003");
        conta04.setTipoConta("CC");
        conta04.setNomeDono("Jesus Cristo");
        conta04.setSaldo(0.00F);
        conta04.setStatus(true);
        conta04.abrirConta();
        conta04.depositar(670.00F);
        conta04.sacar(conta04.getSaldo());
        conta04.fecharConta();
    }

}
