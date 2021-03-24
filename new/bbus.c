#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct seatplan
{
    int seatno;
    char name[20];
    char phoneno[20];
};

struct buspr
{
    int code;
    char from[100];
    char to[100];
    int starth;
    int startm;
    int finh;
    int finm;
    struct seatplan sp[20];
    int sold;
    int taka;
};

struct buspr bus[13];

int main()
{
    FILE *inp;
    int i,j,command,buscode,seatno,c,d,f,q,indx;
    char from[20],to[20];
    inp=fopen("input.txt","r");
    for(i=0; i<12; i++)
    {
        fscanf(inp,"%d",&bus[i].code);
        fscanf(inp,"%s",&bus[i].from);
        fscanf(inp,"%s",&bus[i].to);
        fscanf(inp,"%d:%d",&bus[i].starth,&bus[i].startm);
        fscanf(inp,"%d:%d",&bus[i].finh,&bus[i].finm);
        for(j=0; j<20; j++)
            fscanf(inp,"%d==%s %s",&bus[i].sp[j].seatno,&bus[i].sp[j].name,&bus[i].sp[j].phoneno);
        fscanf(inp,"%d",&bus[i].sold);
        fscanf(inp,"%d",&bus[i].taka);
    }
    fclose(inp);
    //inp=fopen("input.txt","w");
    while(1)
    {
        printf("\n\n\t\t\tBUS RESERVATION SYSTEM");
        printf("\n\t\t1.Seat Booking");
        printf("\n\t\t2.Booking Cancel");
        printf("\n\t\t3.Show details");
        printf("\n\t\t4.Status");
        printf("\n\t\t5.Exit");
        printf("\n\t\tInput Command:");
        scanf("%d",&command);
        getchar();
        if(command==1)
        {
            printf("\n\t\tFrom:");
            scanf("%s",&from);
            printf("\n\t\tTo:");
            scanf("%s",&to);
            //find
            f=0;
            for(i=0; i<12; i++)
            {
                c=strcmp(bus[i].from,from);
                d=strcmp(bus[i].to,to);
                if(!c && !d)
                {
                    //print(bus);
                    printf("\n\t\tBus Code:%d",bus[i].code);
                    printf("\n\t\tFrom:%s\tTo:%s",bus[i].from,bus[i].to);
                    printf("\n\t\tStart Time:%d:%d",bus[i].starth,bus[i].startm);
                    printf("\n\t\tSold Ticket:%d",bus[i].sold);
                    printf("\n\t\tFare:%d\n",bus[i].taka);

                    f=1;
                }
            }
            if(!f)
                printf("\n\t\tNo bus in this route....\n");
            else
            {
abr_den:
                printf("\n\t\tYOur preferred BusCode:");
                scanf("%d",&buscode);
                q=0;
                for(i=0; i<12; i++)
                {
                    if(bus[i].code==buscode && bus[i].sold<20)
                    {
                        q=1;
                        indx=i;
                        printf("\n\t\tBus Code:%d",bus[i].code);
                        printf("\n\t\tFrom:%s\tTo:%s",bus[i].from,bus[i].to);
                        printf("\n\t\tStart Time:%d:%d",bus[i].starth,bus[i].startm);
                        printf("\n\t\tSold Ticket:%d",bus[i].sold);
                        printf("\n\t\tFare:%d\n\t\tAvailable seats",bus[i].taka);
                        printf("\n\t\tSeat no\t\tStatus\t\tSeat no\t\tStatus\t\tSeat no\t\tStatus\t\tSeat no\t\tStatus\n");
                        for(j=0; j<20; j+=4)
                        {
                            if(strcmp(bus[i].sp[j].name,"Empty")==0)
                                printf("\n\t\t%d\t\tavailable",j+1);
                            else
                                printf("\n\t\t%d\t\tnot available",j+1);
                            if(strcmp(bus[i].sp[j+1].name,"Empty")==0)
                                printf("\t\t%d\t\tavailable",j+2);
                            else
                                printf("\t\t%d\t\tnot available",j+2);
                            if(strcmp(bus[i].sp[j+2].name,"Empty")==0)
                                printf("\t\t%d\t\tavailable",j+3);
                            else
                                printf("\t\t%d\t\tnot available",j+3);
                            if(strcmp(bus[i].sp[j+3].name,"Empty")==0)
                                printf("\t\t%d\t\tavailable",j+4);
                            else
                                printf("\t\t%d\t\tnot available",j+4);
                        }
                        break;
                    }
                }
                if(!q)
                {
                    printf("\n\t\tWrong Bus code or House full\n\t\tAbr den");
                    goto abr_den;
                }
                else
                {
seat_den:
                    printf("\n\t\tSeat no:");
                    scanf("%d",&seatno);
                    seatno--;
                    if(strcmp(bus[indx].sp[seatno].name,"Empty")==0)
                    {
                        printf("\n\t\tYour name: ");
                        scanf("%s",&bus[indx].sp[seatno].name);
                        printf("\n\t\tYour phone number");
                        scanf("%s",&bus[indx].sp[seatno].phoneno);
                        bus[indx].sold++;
                    }
                    else
                    {
                        printf("\n\t\tSeat you choosed is booked already..Choose another wisely");
                        goto seat_den;
                    }
                }
            }
            inp=fopen("input.txt","w");
            for(i=0; i<12; i++)
            {
                fprintf(inp,"%d\n",bus[i].code);
                fprintf(inp,"%s\n",bus[i].from);
                fprintf(inp,"%s\n",bus[i].to);
                fprintf(inp,"%d:%d\n",bus[i].starth,bus[i].startm);
                fprintf(inp,"%d:%d\n",bus[i].finh,bus[i].finm);
                for(j=0; j<20; j++)
                    fprintf(inp,"%d==%s %s\n",bus[i].sp[j].seatno,bus[i].sp[j].name,bus[i].sp[j].phoneno);
                fprintf(inp,"%d\n",bus[i].sold);
                fprintf(inp,"%d\n",bus[i].taka);
            }
            fclose(inp);
        }
        else if(command==2)
        {
bhul_input:
            printf("\n\t\tGive us your BusCODE");
            scanf("%d",&buscode);
            printf("\n\t\tGive us your Seat no");
            scanf("%d",&seatno);
            q=0;
            seatno--;
            for(i=0; i<12; i++)
            {
                if(bus[i].code==buscode && strcmp(bus[i].sp[seatno].name,"Empty")!=0)
                {
                    q=1;
                    bus[i].sold=bus[i].sold-1;
                    bus[i].sp[seatno].name[0]='E';
                    bus[i].sp[seatno].name[1]='m';
                    bus[i].sp[seatno].name[2]='p';
                    bus[i].sp[seatno].name[3]='t';
                    bus[i].sp[seatno].name[4]='y';
                    bus[i].sp[seatno].name[5]='\0';
                    bus[i].sp[seatno].phoneno[0]='N';
                    bus[i].sp[seatno].phoneno[1]='U';
                    bus[i].sp[seatno].phoneno[2]='L';
                    bus[i].sp[seatno].phoneno[3]='L';
                    bus[i].sp[seatno].phoneno[4]='\0';

                }
            }
            if(!q)
            {
                printf("\n\t\tInvalid Input..try again");
                goto bhul_input;
            }
            inp=fopen("input.txt","w");
            for(i=0; i<12; i++)
            {
                fprintf(inp,"%d\n",bus[i].code);
                fprintf(inp,"%s\n",bus[i].from);
                fprintf(inp,"%s\n",bus[i].to);
                fprintf(inp,"%d:%d\n",bus[i].starth,bus[i].startm);
                fprintf(inp,"%d:%d\n",bus[i].finh,&bus[i].finm);
                for(j=0; j<20; j++)
                    fprintf(inp,"%d==%s %s\n",bus[i].sp[j].seatno,bus[i].sp[j].name,bus[i].sp[j].phoneno);
                fprintf(inp,"%d\n",bus[i].sold);
                fprintf(inp,"%d\n",bus[i].taka);
            }
            fclose(inp);
        }
        else if(command==3)
        {
            printf("\n\t\tFrom:");
            scanf("%s",&from);
            printf("\n\t\tTo:");
            scanf("%s",&to);
            //find
            f=0;
            for(i=0; i<12; i++)
            {
                c=strcmp(bus[i].from,from);
                d=strcmp(bus[i].to,to);
                if(!c && !d)
                {
                    //print(bus);
                    printf("\n\t\tBus Code:%d",bus[i].code);
                    printf("\n\t\tFrom:%s\tTo:%s",bus[i].from,bus[i].to);
                    printf("\n\t\tStart Time:%d:%d",bus[i].starth,bus[i].startm);
                    printf("\n\t\tSold Ticket:%d",bus[i].sold);
                    printf("\n\t\tFare:%d\n",bus[i].taka);
                    printf("\n\t\tSeat no\t\tStatus\t\tSeat no\t\tStatus\t\tSeat no\t\tStatus\t\tSeat no\t\tStatus");
                    for(j=0; j<20; j+=4)
                    {
                        if(strcmp(bus[i].sp[j].name,"Empty")==0)
                            printf("\n\t\t%d\tavailable",j+1);
                        else
                            printf("\n\t\t%d\tnot available",j+1);
                        if(strcmp(bus[i].sp[j+1].name,"Empty")==0)
                            printf("\t\t%d\tavailable",j+2);
                        else
                            printf("\t\t%d\tnot available",j+2);
                        if(strcmp(bus[i].sp[j+2].name,"Empty")==0)
                            printf("\t\t%d\tavailable",j+3);
                        else
                            printf("\t\t%d\tnot available",j+3);
                        if(strcmp(bus[i].sp[j+3].name,"Empty")==0)
                            printf("\t\t%d\tavailable",j+4);
                        else
                            printf("\t\t%d\tnot available",j+4);
                    }
                    f=1;
                }
            }
            if(!f)
                printf("\n\t\tNo bus in this route....\n");
        }
        else if(command==4)
        {
            //code--from--to--start
        }
        else
        {
            //sure?
        }
    }

}
