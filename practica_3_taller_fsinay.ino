/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catalogo de Productos
   Dev: Fabian Andree Sinay Canel
   Fecha: 19 de abril de 2024
*/
int menu = 1;

struct Dulces{
  char nombre_dulce[25];
  byte cantidad_chocolate;
};
Dulces aperitivo_1 = {"chocolate",25};
Dulces aperitivo_2 = {"gomitas",25};
Dulces aperitivo_3 = {"malvaviscos",25};
Dulces aperitivo_4 = {"galletas",25};




void setup() {
  Serial.begin(9600); 
  Serial.println ("Maquina de dulces");
  Serial.println ("Presiona cualquier boton para navegar");
  pinMode(2, INPUT);     
  pinMode(3, INPUT);     
}
void loop(){
  if (digitalRead(2)==HIGH){
    delay(1000);
    menu = menu+1;
}else if(digitalRead(3)==HIGH){
     delay(1000);
    menu = menu-1;
  }else {}
  if (menu==1){
  Serial.println(aperitivo_1.nombre_dulce);
  Serial.println(aperitivo_1.cantidad_chocolate);
  }else if (menu==2){
  Serial.println(aperitivo_2.nombre_dulce);
  Serial.println(aperitivo_2.cantidad_chocolate);
  } else if (menu==3){
  Serial.println(aperitivo_3.nombre_dulce);
  Serial.println(aperitivo_3.cantidad_chocolate);
  }else if (menu==4){
  Serial.println(aperitivo_4.nombre_dulce);
  Serial.println(aperitivo_4.cantidad_chocolate);
  } else if (menu>4){
  menu = 1;
  } else {
  menu = 4;
  }
}
