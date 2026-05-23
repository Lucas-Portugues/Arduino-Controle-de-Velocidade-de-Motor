const int pinoPotenciometro = A0; 
const int pinoMosfet = 9;       

int valorADC = 0;              
int valorPWM = 0;               

void setup() 
{
	pinMode(pinoMosfet, OUTPUT);
}

void loop() 
{
    valorADC = analogRead(pinoPotenciometro);
    valorPWM = map(valorADC, 0, 1023, 0, 255);
    analogWrite(pinoMosfet, valorPWM);
}