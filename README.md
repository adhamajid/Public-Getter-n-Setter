# Public-Getter-n-Setter
Level2 dari Getter n Setter sebelumnya

Kenapa variabelnya private, tapi getter/setter-nya public?
Karena konsep enkapsulasi

Enkapsulasi = menyembunyikan data internal dari akses langsung luar kelas.

Analogi sederhana:

Bayangkan sebuah mesin mobil 🚗.
Kamu (pengguna) tidak boleh langsung menyentuh mesin (data internal = private),
tetapi kamu bisa menyalakan mobil lewat tombol Start (getter/setter = public).

💡 Jadi:

private = data disembunyikan, supaya tidak sembarangan diubah dari luar.

public getter/setter = cara resmi (aman) untuk membaca atau mengubah data tersebut.

Kalau getter/setter dibuat private, maka:

Class luar (misalnya Main atau Pemilik) tidak bisa mengakses data sama sekali,

Akibatnya, atribut merk dan tahun jadi “terkunci” di dalam kelas Mobil.
