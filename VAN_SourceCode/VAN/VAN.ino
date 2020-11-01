//
#define forward =1;
#define back =2;
#define left=3;
#define right=4;
int pinIN1 = 2;
int pinIN2 = 3;
int pinIN3 = 4;
int pinIN4 = 5;
int power = 1;

void setup()
{
	pinMode(pinIN1, OUTPUT);
	pinMode(pinIN2, OUTPUT);
	pinMode(pinIN3, OUTPUT);
	pinMode(pinIN4, OUTPUT);

}


void loop()
{
	if (power == 1)
	{
		digitalWrite(pinIN1, HIGH);
		digitalWrite(pinIN2, LOW);
		digitalWrite(pinIN3, HIGH);
		digitalWrite(pinIN4, LOW);
		delay(10000);

		digitalWrite(pinIN1, LOW);
		digitalWrite(pinIN2, LOW);
		digitalWrite(pinIN3, LOW);
		digitalWrite(pinIN4, LOW);
		delay(3000);


		digitalWrite(pinIN1, LOW);
		digitalWrite(pinIN2, HIGH);
		digitalWrite(pinIN3, LOW);
		digitalWrite(pinIN4, HIGH);
		delay(10000);

		digitalWrite(pinIN1, LOW);
		digitalWrite(pinIN2, LOW);
		digitalWrite(pinIN3, LOW);
		digitalWrite(pinIN4, LOW);
		delay(3000);
		power = 0;
	}

}

void MoveForward(int Time) {				//Ç°½ø

}
