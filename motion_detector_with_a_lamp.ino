void setup()
{
  pinMode(2, OUTPUT); //definir le pin ou il y a le relai
  pinMode(6,INPUT);  //definir le pin ou est brancher le capteur de movement
  Serial.begin(9600);  //vitesse de cominication entre arduino
}
//faire une boucle infinie pour detecter le movment
void loop()
{
  if(digitalRead(6)==HIGH){ //la condition si le capteur detecte un movment si = hight donc il existe un movement
   Serial.println("mouvement detecte"); //quand il detecte un movement il va ecrire dans moniteur serial movement detecter
    digitalWrite(2, HIGH);//quand le movement est detecter en ferme le relai => relai= high 
    delay(2000);  //on laisse la led allumer pendans  2s =2000 milai second  et la valeur de combien de second on veut laisser allumer on peux changer dans delai 
  }else{ //si le capteur ne detecte pas de movement
   Serial.println("pas mouvement detecte");
    digitalWrite(2, LOW);  //quand le movement  n est pas detecter en ouvre le relai => relai= low 
  }
}
