int incoming = 0 ;



/* enable */

const int enablepositive5 = 2;
const int enablenegative5 = 3;

const int enablepositive4 = 8;
const int enablenegative4 = 9;

const int enablepositive3 = 22;
const int enablenegative3 = 24;

const int enablepositive2 = 52;
const int enablenegative2 = 50;

const int enablepositive1 = 53;
const int enablenegative1 = 51;

/* pulse */

const int pulsepositive5 = 4 ;
const int pulsenegative5 = 5 ;

const int pulsepositive4 = 10 ;
const int pulsenegative4 = 11 ;

const int pulsepositive3 = 26 ;
const int pulsenegative3 = 28 ;

const int pulsepositive2 = 48 ;
const int pulsenegative2 = 46;

const int pulsepositive1 = 49 ;
const int pulsenegative1 = 47 ;

/* direction */

const int directpositive5 = 6;
const int directnegative5 = 7;

const int directpositive4 = 12;
const int directnegative4 = 13;

const int directpositive3 = 30;
const int directnegative3 = 32;

const int directpositive2 = 44;
const int directnegative2 = 42;

const int directpositive1 = 45;
const int directnegative1 = 43;



void setup()
{
  Serial.begin(9600);

  /*enable*/
  pinMode(enablepositive5, OUTPUT);
  pinMode(enablenegative5, OUTPUT);

  pinMode(enablepositive4, OUTPUT);
  pinMode(enablenegative4, OUTPUT);

  pinMode(enablepositive3, OUTPUT);
  pinMode(enablenegative3, OUTPUT);

  pinMode(enablepositive2, OUTPUT);
  pinMode(enablenegative2, OUTPUT);

  pinMode(enablepositive1, OUTPUT);
  pinMode(enablenegative1, OUTPUT);

  /*pulse*/
  pinMode(pulsepositive5, OUTPUT);
  pinMode(pulsenegative5, OUTPUT);

  pinMode(pulsepositive4, OUTPUT);
  pinMode(pulsenegative4, OUTPUT);

  pinMode(pulsepositive3, OUTPUT);
  pinMode(pulsenegative3, OUTPUT);

  pinMode(pulsepositive2, OUTPUT);
  pinMode(pulsenegative2, OUTPUT);

  pinMode(pulsepositive1, OUTPUT);
  pinMode(pulsenegative1, OUTPUT);

  /*direction*/
  pinMode(directpositive5, OUTPUT);
  pinMode(directnegative5, OUTPUT);

  pinMode(directpositive4, OUTPUT);
  pinMode(directnegative4, OUTPUT);

  pinMode(directpositive3, OUTPUT);
  pinMode(directnegative3, OUTPUT);

  pinMode(directpositive2, OUTPUT);
  pinMode(directnegative2, OUTPUT);

  pinMode(directpositive1, OUTPUT);
  pinMode(directnegative1, OUTPUT);

}


void loop()
{
  if (Serial.available() > 0)
  {
    incoming = Serial.read();
  }

  digitalWrite(enablenegative5, HIGH);
  digitalWrite(pulsenegative5, LOW);
  digitalWrite(directnegative5, LOW);

  digitalWrite(enablenegative4, HIGH);
  digitalWrite(pulsenegative4, LOW);
  digitalWrite(directnegative4, LOW);

  digitalWrite(enablenegative3, HIGH);
  digitalWrite(pulsenegative3, LOW);
  digitalWrite(directnegative3, LOW);

  digitalWrite(enablenegative2, HIGH);
  digitalWrite(pulsenegative2, LOW);
  digitalWrite(directnegative2, LOW);

  digitalWrite(enablenegative1, HIGH);
  digitalWrite(pulsenegative1, LOW);
  digitalWrite(directnegative1, LOW);


  if (incoming == '4')
  {
    Serial.println("INTO THE LOOP FOR MOTOR 5") ;
    digitalWrite(enablepositive5, LOW);
    digitalWrite(directpositive5, LOW);

    for (int x = 0; x < 10 ; x++)
    {
      digitalWrite(pulsepositive5, HIGH);
      delayMicroseconds(250);
      digitalWrite(pulsepositive5, LOW);
      delayMicroseconds(250);
    }

    digitalWrite(enablepositive5, HIGH);
    incoming = 0 ;
    delay(500);
  }


  else if (incoming == '5')
  {
    Serial.println("INTO THE LOOP FOR MOTOR 4") ;
    digitalWrite(enablepositive5, LOW);
    digitalWrite(directpositive5, HIGH);

    for (int x = 0; x < 3000 ; x++)
    {
      digitalWrite(pulsepositive4, HIGH);
      delayMicroseconds(250);
      digitalWrite(pulsepositive4, LOW);
      delayMicroseconds(250);
    }

    digitalWrite(enablepositive4, HIGH);
    incoming = 0 ;
    delay(500);
  }

  else if (incoming == '3')
  {
    Serial.println("INTO THE LOOP FOR MOTOR 3") ;
    digitalWrite(enablepositive3, LOW);
    digitalWrite(directpositive3, LOW);

    for (int x = 0; x < 10 ; x++)
    {
      digitalWrite(pulsepositive3, HIGH);
      delayMicroseconds(1000);
      digitalWrite(pulsepositive3, LOW);
      delayMicroseconds(1000);
    }

    digitalWrite(enablepositive3, HIGH);
    incoming = 0 ;
    delay(500);
  }

  else if (incoming == '2')
  {
    Serial.println("INTO THE LOOP FOR MOTOR 2") ;
    digitalWrite(enablepositive2, LOW);
    digitalWrite(directpositive2, HIGH);

    for (int x = 0; x < 10 ; x++)
    {
      digitalWrite(pulsepositive2, HIGH);
      delayMicroseconds(1000);
      digitalWrite(pulsepositive2, LOW);
      delayMicroseconds(1000);
    }

    digitalWrite(enablepositive2, HIGH);
    incoming = 0 ;
    delay(500);
  }

  else if (incoming == '1')
  {
    Serial.println("INTO THE LOOP FOR MOTOR 1") ;
    digitalWrite(enablepositive1, LOW);
    digitalWrite(directpositive1, HIGH);

    for (int x = 0; x < 50 ; x++)
    {
      digitalWrite(pulsepositive1, HIGH);
      delayMicroseconds(1000);
      digitalWrite(pulsepositive1, LOW);
      delayMicroseconds(1000);
    }

    digitalWrite(enablepositive1, HIGH);
    incoming = 0 ;
    delay(500);
  }
}
