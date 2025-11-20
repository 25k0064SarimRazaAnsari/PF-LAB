#include <stdio.h>
#include <string.h>

void sortPlaylist(char playlist[10][20], int songCount) {
    char temp[20];

    for (int i = 0; i < songCount - 1; i++) {
        for (int j = 0; j < songCount - 1 - i; j++) {
            if (strcmp(playlist[j], playlist[j + 1]) > 0) {
                // swap playlist[j] and playlist[j+1]
                strcpy(temp, playlist[j]);
                strcpy(playlist[j], playlist[j + 1]);
                strcpy(playlist[j + 1], temp);
            }
        }
    }
}

int main() {

    FILE *fptr;

    fptr=fopen("playlist.txt","a+");

    if (fptr==NULL){
        printf("Error (not found / open)");
        return -1;
    }

    
    int choice;
    char playlist[10][20];
    char delete[20];
    int songCount=0;
    char search[20];

    fseek(fptr, 0, SEEK_SET);
    while (songCount < 10 && fgets(playlist[songCount], 20, fptr) != NULL) {
        int len = strlen(playlist[songCount]);
        if (len > 0 && playlist[songCount][len - 1] == '\n')
            playlist[songCount][len - 1] = '\0';
        songCount++;
    }

    do
    {
        printf("1.Add Song\n2.Delete Song\n3.Update playlist\n4.Search Song\n5.Exit and Save\n");
        scanf("%d",&choice);
        getchar();
        switch (choice)
        {
        case 1:
            if(songCount>=10){
                printf("Playlist is full!\n");
                break;
            }
            printf("Enter song title to add\n");
            fgets(playlist[songCount],20,stdin);

            
            int  playLen=strlen(playlist[songCount]);
            if(playlist[songCount][playLen-1]=='\n') playlist[songCount][playLen-1]='\0';
            
            songCount++;
            break;

        case 2:
            if(songCount==0){
                printf("Playlist is empty\n");break;    
            }
            printf("Enter song title to delete\n");
            fgets(delete,20,stdin);
            
            int delLen=strlen(delete);
            if(delete[delLen-1]=='\n') delete[delLen-1]='\0';

            int flag=-1;
            for (int i = 0; i < songCount; i++)
            {
                if(strcmp(playlist[i],delete)==0){
                    flag=i;
                    break;
                }
            }

            if (flag==-1){
                printf("Song not found\n");
            }
            else{
                for (int i = flag; i < songCount-1; i++)
                {
                    strcpy(playlist[i],playlist[i+1]);
                }
                songCount--;
                printf("Song Deleted!\n");
            }
            
            break;

        case 3:
            if(songCount==0){
                    printf("Playlist is empty \n");break;    
                }
            char update[20];
            char newTitle[20];
            printf("Enter song title to update :");
            fgets(update,20,stdin);

            printf("Enter new title :");
            fgets(newTitle,20,stdin);
            int lenNewTitle=strlen(newTitle);
            if(newTitle[lenNewTitle-1]=='\n') newTitle[lenNewTitle-1]='\0';

            int lenUpdate=strlen(update);
            if(update[lenUpdate-1]=='\n') update[lenUpdate-1]='\0';

           int updateFlag=-1;
            for (int i = 0; i < songCount; i++)
            {
                if(strcmp(playlist[i],update)==0){
                    updateFlag=i;
                    break;
                }
            }
            if(updateFlag==-1){
                printf("title not found\n");
            }
            else{
            strcpy(playlist[updateFlag],newTitle);
            printf("Title Updated\n");
            }
            
            

            break;
        case 4:
            if(songCount==0){
                printf("Playlist is empty\n");break;    
            }
            printf("Enter song title to search\n");
            fgets(search,20,stdin);
            
             delLen=strlen(search);
            if(search[delLen-1]=='\n') search[delLen-1]='\0';

             flag=-1;
            for (int i = 0; i < songCount; i++)
            {
                if(strcmp(playlist[i],search)==0){
                    flag=i;
                    break;
                }
            }

            if (flag==-1){
                printf("Song not found\n");
            }
            else printf("Song exist in playlist\n");

            break;
        case 5:
            
            sortPlaylist(playlist, songCount);

            if (songCount==0)
            {
                printf("playlist is empty\n");
            }
            else{
                for (int i = 0; i < songCount; i++)
                {
                    printf(" %s\n",playlist[i]) ;
                }
        
            }

            freopen("playlist.txt", "w", fptr);
            if (fptr==NULL){
                printf("Error (not found / open)");
                return -1;
            }

            for (int i = 0; i < songCount; i++)
            {
                fprintf(fptr," %s\n",playlist[i]);
            }
            
            printf("\nExited and Saved...\n");


            fclose(fptr);
            return 0;
            break;
        
        default:
            printf("Plz Enter correct choice\n");
            break;
        }
    } while (choice!=5);
    
    fclose(fptr);

    return 0;
}