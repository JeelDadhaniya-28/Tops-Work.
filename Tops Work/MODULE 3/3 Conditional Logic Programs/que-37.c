/* 37. WAP to show 
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case */

#include <stdio.h>

int main() {
    int day;
    char a;

    printf("Enter the charector:");
    scanf("%c", &a);

    // i-Monday to Sunday using switch case
    printf("Enter day number:");
    scanf("%d", &day);

    

    switch(day){
        case 1:
        printf("Monday \n");
        break;

        case 2:
        printf("Tuesday \n");
        break;

        case 3:
        printf("Wednesday \n");
        break;

        case 4:
        printf("Thuesday \n");
        break;

        case 5:
        printf("Friday \n");
        break;

        case 6:
        printf("Saturday \n");
        break;

        case 7:
        printf("Sunday \n");
        break;

        default:
        printf("Enter valid number.\n");
        break;
    }
   

    // ii. Vowel or Consonant using switch case
   
    switch(a){
        case 'a':
            printf("Charector %c is Vowel.\n",a);
            break;

        case 'e':
            printf("Charector %c is Vowel.\n",a);
            break;    
       
        case 'i':
            printf("Charector %c is Vowel.\n",a);
            break;

        case 'o':
            printf("Charector %c is Vowel.\n",a);
            break;

        case 'u':
            printf("Charector %c is Vowel.\n",a);
            break;    

        default:
            printf("Charector %c is not a Vowel.\n",a);
       
    }

    return 0;
}

// int main() {
//     char a;

//     printf("Enter the charector:");
//     scanf("%c", &a);

//     switch(a){
//         case 'a':
//             printf("Charector %c is Vowel.",a);
//             break;

//         case 'e':
//             printf("Charector %c is Vowel.",a);
//             break;    
       
//         case 'i':
//             printf("Charector %c is Vowel.",a);
//             break;

//         case 'o':
//             printf("Charector %c is Vowel.",a);
//             break;

//         case 'u':
//             printf("Charector %c is Vowel.",a);
//             break;    

//         default:
//             printf("Charector %c is not a Vowel.",a);
       
//     }
//     return 0;
// }