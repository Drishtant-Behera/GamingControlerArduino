
int switch_pin = 15;
int x_pin = 27;
int y_pin = 26; 
int switch_pin2 = 2;
int x_pin2 = 25;
int y_pin2 = 33; 
void setup() {
  pinMode(switch_pin, INPUT);
  pinMode(switch_pin, INPUT);
  Serial.begin(115200);
}
void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(switch_pin));
  Serial.print("\n");
  Serial.print("X-axis1: ");
  Serial.print(analogRead(x_pin));
  Serial.print("\n");
  Serial.print("X-axis2: ");
  Serial.print(analogRead(x_pin2));
  Serial.print("\n");
  Serial.print("Y-axis1: ");
  Serial.print(analogRead(y_pin));
  Serial.print("\n");
  Serial.print("Y-axis2: ");
  Serial.print(analogRead(y_pin2));
  Serial.print("\n");
  delay(50);



