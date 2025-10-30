// File: Mobil.java
public class Mobil {
    private String merk;
    private int tahun;

    public Mobil(String merk, int tahun) {
        this.merk = merk;
        this.tahun = tahun;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public String getMerk() {
        return merk;
    }

    public void tampilkanInfo() {
        System.out.println("Merk: " + merk + ", Tahun: " + tahun);
    }
}
