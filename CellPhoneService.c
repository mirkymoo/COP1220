#include <stdio.h>

int main() {
    int talk_minutes, text_messages, data_gigabytes;
    
    //collect user input
    printf("What is the maximum monthly talk minutes that you needed: \n");
    scanf("%d", &talk_minutes);
    printf("What is the maximum monthly text messages that you needed: \n");
    scanf("%d", &text_messages);
    printf("What is the maximum monthly gigabytes of data that you needed: \n");
    scanf("%d", &data_gigabytes);
    
    //check for best plan
    if (talk_minutes < 500 && text_messages == 0 && data_gigabytes == 0) {
        printf("We recommend Plan A for $49 per month\n");
    } 
    else if (talk_minutes < 500 && text_messages > 0) {
        printf("We recommend Plan B for $55 per month\n");
    } 
    else if (talk_minutes >= 500 && text_messages < 100 && data_gigabytes == 0) {
        printf("We recommend Plan C for $61 per month\n");
    } 
    else if (talk_minutes >= 500 && text_messages > 100 && data_gigabytes == 0) {
        printf("We recommend Plan D for $70 per month\n");
    }
    else if (data_gigabytes < 3) {
        printf("We recommend Plan E for $79 per month\n");
    } 
    else if (data_gigabytes > 3){
        printf("We recommend Plan F for $87 per month\n");
    }
    
    return 0;
}