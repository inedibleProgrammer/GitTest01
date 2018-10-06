#include <Arduino.h>
#include <stdint.h>
#include <stdbool.h>

void setup()
{
    Serial.begin(9600);
}

bool ledOn = false;

void loop()
{
    if(!ledOn)
    {
        Serial.println("This is a first message ");
        Serial.println("This is a second message");
        ledOn = true;
    }
}