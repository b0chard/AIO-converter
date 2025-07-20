#include <stdio.h>
#include <string.h>

char intro();
void tempConverter();
void currConverter();
void massConverter();

int main(){
  int converter = intro();
  
  switch(converter){
    case 1:
      tempConverter();
      break;
    case 2:
      currConverter();
      break;
    case 3:
      massConverter();
      break;
    default:
      printf("Oops...invalid option: '%d'", converter);
      printf("\nTry again.");
      return 1;
  }

  printf("\nConversion done...re-run to convert another.");

  return 0;
} 

char intro(){
  int choice;

  printf("%.*s", 10, "=================");
  printf(" Welcome to the Basic Unit Converter! ");
  printf("%.*s", 10, "=================");
  printf("\nChoose one from the list:\n");
  printf("(1)Temperature Converter\t(2)Currency Converter\n");
  printf("\t\t(3)Mass Converter\n");
  scanf(" %d", &choice);
  printf("\n");

  return choice;
}

void tempConverter(){
  int choice;
  float value;
  float result;

  printf("%.*s", 10, "-----------------");
  printf(" Welcome to the Temperature Converter! ");
  printf("%.*s", 10, "-----------------");
  printf("\nChoose one from the list:\n");
  printf("(1)Celcius to Fahrenheit\t(2)Celcius to Kelvin\n");
  printf("(3)Fahrenheit to Celcius\t(4)Fahrenheit to Kelvin\n");
  printf("(5)Kelvin to Celcius\t\t(6)Kelvin to Fahrenheit\n");
  scanf(" %d", &choice);
  printf("Enter a value: ");
  scanf("%f", &value);

  switch(choice){
    case 1:
      result = (((float) 9 / 5) * value) + 32;
      printf("%.2f°C is %.2f°F", value, result);
      break;
    case 2:
      result = value + 273.15;
      printf("%.2f°C is %.2f°K", value, result);
      break;
    case 3:
      result = (value - 32) * ((float) 5 / 9);
      printf("%.2f°F is %.2f°C", value, result);
      break;
    case 4:
      result = (value + 459.67) * ((float) 5 / 9);
      printf("%.2f°F is %.2f°K", value, result);
      break;
    case 5:
      result = value - 273.15;
      printf("%.2f°K is %.2f°C", value, result);
      break;
    case 6:
      result = (value * ((float) 9 / 5)) - 459.67;
      printf("%.2f°K is %.2f°F", value, result);
      break;
    default:
      printf("Oops...invalid option: '%d'", choice);
      printf("\nTry again.");
  }
}

void currConverter(){
  int choice;
  float value;
  float result;

  const float listOfConversions[] = {
    // as of Jul 20, 2025 17:01:20 from openexchangesrates.org
    57.110003, //usd to php
    1.53705, //usd to aud
    148.81007759, //usd to jpy
    0.0175100674, //php to usd
    0.0269138491, //php to aud
    2.6056744839, //php to jpy
    0.6505969227, //aud to usd
    37.1555922058, //aud to php
    96.8153785433, //aud to jpy
    0.006719975, //jpy to usd
    0.383777792, //jpy to php
    0.0103289376, //jpy to aud
  };

  printf("%.*s", 10, "-----------------");
  printf(" Welcome to the Currency Converter! ");
  printf("%.*s", 10, "-----------------");
  printf("\nChoose one from the list:\n");
  printf("(1)USD to PHP\t(2)USD to AUD\t(3)USD to JPY\n");
  printf("(4)PHP to USD\t(5)PHP to AUD\t(6)PHP to JPY\n");
  printf("(7)AUD to USD\t(8)AUD to PHP\t(9)AUD to JPY\n");
  printf("(10)JPY to USD\t(11)JPY to PHP\t(12)JPY to AUD\n");
  scanf(" %d", &choice);
  printf("Enter a value: ");
  scanf("%f", &value);

  float conversionRate = listOfConversions[choice - 1];
  char currencyToUse[4];
  result = value * conversionRate;

  if(choice == 4 || choice == 7 || choice == 10){
    char currency[] = "USD";
    strcpy(currencyToUse, currency);
  } else if(choice == 1 || choice == 8 || choice == 11){
    char currency[] = "PHP";
    strcpy(currencyToUse, currency);
  } else if(choice == 2 || choice == 5 || choice == 12){
    char currency[] = "AUD";
    strcpy(currencyToUse, currency);
  } else if(choice == 3 || choice == 6 || choice == 9){
    char currency[] = "JPY";
    strcpy(currencyToUse, currency);
  }

  if(choice >= 1 && choice <= 3){
    printf("%.2f USD is %.2f %s", value, result, currencyToUse);
  } else if(choice >= 4 && choice <= 6){
    printf("%.2f PHP is %.2f %s", value, result, currencyToUse);
  } else if(choice >= 7 && choice <= 9){
    printf("%.2f AUD is %.2f %s", value, result, currencyToUse);
  } else if(choice >= 10 && choice <= 12){
    printf("%.2f JPY is %.2f %s", value, result, currencyToUse);
  } else{
    printf("Oops...invalid option: '%d'", choice);
    printf("\nTry again.");
  }
}

void massConverter(){

}