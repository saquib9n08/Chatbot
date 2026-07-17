#include <stdio.h>
#include <string.h>

int main () {
    char name[100] = "You";
    char subjects[10][50];
    char y_n[10];
    int diff[10];
    int select;
    int no_subject;
    int study_hr;

    printf("\n\n");
    printf("==============================================================\n");
    printf("\n");
    printf("\t\t\t\t\t\t   00\n");
    printf("\t000      000\t\t000    000   000   00\n");
    printf("\t000      000\t\t000    000   000   00\n");
    printf("\t\t\t\t000    000   000   00\n");
    printf("\t\t\t\t0000000000   000   00\n");
    printf("\t\t\t\t0000000000   000   00\n");
    printf("\t0          0\t\t000    000   000   \n");
    printf("\t 0        0 \t\t000    000   000   00\n");
    printf("\t  00000000  \t\t000    000   000   00\n");
    printf("\n");
    printf("==============================================================\n");
    printf("\t  Welcome User! Let's get ready for study!\n");
    printf("==============================================================\n");
    printf("\n");

    printf("\no o\n");
    printf("\\_/ ");
    printf("JARVIS: \nHello there! How should I call you?\n\n");
    printf("%s: \n", name);

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    if(strcmp(name, "s") == 0) {
        strcpy(name,"You");
        printf("\no o\n");
        printf("\\_/ ");
        printf("JARVIS: \nOkay let's skip... Nice to meet you!\n");

    } else {
        printf("\no o\n");
        printf("\\_/ ");
        printf("JARVIS: \nNice to meet you %s!\n", name);
    }

    printf("How much time(hr) do you got for study today?\n\n");
    while(1){
        printf("%s: \n", name);
        scanf("%d", &study_hr);
    
        if(study_hr <= 0){
            printf("\no o\n");
            printf("... ");
            printf("JARVIS: \nSorry! But time can't be zero or negative. Try again!\n\n");

        } else if(study_hr > 3) {
            printf("\no o\n");
            printf(" O ");
            printf("JARVIS: \nOh! Sounds great! But isn't it too much?\nYour health is more important...\nDecrease it a bit.\n\n");

        } else if(study_hr == 3) {
            printf("\no o\n");
            printf("\\_/ ");
            printf("JARVIS: \nFantastic!! That's very nice \nLet's utilize it wisely.\n\n");
            break;

        } else if(study_hr == 2) {
            printf("\no o\n");
            printf("\\_/ ");
            printf("JARVIS: \nYou had enough time for exploring books!\nLet's utilize it wisely.\n\n");
            break;

        } else if(study_hr == 1) {
            printf("\no o\n");
            printf("\\_/ ");
            printf("JARVIS: \nLooks like you had a packed schedule!\nLet's utilize it wisely\n\n");
            break;
        } 
    }
    
    printf("What best describes your mood right now?\n\n");
    printf("1. Highly Motivated\n");
    printf("2. Average\n");
    printf("3. Tired or stressed\n\n");

    while(1) {
        printf("%s: \n", name);
        scanf("%d", &select);

        switch(select) {
            case 1:
                printf("\no o\n");
                printf("\\_/ ");
                printf("JARVIS: \nI am amazed! Then let's make today a productive one...\n"); 
                goto cut;

            case 2:
                printf("\no o\n");
                printf("\\_/ ");
                printf("JARVIS: \nGreat! A balanced study plan will help you stay consistent and focused...\n");  
                goto cut;
        
            case 3:
                printf("\no o\n");
                printf("\\_/ ");
                printf("JARVIS: \nThat's okay! Let's take things one step at a time...\n");  
                goto cut;

            default:
                printf("\no o\n");
                printf("... ");
                printf("JARVIS: \nInvaild Entry! \nTry Again!\n\n");
        }   
        
        cut:
            break;
    }   

    printf("Preparing the best...\n\n");

    printf("==============================================================\n");

    if(strcmp(name, "You") == 0) { 
        printf("            Your %d hour Study Schedule\n", study_hr);

    } else {
        printf("           %s's %d hour Study Schedule\n", name, study_hr);
    }

    printf("==============================================================\n");
    printf("\n\n");

    if (select == 1) {
        if (study_hr == 1) {
            printf("Hour 1 : Deep Study Session\n");
            
        } else if (study_hr == 2) {
            printf("Hour 1 : Deep Study Session \n-------- 10 Min Break \nHour 2 : Practice Questions\n");
            
        } else {
            printf("Hour 1 : Deep Study Session \n-------- 10 Min Break \nHour 2 : Practice Questions \n-------- 10 Min Break \nHour 3 : Revision\n");
            
        }

    } else if (select == 2) {
        if (study_hr == 1) {
            printf("Hour 1 : Study Important Topics\n");
            
        } else if (study_hr == 2) {
            printf("Hour 1 : Study \n-------- 10 Min Break \nHour 2 : Revision\n");
            
        } else {
            printf("Hour 1 : Study \n-------- 10 Min Break \nHour 2 : Assignment Work \n-------- 10 Min Break \nHour 3 : Revision\n");
            
        }

    } else {
        if (study_hr == 1) {
            printf("Hour 1 : Review Notes");
            
        } else if (study_hr == 2) {
            printf("Hour 1 : Review Notes \n-------- 10 Min Break \nHour 2 : Light Practice\n");
            
        } else {
            printf("Hour 1 : Review Notes \n-------- 10 Min Break \nHour 2 : Light Practice \n-------- 10 Min Break \nHour 3 : Revision\n");
            
        }
    }
    
    printf("\n==============================================================\n");
    printf("o o\n");
    printf("\\_/\n");
    printf("JARVIS:");
    printf("\n\n");
    printf("Schedule prepared successfully!\n");
    printf("Stay focused and avoid distractions.\n\n");
    printf("Good Luck!");
    printf("\n==============================================================\n\n");

    while(1) {
        printf("\no o\n");
        printf("\\_/ ");
        printf("JARVIS: \nWant to continue? [y/n]: ");

        scanf("%s", &y_n);

        if (strcmp(y_n, "y") == 0) {
            printf("\n\nFeature coming soon...\n");

        } else {
            printf("\n=================================\n");
            printf("\n");
            printf("\t  000      000\n");
            printf("\t  000      000\n");
            printf("\n\n\n");
            printf("\t  0          0\n");
            printf("\t   0        0\n");
            printf("\t    00000000\n");
            printf("\n=================================\n");
            printf("    Thank you for using JARVIS");
            printf("\n=================================\n");
            break;
        }
    }

    return 0;
}
