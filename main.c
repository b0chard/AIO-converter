#include <stdio.h>

char intro();
void tempConverter();
void currConverter();
void massConverter();

int main(){
  char converter = intro();
  
  switch(converter){
    case '1':
      tempConverter();
      break;
    case '2':
      currConverter();
      break;
    case '3':
      massConverter();
      break;
    default:
      printf("Oops...invalid option: '%c'", converter);
      printf("\nTry again.");
      return 1;
  }

  printf("\nConversion done...re-run to convert another.");

  return 0;
} 

char intro(){
  char choice;

  printf("%.*s", 10, "=================");
  printf(" Welcome to the Basic Unit Converter! ");
  printf("%.*s", 10, "=================");
  printf("\nChoose one from the list:\n");
  printf("(1)Temperature Converter\n(2)Currency Converter\n(3)Mass Converter\n");
  scanf(" %c", &choice);
  printf("\n");

  return choice;
}

void tempConverter(){
  char choice;
  float value;
  float result;

  printf("%.*s", 10, "-----------------");
  printf(" Welcome to the Temperature Converter! ");
  printf("%.*s", 10, "-----------------");
  printf("\nChoose one from the list:\n");
  printf("(1)Celcius to Fahrenheit\n(2)Celcius to Kelvin\n(3)Fahrenheit to Celcius\n(4)Fahrenheit to Kelvin\n(5)Kelvin to Celcius\n(6)Kelvin to Fahrenheit\n");
  scanf(" %c", &choice);
  printf("\nEnter a value: ");
  scanf("%f", &value);

  switch(choice){
    case '1':
      result = (((float) 9 / 5) * value) + 32;
      printf("%.2f°C is %.2f°F", value, result);
      break;
    case '2':
      result = value + 273.15;
      printf("%.2f°C is %.2f°K", value, result);
      break;
    case '3':
      result = (value - 32) * ((float) 5 / 9);
      printf("%.2f°F is %.2f°C", value, result);
      break;
    case '4':
      result = (value + 459.67) * ((float) 5 / 9);
      printf("%.2f°F is %.2f°K", value, result);
      break;
    case '5':
      result = value - 273.15;
      printf("%.2f°K is %.2f°C", value, result);
      break;
    case '6':
      result = (value * ((float) 9 / 5)) - 459.67;
      printf("%.2f°K is %.2f°F", value, result);
      break;
  }
}

void currConverter(){

}

void massConverter(){

}