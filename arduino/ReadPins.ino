/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13. 
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead(). 
 
 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground
 
 * Note: because most Arduinos have a built-in LED attached 
 to pin 13 on the board, the LED is optional.
 
 
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/AnalogInput
 
 */

int orange = A0;    // select the input pin for the potentiometer
int green = A1;
int blue = A2;
//int ledPin = 13;      // select the pin for the LED
int orangeValues[200];  // variable to store the value coming from the sensor
int greenValues[200];
int blueValues[200];
int i = 0;
unsigned long start = 0;
unsigned long _end = 0;

void setup() {
  // declare the ledPin as an OUTPUT:
  //pinMode(ledPin, OUTPUT);
  //pinMode(white, INPUT);
  //pinMode(grey, INPUT);
  Serial.begin(115200);
  
}

void loop() {
  // read the value from the sensor:
  start = millis();

orangeValues[0] = analogRead(orange);
greenValues[0] = analogRead(green);
blueValues[0] = analogRead(blue);
orangeValues[1] = analogRead(orange);
greenValues[1] = analogRead(green);
blueValues[1] = analogRead(blue);
orangeValues[2] = analogRead(orange);
greenValues[2] = analogRead(green);
blueValues[2] = analogRead(blue);
orangeValues[3] = analogRead(orange);
greenValues[3] = analogRead(green);
blueValues[3] = analogRead(blue);
orangeValues[4] = analogRead(orange);
greenValues[4] = analogRead(green);
blueValues[4] = analogRead(blue);
orangeValues[5] = analogRead(orange);
greenValues[5] = analogRead(green);
blueValues[5] = analogRead(blue);
orangeValues[6] = analogRead(orange);
greenValues[6] = analogRead(green);
blueValues[6] = analogRead(blue);
orangeValues[7] = analogRead(orange);
greenValues[7] = analogRead(green);
blueValues[7] = analogRead(blue);
orangeValues[8] = analogRead(orange);
greenValues[8] = analogRead(green);
blueValues[8] = analogRead(blue);
orangeValues[9] = analogRead(orange);
greenValues[9] = analogRead(green);
blueValues[9] = analogRead(blue);
orangeValues[10] = analogRead(orange);
greenValues[10] = analogRead(green);
blueValues[10] = analogRead(blue);
orangeValues[11] = analogRead(orange);
greenValues[11] = analogRead(green);
blueValues[11] = analogRead(blue);
orangeValues[12] = analogRead(orange);
greenValues[12] = analogRead(green);
blueValues[12] = analogRead(blue);
orangeValues[13] = analogRead(orange);
greenValues[13] = analogRead(green);
blueValues[13] = analogRead(blue);
orangeValues[14] = analogRead(orange);
greenValues[14] = analogRead(green);
blueValues[14] = analogRead(blue);
orangeValues[15] = analogRead(orange);
greenValues[15] = analogRead(green);
blueValues[15] = analogRead(blue);
orangeValues[16] = analogRead(orange);
greenValues[16] = analogRead(green);
blueValues[16] = analogRead(blue);
orangeValues[17] = analogRead(orange);
greenValues[17] = analogRead(green);
blueValues[17] = analogRead(blue);
orangeValues[18] = analogRead(orange);
greenValues[18] = analogRead(green);
blueValues[18] = analogRead(blue);
orangeValues[19] = analogRead(orange);
greenValues[19] = analogRead(green);
blueValues[19] = analogRead(blue);
orangeValues[20] = analogRead(orange);
greenValues[20] = analogRead(green);
blueValues[20] = analogRead(blue);
orangeValues[21] = analogRead(orange);
greenValues[21] = analogRead(green);
blueValues[21] = analogRead(blue);
orangeValues[22] = analogRead(orange);
greenValues[22] = analogRead(green);
blueValues[22] = analogRead(blue);
orangeValues[23] = analogRead(orange);
greenValues[23] = analogRead(green);
blueValues[23] = analogRead(blue);
orangeValues[24] = analogRead(orange);
greenValues[24] = analogRead(green);
blueValues[24] = analogRead(blue);
orangeValues[25] = analogRead(orange);
greenValues[25] = analogRead(green);
blueValues[25] = analogRead(blue);
orangeValues[26] = analogRead(orange);
greenValues[26] = analogRead(green);
blueValues[26] = analogRead(blue);
orangeValues[27] = analogRead(orange);
greenValues[27] = analogRead(green);
blueValues[27] = analogRead(blue);
orangeValues[28] = analogRead(orange);
greenValues[28] = analogRead(green);
blueValues[28] = analogRead(blue);
orangeValues[29] = analogRead(orange);
greenValues[29] = analogRead(green);
blueValues[29] = analogRead(blue);
orangeValues[30] = analogRead(orange);
greenValues[30] = analogRead(green);
blueValues[30] = analogRead(blue);
orangeValues[31] = analogRead(orange);
greenValues[31] = analogRead(green);
blueValues[31] = analogRead(blue);
orangeValues[32] = analogRead(orange);
greenValues[32] = analogRead(green);
blueValues[32] = analogRead(blue);
orangeValues[33] = analogRead(orange);
greenValues[33] = analogRead(green);
blueValues[33] = analogRead(blue);
orangeValues[34] = analogRead(orange);
greenValues[34] = analogRead(green);
blueValues[34] = analogRead(blue);
orangeValues[35] = analogRead(orange);
greenValues[35] = analogRead(green);
blueValues[35] = analogRead(blue);
orangeValues[36] = analogRead(orange);
greenValues[36] = analogRead(green);
blueValues[36] = analogRead(blue);
orangeValues[37] = analogRead(orange);
greenValues[37] = analogRead(green);
blueValues[37] = analogRead(blue);
orangeValues[38] = analogRead(orange);
greenValues[38] = analogRead(green);
blueValues[38] = analogRead(blue);
orangeValues[39] = analogRead(orange);
greenValues[39] = analogRead(green);
blueValues[39] = analogRead(blue);
orangeValues[40] = analogRead(orange);
greenValues[40] = analogRead(green);
blueValues[40] = analogRead(blue);
orangeValues[41] = analogRead(orange);
greenValues[41] = analogRead(green);
blueValues[41] = analogRead(blue);
orangeValues[42] = analogRead(orange);
greenValues[42] = analogRead(green);
blueValues[42] = analogRead(blue);
orangeValues[43] = analogRead(orange);
greenValues[43] = analogRead(green);
blueValues[43] = analogRead(blue);
orangeValues[44] = analogRead(orange);
greenValues[44] = analogRead(green);
blueValues[44] = analogRead(blue);
orangeValues[45] = analogRead(orange);
greenValues[45] = analogRead(green);
blueValues[45] = analogRead(blue);
orangeValues[46] = analogRead(orange);
greenValues[46] = analogRead(green);
blueValues[46] = analogRead(blue);
orangeValues[47] = analogRead(orange);
greenValues[47] = analogRead(green);
blueValues[47] = analogRead(blue);
orangeValues[48] = analogRead(orange);
greenValues[48] = analogRead(green);
blueValues[48] = analogRead(blue);
orangeValues[49] = analogRead(orange);
greenValues[49] = analogRead(green);
blueValues[49] = analogRead(blue);
orangeValues[50] = analogRead(orange);
greenValues[50] = analogRead(green);
blueValues[50] = analogRead(blue);
orangeValues[51] = analogRead(orange);
greenValues[51] = analogRead(green);
blueValues[51] = analogRead(blue);
orangeValues[52] = analogRead(orange);
greenValues[52] = analogRead(green);
blueValues[52] = analogRead(blue);
orangeValues[53] = analogRead(orange);
greenValues[53] = analogRead(green);
blueValues[53] = analogRead(blue);
orangeValues[54] = analogRead(orange);
greenValues[54] = analogRead(green);
blueValues[54] = analogRead(blue);
orangeValues[55] = analogRead(orange);
greenValues[55] = analogRead(green);
blueValues[55] = analogRead(blue);
orangeValues[56] = analogRead(orange);
greenValues[56] = analogRead(green);
blueValues[56] = analogRead(blue);
orangeValues[57] = analogRead(orange);
greenValues[57] = analogRead(green);
blueValues[57] = analogRead(blue);
orangeValues[58] = analogRead(orange);
greenValues[58] = analogRead(green);
blueValues[58] = analogRead(blue);
orangeValues[59] = analogRead(orange);
greenValues[59] = analogRead(green);
blueValues[59] = analogRead(blue);
orangeValues[60] = analogRead(orange);
greenValues[60] = analogRead(green);
blueValues[60] = analogRead(blue);
orangeValues[61] = analogRead(orange);
greenValues[61] = analogRead(green);
blueValues[61] = analogRead(blue);
orangeValues[62] = analogRead(orange);
greenValues[62] = analogRead(green);
blueValues[62] = analogRead(blue);
orangeValues[63] = analogRead(orange);
greenValues[63] = analogRead(green);
blueValues[63] = analogRead(blue);
orangeValues[64] = analogRead(orange);
greenValues[64] = analogRead(green);
blueValues[64] = analogRead(blue);
orangeValues[65] = analogRead(orange);
greenValues[65] = analogRead(green);
blueValues[65] = analogRead(blue);
orangeValues[66] = analogRead(orange);
greenValues[66] = analogRead(green);
blueValues[66] = analogRead(blue);
orangeValues[67] = analogRead(orange);
greenValues[67] = analogRead(green);
blueValues[67] = analogRead(blue);
orangeValues[68] = analogRead(orange);
greenValues[68] = analogRead(green);
blueValues[68] = analogRead(blue);
orangeValues[69] = analogRead(orange);
greenValues[69] = analogRead(green);
blueValues[69] = analogRead(blue);
orangeValues[70] = analogRead(orange);
greenValues[70] = analogRead(green);
blueValues[70] = analogRead(blue);
orangeValues[71] = analogRead(orange);
greenValues[71] = analogRead(green);
blueValues[71] = analogRead(blue);
orangeValues[72] = analogRead(orange);
greenValues[72] = analogRead(green);
blueValues[72] = analogRead(blue);
orangeValues[73] = analogRead(orange);
greenValues[73] = analogRead(green);
blueValues[73] = analogRead(blue);
orangeValues[74] = analogRead(orange);
greenValues[74] = analogRead(green);
blueValues[74] = analogRead(blue);
orangeValues[75] = analogRead(orange);
greenValues[75] = analogRead(green);
blueValues[75] = analogRead(blue);
orangeValues[76] = analogRead(orange);
greenValues[76] = analogRead(green);
blueValues[76] = analogRead(blue);
orangeValues[77] = analogRead(orange);
greenValues[77] = analogRead(green);
blueValues[77] = analogRead(blue);
orangeValues[78] = analogRead(orange);
greenValues[78] = analogRead(green);
blueValues[78] = analogRead(blue);
orangeValues[79] = analogRead(orange);
greenValues[79] = analogRead(green);
blueValues[79] = analogRead(blue);
orangeValues[80] = analogRead(orange);
greenValues[80] = analogRead(green);
blueValues[80] = analogRead(blue);
orangeValues[81] = analogRead(orange);
greenValues[81] = analogRead(green);
blueValues[81] = analogRead(blue);
orangeValues[82] = analogRead(orange);
greenValues[82] = analogRead(green);
blueValues[82] = analogRead(blue);
orangeValues[83] = analogRead(orange);
greenValues[83] = analogRead(green);
blueValues[83] = analogRead(blue);
orangeValues[84] = analogRead(orange);
greenValues[84] = analogRead(green);
blueValues[84] = analogRead(blue);
orangeValues[85] = analogRead(orange);
greenValues[85] = analogRead(green);
blueValues[85] = analogRead(blue);
orangeValues[86] = analogRead(orange);
greenValues[86] = analogRead(green);
blueValues[86] = analogRead(blue);
orangeValues[87] = analogRead(orange);
greenValues[87] = analogRead(green);
blueValues[87] = analogRead(blue);
orangeValues[88] = analogRead(orange);
greenValues[88] = analogRead(green);
blueValues[88] = analogRead(blue);
orangeValues[89] = analogRead(orange);
greenValues[89] = analogRead(green);
blueValues[89] = analogRead(blue);
orangeValues[90] = analogRead(orange);
greenValues[90] = analogRead(green);
blueValues[90] = analogRead(blue);
orangeValues[91] = analogRead(orange);
greenValues[91] = analogRead(green);
blueValues[91] = analogRead(blue);
orangeValues[92] = analogRead(orange);
greenValues[92] = analogRead(green);
blueValues[92] = analogRead(blue);
orangeValues[93] = analogRead(orange);
greenValues[93] = analogRead(green);
blueValues[93] = analogRead(blue);
orangeValues[94] = analogRead(orange);
greenValues[94] = analogRead(green);
blueValues[94] = analogRead(blue);
orangeValues[95] = analogRead(orange);
greenValues[95] = analogRead(green);
blueValues[95] = analogRead(blue);
orangeValues[96] = analogRead(orange);
greenValues[96] = analogRead(green);
blueValues[96] = analogRead(blue);
orangeValues[97] = analogRead(orange);
greenValues[97] = analogRead(green);
blueValues[97] = analogRead(blue);
orangeValues[98] = analogRead(orange);
greenValues[98] = analogRead(green);
blueValues[98] = analogRead(blue);
orangeValues[99] = analogRead(orange);
greenValues[99] = analogRead(green);
blueValues[99] = analogRead(blue);
orangeValues[100] = analogRead(orange);
greenValues[100] = analogRead(green);
blueValues[100] = analogRead(blue);
orangeValues[101] = analogRead(orange);
greenValues[101] = analogRead(green);
blueValues[101] = analogRead(blue);
orangeValues[102] = analogRead(orange);
greenValues[102] = analogRead(green);
blueValues[102] = analogRead(blue);
orangeValues[103] = analogRead(orange);
greenValues[103] = analogRead(green);
blueValues[103] = analogRead(blue);
orangeValues[104] = analogRead(orange);
greenValues[104] = analogRead(green);
blueValues[104] = analogRead(blue);
orangeValues[105] = analogRead(orange);
greenValues[105] = analogRead(green);
blueValues[105] = analogRead(blue);
orangeValues[106] = analogRead(orange);
greenValues[106] = analogRead(green);
blueValues[106] = analogRead(blue);
orangeValues[107] = analogRead(orange);
greenValues[107] = analogRead(green);
blueValues[107] = analogRead(blue);
orangeValues[108] = analogRead(orange);
greenValues[108] = analogRead(green);
blueValues[108] = analogRead(blue);
orangeValues[109] = analogRead(orange);
greenValues[109] = analogRead(green);
blueValues[109] = analogRead(blue);
orangeValues[110] = analogRead(orange);
greenValues[110] = analogRead(green);
blueValues[110] = analogRead(blue);
orangeValues[111] = analogRead(orange);
greenValues[111] = analogRead(green);
blueValues[111] = analogRead(blue);
orangeValues[112] = analogRead(orange);
greenValues[112] = analogRead(green);
blueValues[112] = analogRead(blue);
orangeValues[113] = analogRead(orange);
greenValues[113] = analogRead(green);
blueValues[113] = analogRead(blue);
orangeValues[114] = analogRead(orange);
greenValues[114] = analogRead(green);
blueValues[114] = analogRead(blue);
orangeValues[115] = analogRead(orange);
greenValues[115] = analogRead(green);
blueValues[115] = analogRead(blue);
orangeValues[116] = analogRead(orange);
greenValues[116] = analogRead(green);
blueValues[116] = analogRead(blue);
orangeValues[117] = analogRead(orange);
greenValues[117] = analogRead(green);
blueValues[117] = analogRead(blue);
orangeValues[118] = analogRead(orange);
greenValues[118] = analogRead(green);
blueValues[118] = analogRead(blue);
orangeValues[119] = analogRead(orange);
greenValues[119] = analogRead(green);
blueValues[119] = analogRead(blue);
orangeValues[120] = analogRead(orange);
greenValues[120] = analogRead(green);
blueValues[120] = analogRead(blue);
orangeValues[121] = analogRead(orange);
greenValues[121] = analogRead(green);
blueValues[121] = analogRead(blue);
orangeValues[122] = analogRead(orange);
greenValues[122] = analogRead(green);
blueValues[122] = analogRead(blue);
orangeValues[123] = analogRead(orange);
greenValues[123] = analogRead(green);
blueValues[123] = analogRead(blue);
orangeValues[124] = analogRead(orange);
greenValues[124] = analogRead(green);
blueValues[124] = analogRead(blue);
orangeValues[125] = analogRead(orange);
greenValues[125] = analogRead(green);
blueValues[125] = analogRead(blue);
orangeValues[126] = analogRead(orange);
greenValues[126] = analogRead(green);
blueValues[126] = analogRead(blue);
orangeValues[127] = analogRead(orange);
greenValues[127] = analogRead(green);
blueValues[127] = analogRead(blue);
orangeValues[128] = analogRead(orange);
greenValues[128] = analogRead(green);
blueValues[128] = analogRead(blue);
orangeValues[129] = analogRead(orange);
greenValues[129] = analogRead(green);
blueValues[129] = analogRead(blue);
orangeValues[130] = analogRead(orange);
greenValues[130] = analogRead(green);
blueValues[130] = analogRead(blue);
orangeValues[131] = analogRead(orange);
greenValues[131] = analogRead(green);
blueValues[131] = analogRead(blue);
orangeValues[132] = analogRead(orange);
greenValues[132] = analogRead(green);
blueValues[132] = analogRead(blue);
orangeValues[133] = analogRead(orange);
greenValues[133] = analogRead(green);
blueValues[133] = analogRead(blue);
orangeValues[134] = analogRead(orange);
greenValues[134] = analogRead(green);
blueValues[134] = analogRead(blue);
orangeValues[135] = analogRead(orange);
greenValues[135] = analogRead(green);
blueValues[135] = analogRead(blue);
orangeValues[136] = analogRead(orange);
greenValues[136] = analogRead(green);
blueValues[136] = analogRead(blue);
orangeValues[137] = analogRead(orange);
greenValues[137] = analogRead(green);
blueValues[137] = analogRead(blue);
orangeValues[138] = analogRead(orange);
greenValues[138] = analogRead(green);
blueValues[138] = analogRead(blue);
orangeValues[139] = analogRead(orange);
greenValues[139] = analogRead(green);
blueValues[139] = analogRead(blue);
orangeValues[140] = analogRead(orange);
greenValues[140] = analogRead(green);
blueValues[140] = analogRead(blue);
orangeValues[141] = analogRead(orange);
greenValues[141] = analogRead(green);
blueValues[141] = analogRead(blue);
orangeValues[142] = analogRead(orange);
greenValues[142] = analogRead(green);
blueValues[142] = analogRead(blue);
orangeValues[143] = analogRead(orange);
greenValues[143] = analogRead(green);
blueValues[143] = analogRead(blue);
orangeValues[144] = analogRead(orange);
greenValues[144] = analogRead(green);
blueValues[144] = analogRead(blue);
orangeValues[145] = analogRead(orange);
greenValues[145] = analogRead(green);
blueValues[145] = analogRead(blue);
orangeValues[146] = analogRead(orange);
greenValues[146] = analogRead(green);
blueValues[146] = analogRead(blue);
orangeValues[147] = analogRead(orange);
greenValues[147] = analogRead(green);
blueValues[147] = analogRead(blue);
orangeValues[148] = analogRead(orange);
greenValues[148] = analogRead(green);
blueValues[148] = analogRead(blue);
orangeValues[149] = analogRead(orange);
greenValues[149] = analogRead(green);
blueValues[149] = analogRead(blue);
orangeValues[150] = analogRead(orange);
greenValues[150] = analogRead(green);
blueValues[150] = analogRead(blue);
orangeValues[151] = analogRead(orange);
greenValues[151] = analogRead(green);
blueValues[151] = analogRead(blue);
orangeValues[152] = analogRead(orange);
greenValues[152] = analogRead(green);
blueValues[152] = analogRead(blue);
orangeValues[153] = analogRead(orange);
greenValues[153] = analogRead(green);
blueValues[153] = analogRead(blue);
orangeValues[154] = analogRead(orange);
greenValues[154] = analogRead(green);
blueValues[154] = analogRead(blue);
orangeValues[155] = analogRead(orange);
greenValues[155] = analogRead(green);
blueValues[155] = analogRead(blue);
orangeValues[156] = analogRead(orange);
greenValues[156] = analogRead(green);
blueValues[156] = analogRead(blue);
orangeValues[157] = analogRead(orange);
greenValues[157] = analogRead(green);
blueValues[157] = analogRead(blue);
orangeValues[158] = analogRead(orange);
greenValues[158] = analogRead(green);
blueValues[158] = analogRead(blue);
orangeValues[159] = analogRead(orange);
greenValues[159] = analogRead(green);
blueValues[159] = analogRead(blue);
orangeValues[160] = analogRead(orange);
greenValues[160] = analogRead(green);
blueValues[160] = analogRead(blue);
orangeValues[161] = analogRead(orange);
greenValues[161] = analogRead(green);
blueValues[161] = analogRead(blue);
orangeValues[162] = analogRead(orange);
greenValues[162] = analogRead(green);
blueValues[162] = analogRead(blue);
orangeValues[163] = analogRead(orange);
greenValues[163] = analogRead(green);
blueValues[163] = analogRead(blue);
orangeValues[164] = analogRead(orange);
greenValues[164] = analogRead(green);
blueValues[164] = analogRead(blue);
orangeValues[165] = analogRead(orange);
greenValues[165] = analogRead(green);
blueValues[165] = analogRead(blue);
orangeValues[166] = analogRead(orange);
greenValues[166] = analogRead(green);
blueValues[166] = analogRead(blue);
orangeValues[167] = analogRead(orange);
greenValues[167] = analogRead(green);
blueValues[167] = analogRead(blue);
orangeValues[168] = analogRead(orange);
greenValues[168] = analogRead(green);
blueValues[168] = analogRead(blue);
orangeValues[169] = analogRead(orange);
greenValues[169] = analogRead(green);
blueValues[169] = analogRead(blue);
orangeValues[170] = analogRead(orange);
greenValues[170] = analogRead(green);
blueValues[170] = analogRead(blue);
orangeValues[171] = analogRead(orange);
greenValues[171] = analogRead(green);
blueValues[171] = analogRead(blue);
orangeValues[172] = analogRead(orange);
greenValues[172] = analogRead(green);
blueValues[172] = analogRead(blue);
orangeValues[173] = analogRead(orange);
greenValues[173] = analogRead(green);
blueValues[173] = analogRead(blue);
orangeValues[174] = analogRead(orange);
greenValues[174] = analogRead(green);
blueValues[174] = analogRead(blue);
orangeValues[175] = analogRead(orange);
greenValues[175] = analogRead(green);
blueValues[175] = analogRead(blue);
orangeValues[176] = analogRead(orange);
greenValues[176] = analogRead(green);
blueValues[176] = analogRead(blue);
orangeValues[177] = analogRead(orange);
greenValues[177] = analogRead(green);
blueValues[177] = analogRead(blue);
orangeValues[178] = analogRead(orange);
greenValues[178] = analogRead(green);
blueValues[178] = analogRead(blue);
orangeValues[179] = analogRead(orange);
greenValues[179] = analogRead(green);
blueValues[179] = analogRead(blue);
orangeValues[180] = analogRead(orange);
greenValues[180] = analogRead(green);
blueValues[180] = analogRead(blue);
orangeValues[181] = analogRead(orange);
greenValues[181] = analogRead(green);
blueValues[181] = analogRead(blue);
orangeValues[182] = analogRead(orange);
greenValues[182] = analogRead(green);
blueValues[182] = analogRead(blue);
orangeValues[183] = analogRead(orange);
greenValues[183] = analogRead(green);
blueValues[183] = analogRead(blue);
orangeValues[184] = analogRead(orange);
greenValues[184] = analogRead(green);
blueValues[184] = analogRead(blue);
orangeValues[185] = analogRead(orange);
greenValues[185] = analogRead(green);
blueValues[185] = analogRead(blue);
orangeValues[186] = analogRead(orange);
greenValues[186] = analogRead(green);
blueValues[186] = analogRead(blue);
orangeValues[187] = analogRead(orange);
greenValues[187] = analogRead(green);
blueValues[187] = analogRead(blue);
orangeValues[188] = analogRead(orange);
greenValues[188] = analogRead(green);
blueValues[188] = analogRead(blue);
orangeValues[189] = analogRead(orange);
greenValues[189] = analogRead(green);
blueValues[189] = analogRead(blue);
orangeValues[190] = analogRead(orange);
greenValues[190] = analogRead(green);
blueValues[190] = analogRead(blue);
orangeValues[191] = analogRead(orange);
greenValues[191] = analogRead(green);
blueValues[191] = analogRead(blue);
orangeValues[192] = analogRead(orange);
greenValues[192] = analogRead(green);
blueValues[192] = analogRead(blue);
orangeValues[193] = analogRead(orange);
greenValues[193] = analogRead(green);
blueValues[193] = analogRead(blue);
orangeValues[194] = analogRead(orange);
greenValues[194] = analogRead(green);
blueValues[194] = analogRead(blue);
orangeValues[195] = analogRead(orange);
greenValues[195] = analogRead(green);
blueValues[195] = analogRead(blue);
orangeValues[196] = analogRead(orange);
greenValues[196] = analogRead(green);
blueValues[196] = analogRead(blue);
orangeValues[197] = analogRead(orange);
greenValues[197] = analogRead(green);
blueValues[197] = analogRead(blue);
orangeValues[198] = analogRead(orange);
greenValues[198] = analogRead(green);
blueValues[198] = analogRead(blue);
orangeValues[199] = analogRead(orange);
greenValues[199] = analogRead(green);
blueValues[199] = analogRead(blue);


  _end = millis();
  Serial.print(start);
  Serial.print('\n');
  for (i = 0; i < 200; i++) {
    Serial.print(orangeValues[i]);
    Serial.print(' ');
    Serial.print(greenValues[i]);
    Serial.print(' ');
    Serial.print(blueValues[i]);
    Serial.print('\n');
  }
  Serial.print(_end);
  Serial.print('\n');
  //delay(1);
}