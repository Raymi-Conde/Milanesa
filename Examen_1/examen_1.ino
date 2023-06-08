#define  LED_N_2	5
#define  LED_M_1	3


void setup()
{
  	pinMode(LED_N_2  , OUTPUT);
  
 	pinMode(LED_M_1  , OUTPUT);
}

void loop()
{
  	analogWrite(LED_N_2  , 127); // magenta
  	
  
  	analogWrite(LED_M_1  , 100); // rojo
}