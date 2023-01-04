#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

// int pluse(int a , int b){
//     int c = a + b;
//     return c;
// }

// void sort(int array[],int size){
//     for(int i = 0; i < size - i - 1; i++){
// for(int j = 0; j < size -1; j++){
// if(array[j] > array[j+1]){
//     int temp = array[j];
//     array[j] = array[j+1];
//     array[j+1] = temp;
// }
//     }
//     }
// }

// void print(int array[],int size){
//     for(int i = 0; i < size; i++){
// printf("%d\t",array[i]);
// if(i==5){
//     printf("\n%d\t",array[i]);
// }
//     }
// }

// typedef struct
// {
//     char name[33];
//     char password[12];
//     int id;
// } user;

// struct student
// {
//     char name[33];
//     float gpa;
// };

// enum day{mon = 1,tus = 2,wen = 3,sun = 7};
int main()
{
    // char grade;

    // printf("Pleas Enter The Grade : ");
    //    scanf("%s",&grade);
    /*char name[33];
    int age;
    printf("Pleas Enter The Name : ");
    fgets(name,369,stdin);
    name[strlen(name)-1] = '\0';
    printf("Pleas Enter The Age : ");
    scanf("%d",&age);
    printf("\nHey %s Your Age Is %d",name,age);*/

    // double a = round(2.15);

    // printf("%.0f \n",a);

    // double a2 = log(10);

    // printf("%f",a2);

    // double pi = 3.141;

    // double radius;

    // double circumference;

    // printf("Pleas Enter The Circle Radius : ");
    // scanf("%lf",&radius);

    // circumference = 2 * pi * radius;

    // printf("The Radius Of Circle Is %lf",circumference);

    // char name[33];
    // int a = 1;
    // printf("Pleas Enter The name : ");
    // fgets(name,369,stdin);
    // name[strlen(name)-1] = '\0';

    // if(name=='dagm'){
    //     printf("You Are Hacker");
    // }else{
    //    printf("You Are Programmer");
    // }

    // sqrt(9);

    // switch(grade){
    //     case 'A':
    //        printf("Perfect");
    //        break;
    //     case 'B':
    //        printf("Good");
    //        break;
    //     case 'C':
    //        printf("Okey");
    //        break;
    //     case 'D':
    //        printf("Not F");
    //        break;
    //     case 'F':
    //        printf("Feal");
    //        break;
    //     default:
    //        printf("Your Grade Is UnKown");
    // }

    // char unit;
    // double temp;

    // printf("Pleas Enter Symbol Of  Unit : ");
    // scanf("%c",&unit);

    // unit = toupper(unit);

    // switch (unit)
    // {
    // case 'C':
    //     printf("Pleas Enter Temperature : ");
    //     scanf("%lf",&temp);
    //     printf("The fdsafd %lf",temp*2);
    //     break;
    // }

    // int c = pluse(1,3);
    // printf("Answer : %d",c);

    // char dag[] = "GOD";
    // int result = strlen(dag);
    // printf("%d",dag);

    // for(char i = 'A';i < 'Z'; i++){
    //     printf("%c \n",i);
    // }

    // char name[33];
    // printf("Pleas Enter The Name : ");

    //     fgets(name,333,stdin);
    //     name[strlen(name) - 1] = '\0';

    // while (strlen(name) == 0)
    // {
    //     printf("Pleas Enter A Valid Name : ");
    //     fgets(name,333,stdin);
    //     name[strlen(name) - 1] = '\0';

    //     printf("Hello %s",name);
    // }

    //     printf("Hello %s",name);

    // int num = 0;
    // int sum = 0;

    // do{
    //     printf("Enter The Number ");
    // scanf("%d",&num);
    //    sum += num;
    // }while (num>0);
    //    sum -= num;
    // printf("%d",sum);

    // int row;
    // int col;
    // char sy;

    //  printf("Enter The Symbol ");
    // scanf("%c",&sy);
    //  printf("Enter The Number ");
    // scanf("%d",&row);
    //  printf("Enter The Number ");
    // scanf("%d",&col);
    //  for(int i = 0;i <= row; i++){
    //     for (int j = 0; j <= col; j++)
    //     {
    //         printf("%c",sy);
    //     }
    // printf("\n");
    //  }

    // double price[] = {5.0,10.0,15.0,20.0};

    // for(int i = 0; i<4; i++){
    //     printf("$%.1lf\n",price[i]);
    // }

    // char cars[][10] = {"tesla","lamber","ford"};
    // strcpy(cars[0] , "toyota");
    // printf("%s",cars[0]);

    // int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 4, 5, 6, 7, 2, 3, 7, 98, 89, 75, 32, 243356, 346};
    // int size = sizeof(num) / sizeof(num[0]);

    // sort(num, size);
    // print(num, size);

    // user user1 = {"dagm","password123",12345678};
    // printf("%s",user1.name);
    // struct student stu1 = {"Dagm", 2.0};
    // struct student stu2 = {"kedr", 3.0};
    // struct student stu3 = {"Abrham", 4.0};
    // struct student stu4 = {"Andualem", 5.0};
    // struct student stu5 = {"Gume", 6.0};

    // struct student stu_array[] = {stu1,stu2,stu3,stu4,stu5};
    // for (int i = 0; i < sizeof(stu_array)/sizeof(stu_array[0]); i++)
    // {
    //    printf("%s\t%f\n",stu_array[i].name,stu_array[i].gpa);
    // }
    //     enum day today = sun;
    //     if(today == 7){
    //  printf("This day is sunday ohhhhh this is best day this day name is manyazewal indashaw");
    //     }

    // srand(time(0));
    // int min = 1;
    // int max = 100;
    // int guss;
    // int gu = 0;
    // int ans = (rand()%max) + min;

    // do{
    // printf("Enter The Gues Number : ");
    // scanf("%d",&guss);

    // if(guss>ans){
    //     printf("Too high\n");
    // }
    // else if(guss<ans){
    //     printf("Too low\n");
    // }
    // else{
    //     printf("CORRECT\n");
    // }
    // gu++;
    // }while(guss != ans);
    // printf("*************************\n");
    // printf("Ansewere : %d\n",ans);
    // printf("Guess : %d",gu);


    
    // char quo[][100] = {"1, What is your name ?", "2, What created python ?", "3, Who is creator of python ?"};
    // char ans[][100] = {"A dagm", "B abrham", "C A&B", "D none",
    //               "A c", "B c++", "C html", "D java"
    //                                         "A kedr",
    //               "B abrham", "C geo", "D dagm"};
    // int num_quo = sizeof(quo)/sizeof(quo[0]);
    // int score;
    // char gusse;
    // for (int i = 0; i < num_quo; i++)
    // {
    //     printf("%s\n", quo[i]);
    //       for (int j = (i*4); j < (i*4) + 4; j++)
    // {
    //     printf("%s\n", ans[j]);
    // }
    // }



char text[33];
printf("Enter the text : ");
fgets(text,369,stdin);

FILE *pf = fopen("geta.txt","a");
fprintf(pf,text);
printf("\n");
fclose(pf);

// char file[33];
// printf("**********************************\nWell come to dlete and create file\n===================================\n");
// printf("\nEnter Your Favorite C create D delete: ");
// scanf("%c",&file);
// if(file == 'C'){
// // char F_name[33];
// // printf("Enter A File Name : ");
// // fgets(F_name,369,stdin);
// // FILE *pF = fopen(F_name,"w");
// // fclose(pF);
// // printf("**************************\nSuccessfully Created\n==============================");
// }else{
// char F_name[33];
// printf("Enter A File Name : ");
// scanf("%c",&F_name);
// FILE *pF = fopen(F_name,"w");
// fclose(pF);
// printf("\n**************************\nSuccessfully Created\n==============================");
// }
FILE *pF = fopen("geta.txt","r");
char name[33];
while (fgets(name,33,pF) != NULL){
    printf("%s",name);
}

fclose(pF);
    return 0;
}