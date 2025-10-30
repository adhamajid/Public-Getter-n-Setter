import java.util.*;

public class Main {
    public static void main(String[] args) {
        Mobil m = new Mobil("Toyota", 2020);
        Pemilik p = new Pemilik("John Doe", m);
        p.tampilkanInfoPemilik();
    }
}
