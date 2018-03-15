
/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 0, b = 0, c = 0,  d = 0;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);
  Serial.print("d = ");
  Serial.println(d);


  Serial.print("a + b = ");       // add
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiply
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divide
  Serial.println(c / b);

  Serial.print("c % b = ");       // module
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // subtract
  Serial.println(b - c);

  
 
  Serial.print("a + 1 =" );



     
}

//********** Loop *****************************************************************
void loop()  // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
 // este programa lo que hace es que te calcula el resultado de (a*c) sin necesidad que vuelvas a poner que es "a" o "c" porque ya lo has hecho al principio .

