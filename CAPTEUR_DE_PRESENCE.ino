
// Sen Mecatronique
// Tous droits réservés
// Réutilisation á des fins éducatifs autorisée
  int Capteur_PIR = 10;

void setup() {
  // put your setup code here, to run once:
pinMode( Capteur_PIR , INPUT);

Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(Capteur_PIR )== HIGH ) 
{
  Serial.println("intrusion détéctée");
  }
if(digitalRead(Capteur_PIR )== LOW ) 
{
  Serial.println("Aucune intrusion détéctée");
  }
delay(200) ;
}
