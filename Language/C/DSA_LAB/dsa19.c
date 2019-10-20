/*Write a program in C to create a dictionary structure {word, meaning, opposite}. Sort
them and perform binary search to find a specific word. Allow adding new words. Also
display the most frequently searched word.*/
#include<stdio.h> 
#include<conio.h>
void main()
{ struct node
  {  struct node *next;
     struct node *back;
     char word[20],mean[50],opp[20];
  }*start=NULL,*t,*temp,*temps;
  int ch,s,i=0;
  char w[20],f_w[5][20];
  while(1)
  {system("CLS");
   printf("1.INSERT\n2.DISPLAY\n3.SEARCH\n4.FRQUENTLY_SEARCH_WORD\n5.EXIT");
   scanf("%d",&ch);
   switch(ch)
   { case 1:        t=(struct node *)malloc(sizeof(struct node));
                    printf("ENTER_WORD: ");    
                    scanf("%s",&t->word);
                    printf("MEANING: ");       
                    scanf("%s",&t->mean); 
                    printf("OPPOSITE_WORD: "); 
                    scanf("%s",&t->opp); 
                    if(start==NULL)
                    { t->next=NULL; 
                      t->back=NULL;  
                      start=t; 
                    }
                    else if(strcmp(start->word,t->word)>0)
                    { t->next=start; 
                      t->back=NULL;
                      start->back=t; 
                      start=t; 
                    }   
                    else 
                    { temp=start; s=0;
                      while(temp!=NULL)
                      { if(strcmp(temp->word,t->word)>0)
                        { t->next=temp;
                          t->back=temp->back; 
                          temp->back=t; 
                          temps->next=t;
                          s++; break; 
                         }
                        temps=temp; 
                        temp=temp->next;
                      }
                      if(s==0)
                      { temps->next=t; 
                        t->back=temps; 
                        t->next=NULL; 
                      } 
                    }break;
      case 2:       if(start==NULL)
                    { printf("NO DATA THERE!!"); }
                    else
                    { temp=start;  system("CLS");
                      while(temp!=NULL)
                      {   printf("WORD: %s",temp->word);
                          printf("\nMEANING: %s",temp->mean); 
                          printf("\nOPPOSITE: %s",temp->opp); 
                          printf("\n____________________\n");
                          temp=temp->next; 
                      }
                     }break;
      case 3:     if(start==NULL)
                  { printf("NO DATA THERE!"); }
                  else
                  { printf("GIVE WORD: "); scanf("%s",&w);
                    temp=start;  s=0;
                    while(temp!=NULL)
                    { if(strcmp(temp->word,w)==0)
                      { printf("WORD: %s",temp->word); 
                        printf("\nMEANING: %s",temp->mean); 
                        printf("\nOPPOSITE: %s",temp->opp); 
                        printf("\n____________________\n");
                        strcpy(f_w[i],w); i++; s++;
                        break;
                       }temp=temp->next;
                     }
                     if(s==0)
                     { printf("NOT_FOUND"); }
                   }break;
      case 4:      printf("FREQUENTLY_SEARCH_WORDS");
                   for(s=0;s<i;s++)
                   { printf("\n%s",f_w[s]); }
                   break;;
      case 5:       exit(0);
      default:      printf("invalid");
   }getch();
  }   
}
