#include <iostream.h>
#include <conio.h>

main()
{
        //girilen ifadede istenen kelimeyi bulma
        cout<<"----------------Kelime Ara----------------\n\n";
        char cumle[255];
        char kelime[30];
        char bul[255];
        int toplam=0,i=0,len=0,kontrol=0,x=0,blen=0;
        cout<<"Bir cumle girin: ";
        gets(cumle);
        cout<<"\nAranacak kelimeyi girin: ";
        gets(kelime);
        while(cumle[i]!=NULL)
        {
            if(cumle[i]!=' ')
            {
                bul[x]=tolower(cumle[i]); //harfleri küçük harfe çevirerek atar
            }
            else
            {
                bul[x]=' ';
            }
            i++;
            x++;
        }
        for(int e = 0;bul[e]!=NULL; e++) blen++;//kelimelerin bulunduğu dizinin karakter boyutu
        for(int b=0; kelime[b]!=NULL; b++) len++;  //aranacak kelimenin uzunluğu
        for(int y = 0; y < blen; y++)//aranacak metinin karakter sayısı kadar döner
        {
                  for (int j = 0; j < len; j++)//aranan kelimenin karakter sayısı kadar döner
                    {
                            if(bul[y]==tolower(kelime[j]))   //tüm karakterler küçük harfe çevrildiği için aranan kelimenin karakterlerini de küçük harfe çevirip öyle kontrol ediliyor
                            {
                                    ++kontrol;
                                    y++;
                            }
                            else if(bul[y]!=kelime[j] || bul[y]==' ')
                            {
                                kontrol=0;
                                break;
                            }

                    }
                    if(kontrol==len)
                    {
                    	++toplam;
                    	kontrol=0;
                    }
        }
        cout<<"\nGirilen cumlede "<<toplam<<" tane \""<<kelime<<"\" ifadesi bulundu";
        getch();
}