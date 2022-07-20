import com.classes.Caneta;

public class App {
    private static final float _0_1F = 0.1f;

    public static void main(String[] args) throws Exception {
        Caneta c1 = new Caneta();
        c1.modelo = "Bic";
        c1.cor = "Vermelha";
        c1.ponta = _0_1F;
        c1.carga = 60;
        c1.destampar();
        c1.status();
        c1.rabiscar();
        
        Caneta c2 = new Caneta();
        c2.cor = "Amarela";
        c2.ponta = 0.5F;
        c2.tampar();
        c2.status();
        c2.rabiscar();

    }
}
