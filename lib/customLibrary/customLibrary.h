#ifndef customLibrary_H
#define customLibrary_H
#include <Arduino.h>
class IO
{
private:
    int pin;
    String name;
    int status;
    int mode;

public:
    IO();
    IO(int _pin, String _name, int _mode);
    int getStatus();
    void printInfo();
    void updateStatus();
    void config();
    void setStatus(int _status);
};
class Input : public IO
{
private:
public:
    Input();
    Input(int _pin, String _name, int _mode);
};
class Output : public IO
{
private:
public:
    Output();
    Output(int _pin, String _name, int _mode);
    void changeStatus(int _status);
};

class SmartDevice:public Input, public Output
{
private:
public:
SmartDevice();
void automation(Input _input0, Output _output0);
void automation(Input _input0, Output _output0, Output _output1);
void automation(Input _input0, Input _input1, Output _output0);
void automation(Input _input0, Input _input1,Input _input2, Output _output0);
void automation(Input _input0, Input _input1,Input _input2, Input _input3,Output _output0);
void automation(Input _input0, Input _input1,Input _input2, Input _input3, Input _input4,Output _output0);
};
#endif