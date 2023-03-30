#include <Arduino.h>
#include <customLibrary.h>
Input sensor0(22,"MainRoomSensor_0", INPUT_PULLUP);
Input sensor1(23,"2ndFloorWashroom_0_Sensor_0",INPUT_PULLUP);
Input sensor2(24,"2ndFloorWashRoom_1_sensor_0",INPUT_PULLUP);
Input sensor3(25,"2ndFloorWashRoom_1_sensor_1",INPUT_PULLUP);
Input sensor4(26,"2ndFloorWashRoom_1_sensor_2",INPUT_PULLUP);
Input sensor5(27,"2ndFloorWashRoom_1_sensor_3",INPUT_PULLUP);
Input sensor6(28,"2ndFloorRow_0_Sensor_0",INPUT_PULLUP);
Input sensor7(29,"2ndFloorRow_0_Sensor_1",INPUT_PULLUP);
Input sensor8(30,"2ndFloorRow_0_Sensor_2",INPUT_PULLUP);
Input sensor9(31,"2ndFloorRow_0_Sensor_3",INPUT_PULLUP);
Input sensor10(32,"2ndFloorRow_0_Sensor_4",INPUT_PULLUP);
Input sensor11(33,"2ndFloorRow_0_Sensor_5",INPUT_PULLUP);
Input sensor12(34,"2ndFloorRow_0_Sensor_6",INPUT_PULLUP);
Input sensor13(35,"2ndFloorRow_0_Sensor_7",INPUT_PULLUP);
Input sensor14(36,"2ndFloorRow_0_Sensor_8",INPUT_PULLUP);
Input sensor15(37,"2ndFloorRow_0_Sensor_9",INPUT_PULLUP);
Input sensor16(38,"2ndFloorRow_1_Sensor_0",INPUT_PULLUP);
Input sensor17(39,"2ndFloorRow_1_Sensor_1",INPUT_PULLUP);
Input sensor18(40,"2ndFloorRow_1_Sensor_2",INPUT_PULLUP);
Input sensor19(41,"2ndFloorRow_1_Sensor_3",INPUT_PULLUP);
Input sensor20(42,"2ndFloorRow_1_Sensor_4",INPUT_PULLUP);
Input sensor21(43,"2ndFloorRow_1_Sensor_5",INPUT_PULLUP);
Input sensor22(44,"2ndFloorRow_1_Sensor_6",INPUT_PULLUP);
Input sensor23(45,"2ndFloorRow_2_Sensor_0",INPUT_PULLUP);
Input sensor24(46,"2ndFloorRow_2_Sensor_1",INPUT_PULLUP);
Input sensor25(47,"2ndFloorRow_2_Sensor_2",INPUT_PULLUP);
Input sensor26(48,"2ndFloorRow_2_Sensor_3",INPUT_PULLUP);
Input sensor27(49,"2ndFloorRow_2_Sensor_4",INPUT_PULLUP);
Input sensor28(50,"2ndFloorRow_3_Sensor_0",INPUT_PULLUP);
Input sensor29(51,"2ndFloorRow_3_Sensor_1",INPUT_PULLUP);
Input sensor30(52,"2ndFloorRow_3_Sensor_2",INPUT_PULLUP);
Input sensor31(53,"2ndFloorRow_3_Sensor_3",INPUT_PULLUP);
Input sensor32(54,"2ndFloorRow_3_Sensor_4",INPUT_PULLUP);
Input sensor33(55,"2ndFloorRow_4_Sensor_0",INPUT_PULLUP);
Input sensor34(56,"2ndFloorRow_4_Sensor_1",INPUT_PULLUP);
Input sensor35(57,"2ndFloorRow_4_Sensor_2",INPUT_PULLUP);
Input sensor36(58,"2ndFloorRow_4_Sensor_3",INPUT_PULLUP);
Input sensor37(59,"2ndFloorRow_4_Sensor_4",INPUT_PULLUP);
Input sensor38(60,"2ndFloorRow_4_Sensor_5",INPUT_PULLUP);
Input sensor39(61,"2ndFloorRow_4_Sensor_6",INPUT_PULLUP);
Input sensor40(62,"2ndFloorRow_5_Sensor_0",INPUT_PULLUP);
Input sensor41(63,"2ndFloorRow_5_Sensor_1",INPUT_PULLUP);
Input sensor42(64,"2ndFloorRow_5_Sensor_2",INPUT_PULLUP);
Input sensor43(65,"2ndFloorRow_5_Sensor_3",INPUT_PULLUP);
Input sensor44(66,"2ndFloorRow_5_Sensor_4",INPUT_PULLUP);
Input sensor45(67,"2ndFloorRow_5_Sensor_5",INPUT_PULLUP);
Input sensor46(68,"2ndFloorRow_5_Sensor_6",INPUT_PULLUP);
Input sensor47(69,"2ndFloorRow_5_Sensor_7",INPUT_PULLUP);

Output light0(2, "MainRoomLight", OUTPUT);
Output light1(3,"WashRoom_0_Light_0",OUTPUT);
Output exhaust0(4,"WashRoom_0_Exhaust_0",OUTPUT);
Output light2(5,"WashRoom_1_Light_0",OUTPUT);
Output exhaust1(6,"WashRoom_1_Exhaust_0",OUTPUT);
Output light3(7,"2ndFloorRow_0_Light_0",OUTPUT);
Output light4(8,"2ndFloorRow_0_Light_1",OUTPUT);
Output light5(9,"2ndFloorRow_0_Light_2",OUTPUT);
Output light6(10,"2ndFloorRow_1_Light_0",OUTPUT);
Output light7(11,"2ndFloorRow_1_Light_1",OUTPUT);
Output light8(12,"2ndFloorRow_1_Light_2",OUTPUT);
Output light9(13,"2ndFloorRow_2_Light_0",OUTPUT);
Output light10(14,"2ndFloorRow_2_Light_1",OUTPUT);
Output light11(15,"2ndFloorRow_3_Light_0",OUTPUT);
Output light12(16,"2ndFloorRow_3_Light_1",OUTPUT);
Output light13(17,"2ndFloorRow_4_Light_0",OUTPUT);
Output light14(18,"2ndFloorRow_4_Light_1",OUTPUT);
Output light15(19,"2ndFloorRow_4_Light_2",OUTPUT);
Output light16(20,"2ndFloorRow_5_Light_0",OUTPUT);
Output light17(21,"2ndFloorRow_5_Light_1",OUTPUT);
Output light18(1,"2ndFloorRow_5_Light_2",OUTPUT);

void setup()
{
  Serial.begin(115200);
}

void loop()

{

}
