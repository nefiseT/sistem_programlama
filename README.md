**Sakarya Üniversitesi
**Sistem Programlama Dersi Ödevi


# Nefise Türkoğlu - G211210022 (2A)

proje amacı: C dilini ve libfdr kütüphanesini kullanarak bir girdi dosyasının okunması, anazliz edilmesi, elde edilen veri değerleriyle yeni bir sonuç dosyasının oluşturulması. Bu işlemleri yaparken metin dosyası olarak sadece .dat uzantılı dosyalar ile çalışılacak ve harici dosyalarda uyarı mesajı verilecektir.

Proje içeriği:

    Klasör Hiyerarşisi:
    odev/
├── makefile.c
├── src/
│   ├── komut_isle.h
│   ├── komut_isle.c
│   └── main.c
├── lib/
    └──libfdr                // libfdr kütüphanesi klasörü
        └── dllist.c
        └── dllist.h
        └── fields.c
        └── fields.h
        └── jrb.c
        └── jrb.h
        └── jval.c
        └── jval.h
        └── LICENSE
        └── Makefile
        └── README
   └── libfdr.a        // libfdr kütüphanesinin derlenmiş nesne dosyasını bulunduran klasör,
├── doc/
    └── README.md
    └──ornek_input_output.dat   
├── test/
    └── test.c
├── fonksiyonlar/
    └── fonksiyonlar.c
    └── fonksiyonlar.h
├── include/
    └── komutlar.h

    komut_isle.h: Komut işleme işlevleri için başlık dosyası.
    komut_isle.c: Komut işleme işlevlerini içeren kaynak dosyası.
    main.c: Programın ana işlevini içeren kaynak dosyası.
    Makefile: Programın derlenmesini ve çalıştırılmasını otomatikleştiren kod dosyası 

Programı çalıştırırken karşılaştığım ve çözemediğim sorunlardan dolayı örnek ekran çıktısı ekleyemedim.

