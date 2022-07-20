import com.classes.Caneta;

public class App {
    public static void main(String[] args) throws Exception {
        Caneta c1 = new Caneta();
        c1.status();

        Caneta c2 = new Caneta();
        c2.setModelo("Cis");
        c2.setCor("Verde");
        c2.setPonta(2.0f);
        c2.status();
    }
}