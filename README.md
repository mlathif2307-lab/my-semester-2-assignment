# Tugas C++ Semester 2

Kumpulan program latihan C++ dari materi semester 2: looping, percabangan, function, vector, dan struct.

## Daftar Program

| No | File | Topik |
|----|------|-------|
| 01 | [kalkulator_sederhana.cpp](src/01_kalkulator_sederhana.cpp) | Operator aritmatika dasar (+, -, *, /) |
| 02 | [piramida_bintang.cpp](src/02_piramida_bintang.cpp) | Nested loop, pola piramida |
| 03 | [input_angka_berulang.cpp](src/03_input_angka_berulang.cpp) | While loop dengan kondisi berhenti |
| 04 | [cek_bilangan_prima.cpp](src/04_cek_bilangan_prima.cpp) | Percabangan & loop untuk cek prima |
| 05 | [cari_angka_genap_rentang.cpp](src/05_cari_angka_genap_rentang.cpp) | For loop, modulo |
| 06 | [menu_pilihan_matematika.cpp](src/06_menu_pilihan_matematika.cpp) | Switch-case, menu interaktif |
| 07 | [function_prima_genap.cpp](src/07_function_prima_genap.cpp) | Function dengan return bool |
| 08 | [vector_cek_prima.cpp](src/08_vector_cek_prima.cpp) | Vector (dynamic array) |
| 09 | [menu_bilangan_prima_vector.cpp](src/09_menu_bilangan_prima_vector.cpp) | Do-while, vector, menu |
| 10 | [menu_kreatif_prima_segitiga.cpp](src/10_menu_kreatif_prima_segitiga.cpp) | Gabungan vector & function |
| 11 | [struct_mahasiswa.cpp](src/11_struct_mahasiswa.cpp) | Struct & array of struct |
| 12 | [struct_data_akademik_lengkap.cpp](src/12_struct_data_akademik_lengkap.cpp) | Multiple struct (Mahasiswa, Dosen, Matkul) |
| 13 | [pass_by_value_struct.cpp](src/13_pass_by_value_struct.cpp) | Konsep pass by value pada struct |
| 14 | [struct_bersarang_karyawan.cpp](src/14_struct_bersarang_karyawan.cpp) | Nested struct (struct dalam struct) |

## Konsep yang Dipelajari

- **Looping** — `for`, `while`, `do-while`
- **Percabangan** — `if-else`, `switch-case`
- **Function** — parameter, return value, pass by value
- **Vector** — dynamic array, `push_back`, iterasi
- **Struct** — definisi struct, array of struct, nested struct

## Cara Menjalankan

Pastikan sudah terinstall compiler C++ (g++ atau setara), lalu jalankan:

```bash
g++ src/01_kalkulator_sederhana.cpp -o kalkulator
./kalkulator
```

Ganti nama file sesuai program yang ingin dijalankan.

## Catatan Akses Variabel (Public vs Private)

- **Public** — variabel yang bisa diakses dari luar kelas
- **Private** — variabel yang hanya bisa diakses dari dalam kelas itu sendiri

## Lisensi

Project ini menggunakan [Lisensi MIT](LICENSE).
