# Deneyap Derinlik Ölçer VL53L0X Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Derinlik Ölçer VL53L0X için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M06**, **mpv1.0**
- `MCU` VL53L0X
- `Ağırlık`
- `Modul Boyutları` 
- `I2C Adres` 0x29

| Adres |  | 
| :--- | :---     |
| 0x29 | varsayılan adres |

## :closed_book:Dokümanlar
Deneyap Derinlik Ölçer VL53L0X

[VL53L0X](https://www.st.com/content/ccc/resource/technical/document/datasheet/group3/b2/1e/33/77/c6/92/47/6b/DM00279086/files/DM00279086.pdf/jcr:content/translations/en.DM00279086.pdf)


[Arduino IDE'de Kütüphane Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Derinlik Ölçer VL53L0X
Bu Arduino kütüphanesi Deneyap Derinlik Ölçer VL53L0X'nin I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

1.0.1 - hata giderildi

## :rocket:Donanım Bağlantıları
- Deneyap Derinlik Ölçer ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

| Derinlik Ölçer | Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
| XSHT | Shut Down | | 
| GPIO | Çıktı Kesmesi | | 

## Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-derinlik-olcer-arduino-library/blob/master/LICENSE) dosyasını inceleyin.