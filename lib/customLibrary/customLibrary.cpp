#include <Arduino.h>
#include <customLibrary.h>

IO::IO(){}
IO::IO(int _pin, String _name, int _mode)
{
    pin = _pin;
    name = _name;
    mode = _mode;
}
int IO::getStatus()
{
    status = digitalRead(pin);
    return status;
}
void IO::printInfo()
{
    Serial.print("\n");
    Serial.print("Pin: ");
    Serial.print(pin);
    Serial.print("\n");
    Serial.print("Name: ");
    Serial.print(name);
    Serial.print("\n");
    Serial.print("Mode: ");
    if (mode == 5)
    {
        Serial.print("INPUT_PULLUP");
    }
    if (mode == 3)
    {
        Serial.print("OUTPUT");
    }
    Serial.print("\n");
    Serial.print("Status: ");
    Serial.print(digitalRead(pin));
    Serial.print("\n");
}
void IO::updateStatus()
{
    status = digitalRead(pin);
}
void IO:: setStatus(int _status){
    digitalWrite(pin,_status);
}
void IO::config()
{
    pinMode(pin, mode);
}

Input::Input(){}
Input::Input(int _pin, String _name, int _mode) : IO(_pin, _name, _mode)
{
    config();
}

Output::Output(){}
Output::Output(int _pin, String _name, int _mode) : IO(_pin, _name, _mode)
{
    config();
}
void Output::changeStatus(int _status)
{
   setStatus(_status); 
}

SmartDevice::SmartDevice(){}
void SmartDevice:: automation(Input _input0, Output _output0){
    if(_input0.getStatus()==1){_output0.changeStatus(1);}
    else{_output0.changeStatus(0);}
}