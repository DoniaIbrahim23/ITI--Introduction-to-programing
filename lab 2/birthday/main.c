#include <stdio.h>
#include <stdlib.h>

int leapyear(int year){
return ((year%4 ==0 && year%100 !=0) || (year %400 ==0));
}

int main()
{
 int currentyear =2024, currentMonth =10, currentDay = 16, year,month,day,alldays, ageyear,ageMonth,ageday;

 do{
    printf("PLZ Enter year between 1980 and 2024 \n");
    scanf("%i", &year);
 }
 while (year< 1980 || year> 2024);
   do{
    printf("PLZ Enter month between 1 and 12 \n");
    scanf("%i", &month);
   }
   while (month< 1 || month> 12);

 if (month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12)
 {
     alldays =31;
 } else if (month ==4 || month ==6 || month ==9 || month ==11 )
 {
     alldays =30;
 } else if(month==2) {
 if (leapyear(year))
 {
     alldays = 29;
 } else {
     alldays =28;
 }}

 do {
    printf("PLZ Enter day \n");
    scanf("%i" ,&day);
 }
  while (day <1|| day> alldays);
 ageyear = currentyear-year;
 ageMonth = currentMonth-month;
 ageday = currentDay-day;

 if (ageday<0 || ageMonth<0) {
    printf("your age is Year =%i \n" ,ageyear);
 } else
 {
      printf("your age is day =%i Month =%i Year =%i\n" , ageday,ageMonth,ageyear);
 }
 return 0;

}
