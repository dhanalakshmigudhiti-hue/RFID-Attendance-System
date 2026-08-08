#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

void setup()
{
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  Serial.println("RFID Attendance System");
  Serial.println("Scan Your Card");
}

void loop()
{
  if (!rfid.PICC_IsNewCardPresent())
    return;

  if (!rfid.PICC_ReadCardSerial())
    return;

  Serial.print("UID : ");

  String cardID = "";

  for (byte i = 0; i < rfid.uid.size; i++)
  {
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");

    cardID += String(rfid.uid.uidByte[i], HEX);
  }

  Serial.println();

  if(cardID == "d2a34f18")   // Replace with your RFID UID
  {
    Serial.println("Attendance Marked");
  }
  else
  {
    Serial.println("Unauthorized Card");
  }

  delay(2000);
}