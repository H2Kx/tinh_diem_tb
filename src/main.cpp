#include <Arduino.h>
// toan van he so 2
float tinh_diem_tb(float a, float b, float c)//lan luot la toan van anh 
{
float diem_trung_binh=(a*2+b*2+c)/5;
return diem_trung_binh;
}
float kq;
void setup()
{
Serial.begin(9600);
}
void loop()
{
kq=tinh_diem_tb(7,8,9);
Serial.println(kq);
delay(1000);
}
