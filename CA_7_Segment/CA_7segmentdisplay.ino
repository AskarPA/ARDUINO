
//Seven segment display with arduino uno
//Dated 5 September 2018
//Written by: Usman Ali Butt
//Property of: www.microcontroller-project.com 
void setup() {   
             
DDRD=0xFF; //Port-D as of arduino uno as OutPut
}

// the loop routine runs over and over again forever:
void loop() {
PORTD =~0X3F;  //Displaying 0
delay(100);
PORTD =~0X06;  //Displaying 1
delay(100);
PORTD =~0X5B; //Displaying 2
delay(100);
PORTD =~0X4F; //Displaying 3
delay(100);
PORTD =~0X66; //Displaying 4
delay(100);
PORTD =~0X6D; //Displaying 5
delay(100);
PORTD =~0X7D; //Displaying 6
delay(100);
PORTD =~0X07; //Displaying 7
delay(100);
PORTD =~0X7F; //Displaying 8
delay(100);
PORTD =~0X6F; //Displaying 9
delay(100);
PORTD =~0X77; //Displaying A
delay(100);
PORTD =~0X7C; //Displaying B
delay(100);
PORTD =~0X39; //Displaying C
delay(100);
PORTD =~0X5E; //Displaying D
delay(100);
PORTD =~0X79; //Displaying E
delay(100);
PORTD =~0X71; //Displaying F
delay(100);
}