#ifndef GSM_H
#define GSM_H

#include<SoftwareSerial.h>
SoftwareSerial ss(A0, A1); //RX TX



void send_sms(String number, String data1 );
void send_sms(String number, String data1)
{
  ss.println("AT");
  delay(1000);
  ss.println("AT+CMGF=1");
  delay(1000);
  ss.println("AT+CMGS=\"+91" + number + "\"\r");
  delay(1000);
  ss.println("https://www.google.com/search?q=12.8754%C2%B0+N%2C+80.0838%C2%B0+E&rlz=1C1VDKB_enIN1091IN1091&oq=12.8754%C2%B0+N%2C+80.0838%C2%B0+E&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIKCAEQABiABBiiBDIKCAIQABiABBiiBDIKCAMQABiABBiiBDIKCAQQABiABBiiBNIBCTE3NDFqMGoxNagCCLACAQ&sourceid=chrome&ie=UTF-8");
  delay(200);
  ss.println(char(26));
}
#endif
