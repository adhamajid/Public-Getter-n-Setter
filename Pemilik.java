public class Pemilik {
    private String nama;
    private Mobil mobil;

    public Pemilik(String nama, Mobil mobil) {
        this.nama = nama;
        this.mobil = mobil;
    }

    public void tampilkanInfoPemilik() {
        System.out.println("Nama Pemilik: " + nama);
        mobil.tampilkanInfo();
    }
}