import com.classes.Caneta;

public class App {
    private static final float _0_1F = 0.1f;

    public static void main(String[] args) throws Exception {
        Caneta c1 = new Caneta();
        c1.modelo = "Bic Cristal";
        c1.cor = "Vermelho";
        // c1.ponta = 0.5f;
        // c1.carga = 50;
        // c1.tampa = true;
        // atributos com métodos de acesso private ou protected, vamos ver na próxima aula como nstanciar objetos com métodos de acesso "especiais"
        c1.status();
    }
}