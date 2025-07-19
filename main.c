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
  printf("(1)Temperature Converter\t(2)Currency Converter\n");
  printf("\t\t(3)Mass Converter\n");
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
  printf("(1)Celcius to Fahrenheit\t(2)Celcius to Kelvin\n");
  printf("(3)Fahrenheit to Celcius\t(4)Fahrenheit to Kelvin\n");
  printf("(5)Kelvin to Celcius\t\t(6)Kelvin to Fahrenheit\n");
  scanf(" %c", &choice);
  printf("Enter a value: ");
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
    default:
      printf("Oops...invalid option: '%c'", choice);
      printf("\nTry again.");
  }
}

void currConverter(){
  char choice;
  float value;
  float result;

  printf("%.*s", 10, "-----------------");
  printf(" Welcome to the Currency Converter! ");
  printf("%.*s", 10, "-----------------");
  printf("\nChoose one from the list:\n");
  printf("(1)USD to PHP\t(2)USD to AUD\t(3)USD to JPY\n");
  printf("(4)USD to EUR\t(5)USD to GBP\t(6)PHP to USD\n");
  printf("(7)PHP to AUD\t(8)PHP to JPY\t(9)PHP to EUR\n");
  printf("(10)PHP to GBP\t(11)AUD to USD\t(12)AUD to PHP\n");
  printf("(13)AUD to JPY\t(14)AUD to EUR\t(15)AUD to GBP\n");
  printf("(16)JPY to USD\t(17)JPY to PHP\t(18)JPY to AUD\n");
  printf("(19)JPY to EUR\t(20)JPY to GBP\t(21)EUR to USD\n");
  printf("(22)EUR to PHP\t(23)EUR to AUD\t(24)EUR to JPY\n");
  printf("(25)EUR to EUR\t(26)EUR to GBP\t(27)GBP to USD\n");
  printf("(28)GBP to PHP\t(29)GBP to AUD\t(30)GBP to JPY\n");
  printf("(31)GBP to EUR\n");
  scanf(" %c", &choice);
  printf("Enter a value: ");
  scanf("%f", &value);
}

void massConverter(){

}