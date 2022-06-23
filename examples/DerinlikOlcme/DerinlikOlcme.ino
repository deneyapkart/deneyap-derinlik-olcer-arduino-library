/*
 *   Derinlik Ölçme örneği,
 *   
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır. 
 *   Sensörden gelen mesafe verilerini okumaktadır. Mesafe verilerini seri terminale yazdırmaktadır. 
 *   
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *   
 *   Bu örnek Deneyap Derinlik Ölçer için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-derinlik-olcer-arduino-library <------
 *     
*/
#include <Deneyap_DerinlikOlcer.h>                              // Deneyap_DerinlikOlcer.h kütüphanesi eklenmesi

TofRangeFinder Mesafe;                                          // TofRangeFinder için class tanımlanması

void setup() {
    Serial.begin(115200);                                       // Seri haberleşme başlatılması
    if (!Mesafe.begin(0x29)) {                                  // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
        Serial.println("VL53L0X I2C bağlantısı başarısız ");    // I2C bağlantısı başarısız olursa seri terminale yazdırılması
        while(1);
    }
}

void loop() {
    Serial.print("Uzaklık: ");
    Serial.println(Mesafe.ReadDistance());                      // Ölçüm yapılması ve Seri Terminale veri gönderilmesi
    delay(50);
}
