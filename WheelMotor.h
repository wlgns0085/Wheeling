// Wheel
class Wheel{
    int speed, direction;
    int pin_motor, pin_brake, pin_direction;
  private:

  public:
    void Setup(int pin_motor, int pin_brake, int pin_direction);
    void Control(int speed, int direction);
    void Set_speed(int speed);
    void Set_direction(int direction);
}
void Wheel::Setup(int _pin_motor, int _pin_brake, int _pin_direction){
  pin_motor=_pin_motor;         // green(analog)
  pin_brake=_pin_brake;         // yellow
  pin_direction=_pin_direction; // brown
  pinMode(pin_motor, OUTPUT);
  pinMode(pin_brake, OUTPUT);
  pinMode(pin_direction, OUTPUT);
}
void Wheel::Set_speed(int _speed){
  analogWrite(pin_motor, _speed);
}
void Wheel::Set_brake(int _brake){ // 1:Go, -1:Stop
  if(_brake==1)digitalWrite(pin_brake, HIGH);
  else if(_brake==-1)digitalWrite(pin_brake, LOW);
}
void Wheel::Set_direction(int _direction){ // 1:Forward, -1:Backward
  if(_direction==1)digitalWrite(pin_direction, HIGH);
  else if(_direction==-1)digitalWrite(pin_direction, LOW);
}
