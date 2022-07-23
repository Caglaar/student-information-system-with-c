#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct studentCard{
    int id;
    char name[50];
    char surname[50];
    int password;
    char clas[50];
    // Student lessons and note veriable
        char oneSemesterLes[50];
        char oneSemesterLesStat[20];
        char oneSemesterLes2[50];
        char oneSemesterLes2Stat[20];
        char twoSemesterLes[50];
        char twoSemesterLesStat[20];
        char twoSemesterLes2[50];
        char twoSemesterLes2Stat[20];
        char threeSemesterLes[50];
        char threeSemesterLesStat[20];
        char threeSemesterLes2[50];
        char threeSemesterLes2Stat[20];
        char fourSemesterLes[50];
        char fourSemesterLesStat[20];
        char fourSemesterLes2[50];
        char fourSemesterLes2Stat[20];
        int oneSemesterNot[2];
        int oneSemesterNot2[2];
        int twoSemesterNot[2];
        int twoSemesterNot2[2];
        int threeSemesterNot[2];
        int threeSemesterNot2[2];
        int fourSemesterNot[2];
        int fourSemesterNot2[2];

    struct{// Student lesssons teacher name and surname veriable
        char oneSemesterLesTea[50];
        char oneSemesterLesTeaSurname[50];
        char oneSemesterLes2Tea[50];
        char oneSemesterLes2TeaSurname[50];
        char twoSemesterLesTea[50];
        char twoSemesterLesTeaSurname[50];
        char twoSemesterLes2Tea[50];
        char twoSemesterLes2TeaSurname[50];
        char threeSemesterLesTea[50];
        char threeSemesterLesTeaSurname[50];
        char threeSemesterLes2Tea[50];
        char threeSemesterLes2TeaSurname[50];
        char fourSemesterLesTea[50];
        char fourSemesterLesTeaSurname[50];
        char fourSemesterLes2Tea[50];
        char fourSemesterLes2TeaSurname[50];

    }lessenTeacher;

}student[100];
struct personelCard{
    int id;
    char nameAndSurname[70];
    int password;
    char less[8][50];

}personel[5];
void systemEnter(){
            //System ID ve password's veriable
        int systemId=210;//System officer ýd
        int systemPas=1111;//System officer password
        int ansId;
        int ansPas;
        int k=1;
        char answer3,name[50],surnam[50];
        int personelID,personelPas;
        FILE *personelAdd;
        do{
           //System control
            printf("ID:");
            scanf("%d",&ansId);
            printf("Password:");
            scanf("%d",&ansPas);
            if(ansId==systemId && ansPas==systemPas){
                k=0;
                }
            else{
                puts("\nSifre ya da Id'yi hatali girdiniz!");
                k=1;
                }
        } while(k==1);
        printf("\nMemur veya Ogretim gorevlisi eklemek istermisiniz?[y-n]");
        scanf(" %c",&answer3);
        if(answer3=='Y' || answer3=='y'){
            if((personelAdd=fopen("system.txt","w"))==NULL){
                printf("\nDosya Bulunamadi!");
            }
            else{// creating an officer
                printf("\nMemurun id'sini girin: ");
                printf("\n?");
                scanf("%d",&personelID);
                printf("\nMemurun password'unu girin: ");
                printf("\n?");
                scanf("%d",&personelPas);
                printf("\nMemurun adini girin: ");
                printf("\n?");
                scanf("%s",name);
                printf("\nMemurun soyadini girin: ");
                printf("\n?");
                scanf("%s",surnam);
                fprintf(personelAdd,"%d %d %s %s\n",personelID,personelPas,name,surnam);//write text
                //creating a teacher
                printf("\n1.Ogretim Gorevlisinin id'sini girin: ");
                printf("\n?");
                scanf("%d",&personelID);
                printf("\n1.Ogretim Gorevlisinin password'unu girin: ");
                printf("\n?");
                scanf("%d",&personelPas);
                printf("\n1.Ogretim Gorevlisinin adini girin: ");
                printf("\n?");
                scanf("%s",name);
                printf("\n1.Ogretim Gorevlisinin soyadini girin: ");
                printf("\n?");
                scanf("%s",surnam);
                fprintf(personelAdd,"%d %d %s %s\n",personelID,personelPas,name,surnam);//write text

                printf("\n2.Ogretim Gorevlisinin id'sini girin: ");
                printf("\n?");
                scanf("%d",&personelID);
                printf("\n2.Ogretim Gorevlisinin password'unu girin: ");
                printf("\n?");
                scanf("%d",&personelPas);
                printf("\n2.Ogretim Gorevlisinin adini girin: ");
                printf("\n?");
                scanf("%s",name);
                printf("\n2.Ogretim Gorevlisinin soyadini girin: ");
                printf("\n?");
                scanf("%s",surnam);
                fprintf(personelAdd,"%d %d %s %s\n",personelID,personelPas,name,surnam);

                printf("\n3.Ogretim Gorevlisinin id'sini girin: ");
                printf("\n?");
                scanf("%d",&personelID);
                printf("\n3.Ogretim Gorevlisinin password'unu girin: ");
                printf("\n?");
                scanf("%d",&personelPas);
                printf("\n3.Ogretim Gorevlisinin adini girin: ");
                printf("\n?");
                scanf("%s",name);
                printf("\n3.Ogretim Gorevlisinin soyadini girin: ");
                printf("\n?");
                scanf("%s",surnam);
                fprintf(personelAdd,"%d %d %s %s\n",personelID,personelPas,name,surnam);

                printf("\n4.Ogretim Gorevlisinin id'sini girin: ");
                printf("\n?");
                scanf("%d",&personelID);
                printf("\n4.Ogretim Gorevlisinin password'unu girin: ");
                printf("\n?");
                scanf("%d",&personelPas);
                printf("\n4.Ogretim Gorevlisinin adini girin: ");
                printf("\n?");
                scanf("%s",name);
                printf("\n4.Ogretim Gorevlisinin soyadini girin: ");
                printf("\n?");
                scanf("%s",surnam);
                fprintf(personelAdd,"%d %d %s %s\n",personelID,personelPas,name,surnam);


            }
            fclose(personelAdd);
        }

}
void personelControl(){
    //Officer control
    int id,password,flag=1;
   do{
    printf("\nID:");
    scanf("%d",&id);
    printf("Password:");
    scanf("%d",&password);
    if(id==personel[0].id &&password==personel[0].password){
        flag=0;
    }
    else{
        printf("\nHatali giris yaptiniz !");
        flag=1;
    }
   }while(flag==1);
}
void studentRecord( struct personelCard personel[5]){
    char answer[30];
    int id,password,answer3;
    char name[50],surname[50],oneSemesteroneLes[50],oneSemesteroneLes2[50],twoSemesterLes[50],twoSemesterLes2[50],threSementerLes[50],threSemesterLes2[50],fourSemesterLes[50],fourSemesterLes2[50];
    char clas[30],oneSemesteroneLesTec[50],oneSemesteroneLes2Tec[50],twoSemesterLesTec[50],twoSemesterLes2Tec[50],threSementerLesTec[50],threSemesterLes2Tec[50],fourSemesterLesTec[50],fourSemesterLes2Tec[50];
    puts("Hangi Bolume Ogrenci Kaydi Olusturulcak?");//select a chapter
    puts("Bilgisayar Bolumu");
    puts("Elektrik Bolumu");
    puts("Yazilim Bolumu");
    printf("?");
    scanf("%s",answer);
    strcpy(clas,answer);
    FILE *ptrList;
    if((ptrList=fopen("studentList.txt","a"))==NULL){//File check
        puts("Dosya Bulunamadi!");
    }
    else{
        //Student record
        printf("\nOgrenci Adi Soyadi giriniz:");
        scanf("%s %s",name,surname);
        printf("\nOgrenci ID giriniz:");
        scanf("%d",&id);
        printf("\nOgrencinin sifresini giriniz:");
        scanf("%d",&password);
        printf("\nOgrencinin 1.donem 1.dersini giriniz:");
        scanf("%s",oneSemesteroneLes);
        printf("\nOgrencinin 1.donem 1.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(oneSemesteroneLesTec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(oneSemesteroneLesTec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(oneSemesteroneLesTec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(oneSemesteroneLesTec,personel[4].nameAndSurname);
            }
        printf("\nOgrencinin 1.donem 2.dersini giriniz:");
        scanf("%s",oneSemesteroneLes2);
        printf("\nOgrencinin 1.donem 2.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(oneSemesteroneLes2Tec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(oneSemesteroneLes2Tec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(oneSemesteroneLes2Tec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(oneSemesteroneLes2Tec,personel[4].nameAndSurname);
            }
        printf("\nOgrencinin 2.donem 1.dersini giriniz:");
        scanf("%s",twoSemesterLes);
        printf("\nOgrencinin 2.donem 1.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(twoSemesterLesTec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(twoSemesterLesTec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(twoSemesterLesTec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(twoSemesterLesTec,personel[4].nameAndSurname);
            }
        printf("\nOgrencinin 2.donem 2.dersini giriniz:");
        scanf("%s",twoSemesterLes2);
        printf("\nOgrencinin 2.donem 2.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(twoSemesterLes2Tec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(twoSemesterLes2Tec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(twoSemesterLes2Tec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(twoSemesterLes2Tec,personel[4].nameAndSurname);
            }
        printf("\nOgrencinin 3.donem 1.dersini giriniz:");
        scanf("%s",threSementerLes);
        printf("\nOgrencinin 3.donem 1.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(threSementerLesTec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(threSementerLesTec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(threSementerLesTec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(threSementerLesTec,personel[4].nameAndSurname);
            }
        printf("\nOgrencinin 3.donem 2.dersini giriniz:");
        scanf("%s",threSemesterLes2);
        printf("\nOgrencinin 3.donem 2.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(threSemesterLes2Tec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(threSemesterLes2Tec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(threSemesterLes2Tec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(threSemesterLes2Tec,personel[4].nameAndSurname);
            }
        printf("\nOgrencinin 4.donem 1.dersini giriniz:");
        scanf("%s",fourSemesterLes);
        printf("\nOgrencini 4.donem 1.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(fourSemesterLesTec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(fourSemesterLesTec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(fourSemesterLesTec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(fourSemesterLesTec,personel[4].nameAndSurname);
            }
        printf("\nOgrencinin 4.donem 2.dersini giriniz:");
        scanf("%s",fourSemesterLes2);
        printf("\nOgrencini 4.donem 2.dersi icin ogretmen seciniz!");
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&answer3);
            if(answer3==1){
                strcpy(fourSemesterLes2Tec,personel[1].nameAndSurname);
            }
            else if(answer3==2){
                strcpy(fourSemesterLes2Tec,personel[2].nameAndSurname);
            }
            else if(answer3==3){
                strcpy(fourSemesterLes2Tec,personel[3].nameAndSurname);
            }
            else if(answer3==4){
                strcpy(fourSemesterLes2Tec,personel[4].nameAndSurname);
            }
            //Alinan bilgileri dosyaya yazma
       fprintf(ptrList,"%d %d %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n",id,password,name,surname,clas,oneSemesteroneLes,oneSemesteroneLesTec,oneSemesteroneLes2,oneSemesteroneLes2Tec,
               twoSemesterLes,twoSemesterLesTec,twoSemesterLes2,twoSemesterLes2Tec,threSementerLes,threSementerLesTec,threSemesterLes2,threSemesterLes2Tec,fourSemesterLes,fourSemesterLesTec,fourSemesterLes2,fourSemesterLes2Tec);
    }
    fclose(ptrList);//File close
}
void teacherLesRec(struct personelCard personel[5]){
    int pers1id=personel[1].id;//Which teacher the opened courses belong to
    int pers2id=personel[2].id;
    int pers3id=personel[3].id;
    int pers4id=personel[4].id;
    int ans;
    char les[30];
    FILE *lessFile;
    if((lessFile=fopen("teacherLes.txt","a"))==NULL){
        printf("\nDosya bulunamadi!");
    }
    else{
        printf("\nHangi ogretim gorevlesine ders acmak istiyorsunuz?");//List of faculty members who can offer courses
        printf("\n1)%s",personel[1].nameAndSurname);
        printf("\n2)%s",personel[2].nameAndSurname);
        printf("\n3)%s",personel[3].nameAndSurname);
        printf("\n4)%s",personel[4].nameAndSurname);
        printf("\n?");
        scanf("%d",&ans);
        if(ans==1){
            printf("\nOgretim gorevlesine acmak istediginiz dersi giriniz:");//Assignments are made according to the answer
            scanf("%s",les);
            fprintf(lessFile,"%d %s\n",pers1id,les);//The received information is written to the file
        }
        else if(ans==2){
            printf("\nOgretim gorevlesine acmak istediginiz dersi giriniz:");
            scanf("%s",les);
            fprintf(lessFile,"%d %s\n",pers2id,les);
        }
        else if(ans==3){
            printf("\nOgretim gorevlesine acmak istediginiz dersi giriniz:");
            scanf("%s",les);
            fprintf(lessFile,"%d %s\n",pers3id,les);
        }
        else if(ans==4){
            printf("\nOgretim gorevlesine acmak istediginiz dersi giriniz:");
            scanf("%s",les);
            fprintf(lessFile,"%d %s\n",pers4id,les);
        }
        else{
            printf("\nHatali giris yaptiniz!");
        }
    }
    fclose(lessFile);//File close
}
void transferStudentReg(struct studentCard student[100]){

    FILE *studentFile;//Transfer student information from file to struct
    if((studentFile=fopen("studentList.txt","r"))==NULL){//File open
                        printf("\nDosya Bulunamadi!");
    }
    else{
        int i=0;
        fscanf(studentFile,"%d %d %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",&student[i].id,&student[i].password,student[i].name,student[i].surname,student[i].clas,student[i].oneSemesterLes,student[i].lessenTeacher.oneSemesterLesTea,student[i].lessenTeacher.oneSemesterLesTeaSurname,
                    student[i].oneSemesterLes2,student[i].lessenTeacher.oneSemesterLes2Tea,student[i].lessenTeacher.oneSemesterLes2TeaSurname,
                    student[i].twoSemesterLes,student[i].lessenTeacher.twoSemesterLesTea,student[i].lessenTeacher.twoSemesterLesTeaSurname,
                    student[i].twoSemesterLes2,student[i].lessenTeacher.twoSemesterLes2Tea,student[i].lessenTeacher.twoSemesterLes2TeaSurname,
                    student[i].threeSemesterLes,student[i].lessenTeacher.threeSemesterLesTea,student[i].lessenTeacher.threeSemesterLesTeaSurname,
                    student[i].threeSemesterLes2,student[i].lessenTeacher.threeSemesterLes2Tea,student[i].lessenTeacher.threeSemesterLes2TeaSurname,
                    student[i].fourSemesterLes,student[i].lessenTeacher.fourSemesterLesTea,student[i].lessenTeacher.fourSemesterLesTeaSurname,
                    student[i].fourSemesterLes2,student[i].lessenTeacher.fourSemesterLes2Tea,student[i].lessenTeacher.fourSemesterLes2TeaSurname);
        while(!feof(studentFile)){
                i++;
        fscanf(studentFile,"%d %d %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",&student[i].id,&student[i].password,student[i].name,student[i].surname,student[i].clas,student[i].oneSemesterLes,student[i].lessenTeacher.oneSemesterLesTea,student[i].lessenTeacher.oneSemesterLesTeaSurname,
                    student[i].oneSemesterLes2,student[i].lessenTeacher.oneSemesterLes2Tea,student[i].lessenTeacher.oneSemesterLes2TeaSurname,
                    student[i].twoSemesterLes,student[i].lessenTeacher.twoSemesterLesTea,student[i].lessenTeacher.twoSemesterLesTeaSurname,
                    student[i].twoSemesterLes2,student[i].lessenTeacher.twoSemesterLes2Tea,student[i].lessenTeacher.twoSemesterLes2TeaSurname,
                    student[i].threeSemesterLes,student[i].lessenTeacher.threeSemesterLesTea,student[i].lessenTeacher.threeSemesterLesTeaSurname,
                    student[i].threeSemesterLes2,student[i].lessenTeacher.threeSemesterLes2Tea,student[i].lessenTeacher.threeSemesterLes2TeaSurname,
                    student[i].fourSemesterLes,student[i].lessenTeacher.fourSemesterLesTea,student[i].lessenTeacher.fourSemesterLesTeaSurname,
                    student[i].fourSemesterLes2,student[i].lessenTeacher.fourSemesterLes2Tea,student[i].lessenTeacher.fourSemesterLes2TeaSurname);
        }
        fclose(studentFile);}//File close

}
void transferStudentNots(struct studentCard student[100]){
    FILE *studentNots;
    int id,not[2];
    char lessen[50];
    if((studentNots=fopen("studentNotsList.txt","r"))==NULL){
        printf("\nDosya Bulunamadi!");
    }
    else{
        fscanf(studentNots,"%d %s %d %d",&id,lessen,&not[0],&not[1]);
        for(int i=0;i<100;i++)
        {
            if(student[i].id==id)
                {
                if(strcmp(student[i].oneSemesterLes,lessen)==0){
                    student[i].oneSemesterNot[0]=not[0];
                    student[i].oneSemesterNot[1]=not[1];}
                else if(strcmp(student[i].oneSemesterLes2,lessen)==0){
                    student[i].oneSemesterNot2[0]=not[0];
                    student[i].oneSemesterNot2[1]=not[1];}
                else if(strcmp(student[i].twoSemesterLes,lessen)==0){
                    student[i].twoSemesterNot[0]=not[0];
                    student[i].twoSemesterNot[1]=not[1];}
                else if(strcmp(student[i].twoSemesterLes2,lessen)==0){
                    student[i].twoSemesterNot2[0]=not[0];
                    student[i].twoSemesterNot2[1]=not[1];}
                else if(strcmp(student[i].threeSemesterLes,lessen)==0){
                    student[i].threeSemesterNot[0]=not[0];
                    student[i].threeSemesterNot[1]=not[1];}
                else if(strcmp(student[i].threeSemesterLes2,lessen)==0){
                    student[i].threeSemesterNot2[0]=not[0];
                    student[i].threeSemesterNot2[1]=not[1];}
                else if(strcmp(student[i].fourSemesterLes,lessen)==0){
                    student[i].fourSemesterNot[0]=not[0];
                    student[i].fourSemesterNot[1]=not[1];}
                else if(strcmp(student[i].fourSemesterLes2,lessen)==0){
                    student[i].fourSemesterNot2[0]=not[0];
                    student[i].fourSemesterNot2[1]=not[1];}
                }
        }
        while(!feof(studentNots)){
           fscanf(studentNots,"%d %s %d %d",&id,lessen,&not[0],&not[1]);
        for(int i=0;i<100;i++)
        {
            if(student[i].id==id)
                {
                if(strcmp(student[i].oneSemesterLes,lessen)==0){
                    student[i].oneSemesterNot[0]=not[0];
                    student[i].oneSemesterNot[1]=not[1];}
                else if(strcmp(student[i].oneSemesterLes2,lessen)==0){
                    student[i].oneSemesterNot2[0]=not[0];
                    student[i].oneSemesterNot2[1]=not[1];}
                else if(strcmp(student[i].twoSemesterLes,lessen)==0){
                    student[i].twoSemesterNot[0]=not[0];
                    student[i].twoSemesterNot[1]=not[1];}
                else if(strcmp(student[i].twoSemesterLes2,lessen)==0){
                    student[i].twoSemesterNot2[0]=not[0];
                    student[i].twoSemesterNot2[1]=not[1];}
                else if(strcmp(student[i].threeSemesterLes,lessen)==0){
                    student[i].threeSemesterNot[0]=not[0];
                    student[i].threeSemesterNot[1]=not[1];}
                else if(strcmp(student[i].threeSemesterLes2,lessen)==0){
                    student[i].threeSemesterNot2[0]=not[0];
                    student[i].threeSemesterNot2[1]=not[1];}
                else if(strcmp(student[i].fourSemesterLes,lessen)==0){
                    student[i].fourSemesterNot[0]=not[0];
                    student[i].fourSemesterNot[1]=not[1];}
                else if(strcmp(student[i].fourSemesterLes2,lessen)==0){
                    student[i].fourSemesterNot2[0]=not[0];
                    student[i].fourSemesterNot2[1]=not[1];}
                }
        }
        }
    }
    fclose(studentNots);
}
void studenLessenStat(struct studentCard student[100],int idd2){
    char stat[]="Basarili";
    char stat1[]="Basarisiz";

    if(((student[idd2].oneSemesterNot[0]+student[idd2].oneSemesterNot[1])/2)>50){
        strcpy(student[idd2].oneSemesterLesStat,stat);
    }
    else {strcpy(student[idd2].oneSemesterLesStat,stat1);}
    if(((student[idd2].oneSemesterNot2[0]+student[idd2].oneSemesterNot2[1])/2)>50){
        strcpy(student[idd2].oneSemesterLes2Stat,stat);
    }
    else{strcpy(student[idd2].oneSemesterLes2Stat,stat1);}
     if(((student[idd2].twoSemesterNot[0]+student[idd2].twoSemesterNot[1])/2)>50){
        strcpy(student[idd2].twoSemesterLesStat,stat);
    }
    else{strcpy(student[idd2].twoSemesterLesStat,stat1);}
     if(((student[idd2].twoSemesterNot2[0]+student[idd2].twoSemesterNot2[1])/2)>50){
        strcpy(student[idd2].twoSemesterLes2Stat,stat);
    }
    else{strcpy(student[idd2].twoSemesterLes2Stat,stat1);}
     if(((student[idd2].threeSemesterNot[0]+student[idd2].threeSemesterNot[1])/2)>50){
        strcpy(student[idd2].threeSemesterLesStat,stat);
    }
    else{strcpy(student[idd2].threeSemesterLesStat,stat1);}
     if(((student[idd2].threeSemesterNot2[0]+student[idd2].threeSemesterNot2[1])/2)>50){
        strcpy(student[idd2].threeSemesterLes2Stat,stat);
    }
    else{strcpy(student[idd2].threeSemesterLes2Stat,stat1);}
     if(((student[idd2].fourSemesterNot[0]+student[idd2].fourSemesterNot[1])/2)>50){
        strcpy(student[idd2].fourSemesterLesStat,stat);
    }
    else{strcpy(student[idd2].fourSemesterLesStat,stat1);}
     if(((student[idd2].fourSemesterNot2[0]+student[idd2].fourSemesterNot2[1])/2)>50){
        strcpy(student[idd2].fourSemesterLes2Stat,stat);
    }
    else{strcpy(student[idd2].fourSemesterLes2Stat,stat1);}
}
int main()
{


   systemEnter();//System control fonk.

   int reply,flag=1;// Main menu veriables
   char answer;
   do{
        // The process of assigning the id, name, surname of the civil servant and teacher registered in the system to the variables
    FILE *ptrSystem;
    if((ptrSystem=fopen("system.txt","r"))==NULL){
        printf("\nDosya Bulunamadi!");
    }
    else{
        while(!feof(ptrSystem)){
            for(int i=0;i<5;i++){
            fscanf(ptrSystem,"%d %d %[^\n]s",&personel[i].id,&personel[i].password,personel[i].nameAndSurname);
            }
        }
    }
    fclose(ptrSystem);



        printf("\nOgrenci Bilgilendirme Sistemine Hosgeldiniz.");
        printf("\n1)Ogrenci Isleri Personeli Girisi");
        printf("\n2)Ogretim Gorevlisi Girisi");
        printf("\n3)Ogrenci Girisi");
        printf("\n4)Cikis");
        printf("\nYapmak istediginiz islemi seciniz");
        printf("\n?");
        scanf("%d",&reply);
        if(reply==4){
            system("cls");
            int flag2=1;
            do{
               printf("\nCikis yapmak istediginizden emin misiniz?[Y-N]");
               printf("\n?");
               scanf(" %c",&answer);
            if(answer=='Y' || answer=='y'){
                flag=0;
                flag2=0;
            }
            else if(answer=='N' || answer=='n'){
                flag=1;
                flag2=0;
            }
            else if(answer !='N' || answer !='n' || answer !='y' || answer !='Y'){
                printf("\nHatali giris yaptiniz!");
                flag2=1;
            }
            }while(flag2==1);
        }
        else if(reply==1){
            system("cls");
            personelControl();//Control
            int answ,flagg=1,flagg2=1;
            char ans;
           do{
            puts("1)Ogrenci Kaydi Olusturma");
            puts("2)Ogretim Uyesine Ders Acma");
            puts("3)Cikis");
            printf("?");
            scanf("%d",&answ);
            if(answ==3){
                do{
                printf("\nCikis yapmak istediginizden emin misiniz?[Y-N]");
                printf("\n?");
                scanf(" %c",&ans);
                if(ans=='Y' || ans=='y'){
                    flagg=0;
                    flagg2=0;
                    }
                else if(ans=='N' || ans=='n'){
                    flagg=1;
                    flagg2=0;
                    }
                else if(ans!='Y' || ans!='y' || ans!='N' || ans!='n') {
                    printf("\nHatali giris yaptiniz!");
                    flagg2=1;
                 }
                }while(flagg2==1);
            }
            else if(answ==1){
                int k=1;
                char c;
                do{
                studentRecord(personel);
               for(int i=1;i<2;){
                printf("\nBaska kayit yapcak misiniz?[y-n]");
                scanf(" %c",&c);
                if(c=='y' || c=='Y'){
                    k=1;
                    i++;
                }
                else if(c=='n' || c=='N'){
                    k=0;
                    i++;
                }
                else if(c !='n' || c !='N' || c !='y' || c !='Y'){
                    printf("\nHatali giris yaptiniz!");
                    k=1;
                }
                }
                }while(k==1);
            }
            else if(answ==2){
                int k=1;
                char c;
                do{
                teacherLesRec(personel);
                for(int i=1;i<2;){
                    printf("\nBaska kayit yapcak misiniz?[y-n]");
                    scanf(" %c",&c);
                    if(c=='y' || c=='Y'){
                        k=1;
                        i++;
                    }
                    else if(c=='n' || c=='N'){
                        k=0;
                        i++;
                    }
                    else if(c !='n' || c !='N' || c !='y' || c !='Y'){
                        printf("\nHatali giris yaptiniz!");
                        k=1;}
                }
                }while(k==1);
           }
           }while(flagg==1);
        }
        else if(reply==2){
            system("cls");
            transferStudentReg(student);//Ogrenci Kaydi eklenmis olmasi durumuna göre tekrar stracta ataniyor
            int flagg=1,ans1;//Menu degiskenleri
            char an;//Menu degiskeni
            int idd;
            int id,password,flag5=1;
            do{
                printf("\nID:");//Ogretim Gorevlisi Kontrol
                scanf("%d",&id);
                printf("Password:");
                scanf("%d",&password);
                for(int i=1;i<5;i++){
                    if(id==personel[i].id){
                        if(password==personel[i].password){
                            flag5=0;
                            printf("\nHosgeldiniz %s\n",personel[i].nameAndSurname);
                            idd=i;//Burada Personelin structtaki yeri bulunuyor
                        }
                        else{
                            printf("\nSifre veya id hatali girildi!");
                        }
                    }
                }
                }while(flag5==1);

                //Dosyanin icinden ogretmene ait dersler cekiliyor
                FILE *ptrLesTeac;
                if((ptrLesTeac=fopen("teacherLes.txt","r"))==NULL){
                    printf("\nHatali giris yaptiniz!");
                }
                else{

                    int id2;
                    char les[50];
                    int j=0;
                    fscanf(ptrLesTeac,"%d %s",&id2,les);
                    if(personel[idd].id==id2){
                        strcpy(personel[idd].less[j],les);//Ogretmene ait ise derslere aliniyor
                        j++;
                    }
                    while(!feof(ptrLesTeac)){

                    fscanf(ptrLesTeac,"%d %s",&id2,les);
                    if(personel[idd].id==id2){
                        strcpy(personel[idd].less[j],les);
                        j++;
                    }
                    }
                }
                fclose(ptrLesTeac);


            do{
                printf("\n1)Ogrenci Not Girisi");
                printf("\n2)Cikis");
                printf("\n?");
                scanf("%d",&ans1);
                if(ans1==2){
                    system("cls");
                    printf("\nCikis yapmak istediginize emin misiniz?[y-n]");
                    scanf(" %c",&an);
                    if(an=='y' || an=='Y'){
                        flagg=0;
                    }
                    else if(an=='n' || an=='N'){
                        flagg=1;
                    }
                    else if(an!='N' || an!='n' || an!='y' || an!='Y'){
                        printf("\nHatali giris yaptiniz!\n");
                        flagg=1;
                    }
                }
                else if(ans1==1){
                system("cls");
                int stuId,studentsTurn;//Ogrencinin ID sini ve sirasini tutmak icin degiskenler
                printf("\nNot girmek istediginiz ogrencinin ID'sini giriniz:");
                scanf("%d",&stuId);
                for(int i=0;i<100;i++){
                    if(student[i].id==stuId){
                        studentsTurn=i;//Ogrencinin structtaki sirasini buluyor
                        break;
                    }
                }
                FILE *studenNotsList;// Burda ogrencilerin notlarini dosyaya atmak icin dosya aciyorum
                if((studenNotsList=fopen("studentNotsList.txt","a"))==NULL){
                    printf("\nNotlar icin ilk dosya acmalisiniz!");
                }
                else{
                for(int j=0;j<9;j++){
                    //Ogrencinin aldigi ders ile ogretmenin verdigi ders kontrol edliliyor
                    //Eger ayni ise ogretmene ders icin not girilmesi soyleniyor
                    //Ayni zamanda alinan notlar dosyaya ekleniyor
                    if(strcmp(personel[idd].less[j],student[studentsTurn].oneSemesterLes)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].oneSemesterLes);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].oneSemesterNot[0],&student[studentsTurn].oneSemesterNot[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].oneSemesterLes,student[studentsTurn].oneSemesterNot[0],student[studentsTurn].oneSemesterNot[1]);
                    }
                    else if(strcmp(personel[idd].less[j],student[studentsTurn].oneSemesterLes2)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].oneSemesterLes2);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].oneSemesterNot2[0],&student[studentsTurn].oneSemesterNot2[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].oneSemesterLes2,student[studentsTurn].oneSemesterNot2[0],student[studentsTurn].oneSemesterNot2[1]);
                    }
                    else if(strcmp(personel[idd].less[j],student[studentsTurn].twoSemesterLes)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].twoSemesterLes);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].twoSemesterNot[0],&student[studentsTurn].twoSemesterNot[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].twoSemesterLes,student[studentsTurn].twoSemesterNot[0],student[studentsTurn].twoSemesterNot[1]);
                    }
                    else if(strcmp(personel[idd].less[j],student[studentsTurn].twoSemesterLes2)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].twoSemesterLes2);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].twoSemesterNot2[0],&student[studentsTurn].twoSemesterNot2[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].twoSemesterLes2,student[studentsTurn].twoSemesterNot2[0],student[studentsTurn].twoSemesterNot2[1]);
                    }
                    else if(strcmp(personel[idd].less[j],student[studentsTurn].threeSemesterLes)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].threeSemesterLes);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].threeSemesterNot[0],&student[studentsTurn].threeSemesterNot[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].threeSemesterLes,student[studentsTurn].threeSemesterNot[0],student[studentsTurn].threeSemesterNot[1]);
                    }
                    else if(strcmp(personel[idd].less[j],student[studentsTurn].threeSemesterLes2)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].threeSemesterLes2);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].threeSemesterNot2[0],&student[studentsTurn].threeSemesterNot2[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].threeSemesterLes2,student[studentsTurn].threeSemesterNot2[0],student[studentsTurn].threeSemesterNot2[1]);
                    }
                    else if(strcmp(personel[idd].less[j],student[studentsTurn].fourSemesterLes)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].fourSemesterLes);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].fourSemesterNot[0],&student[studentsTurn].fourSemesterNot[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].fourSemesterLes,student[studentsTurn].fourSemesterNot[0],student[studentsTurn].fourSemesterNot[1]);
                    }
                    else if(strcmp(personel[idd].less[j],student[studentsTurn].fourSemesterLes2)==0){
                        printf("Ogrencinin %s Dersinin vize ve final notunu giriniz:",student[studentsTurn].fourSemesterLes2);
                        printf("\n?");
                        scanf("%d %d",&student[studentsTurn].fourSemesterNot2[0],&student[studentsTurn].fourSemesterNot2[1]);
                        fprintf(studenNotsList,"%d %s %d %d\n",student[studentsTurn].id,student[studentsTurn].fourSemesterLes2,student[studentsTurn].fourSemesterNot2[0],student[studentsTurn].fourSemesterNot2[1]);
                    }
                }
                }
                fclose(studenNotsList);

                }
            }while(flagg==1);
        }
        else if(reply==3){
            system("cls");
            int flagg=1,ans1;//Menu degiskenleri
            char an;//Menu degiskeni
            int idd2;
            transferStudentReg(student);
            //Ogrenci Kontrol
            int id,password,flag3=1;// Ogrenci Kontrol
        do{
            printf("\nID:");
            scanf("%d",&id);
            printf("Password:");
            scanf("%d",&password);
            for(int i=0;i<100;i++){
                if(id==student[i].id){
                    if(password==student[i].password){
                        flag3=0;
                        printf("\nHosgeldin %s %s\n",student[i].name,student[i].surname);
                        idd2=i;//Burda ogrencinin structtaki konumu  alýnýp ona göre program vs basiliyor
                    }
                    else{
                        printf("\nSifre veya id hatali girildi!");
                    }
                }
            }

        }while(flag3==1);
            do{
                //Ogrenci ara menu
                printf("\n1)Ders Programi");
                printf("\n2)Ogrenci Belgesi");
                printf("\n3)Ders islemleri");
                printf("\n4)Cikis");
                printf("\n?");
                scanf("%d",&ans1);
                if(ans1==4){
                    printf("\nCikis yapmak istediginize emin misiniz?[y-n]");
                    scanf(" %c",&an);
                    if(an=='y' || an=='Y'){
                        flagg=0;
                    }
                    else if(an=='n' || an=='N'){
                        flagg=1;
                    }
                    else if(an!='N' || an!='n' || an!='y' || an!='Y'){
                        printf("\nHatali giris yaptiniz!\n");
                        flagg=1;
                    }
                }
                else if(ans1==1){
                    system("cls");
                    printf("\n*******************************************************************************");
                    printf("\n************************1.DONEM DERS PROGRAMI**********************************");
                    printf("\n%-20s%-20s%-20s%-20s%-20s\n","PAZARTESI","SALI","CARSANBA","PERSENBE","CUMA");
                    printf("%-20s%-20s%",student[idd2].oneSemesterLes,student[idd2].oneSemesterLes2);
                    printf("\n%-20s%-20s%",student[idd2].oneSemesterLes,student[idd2].oneSemesterLes2);

                    printf("\n*******************************************************************************");
                    printf("\n************************2.DONEM DERS PROGRAMI**********************************");
                    printf("\n%-20s%-20s%-20s%-20s%-20s\n","PAZARTESI","SALI","CARSANBA","PERSENBE","CUMA");
                    printf("%-40s%-60s%",student[idd2].twoSemesterLes,student[idd2].twoSemesterLes2);
                    printf("\n%-40s%-60s%",student[idd2].twoSemesterLes,student[idd2].twoSemesterLes2);

                    printf("\n*******************************************************************************");
                    printf("\n************************3.DONEM DERS PROGRAMI**********************************");
                    printf("\n%-20s%-20s%-20s%-20s%-20s\n","PAZARTESI","SALI","CARSANBA","PERSENBE","CUMA");
                    printf("%-20s%-40s%",student[idd2].threeSemesterLes,student[idd2].threeSemesterLes2);
                    printf("\n%-20s%-40s%",student[idd2].threeSemesterLes,student[idd2].threeSemesterLes2);

                    printf("\n*******************************************************************************");
                    printf("\n************************4.DONEM DERS PROGRAMI**********************************");
                    printf("\n%-20s%-20s%-20s%-20s%-20s\n","PAZARTESI","SALI","CARSANBA","PERSENBE","CUMA");
                    printf("%-20s%-20s%-20s"," ",student[idd2].fourSemesterLes,student[idd2].fourSemesterLes2);
                    printf("\n%-20s%-20s%-20s"," ",student[idd2].fourSemesterLes,student[idd2].fourSemesterLes2);
                }
                else if(ans1==2){
                    system("cls");
                    printf("*************************OGRENCI BELGESI**************************************");
                    printf("\n******************************************************************************");
                    printf("\nOKUL ADI: KOCAELI UNIVERSITESI");
                    printf("\nOGRENCININ ADI:%s",student[idd2].name);
                    printf("\nOGRENCININ SOYADI:%s",student[idd2].surname);
                    printf("\nOGRENCI ID:%d",student[idd2].id);
                    printf("\nOGRENCININ BOLUMU:%s\n",student[idd2].clas);
                    printf("********************************************************************************");
                }
                else if(ans1==3){
                    system("cls");
                    transferStudentNots(student);
                    studenLessenStat(student,idd2);
                    printf("***********************DERS ISLEMLERI******************************");
                    printf("\n*****************************************************************");
                    printf("\n*************************1.DONEM***********************************");
                    printf("\n%-20s%-20s%-20s","DERS ADI","DERS PUANI","DERS DURUMU");
                    printf("\n%-20s%-20d%-20s",student[idd2].oneSemesterLes,(student[idd2].oneSemesterNot[0]+student[idd2].oneSemesterNot[1])/2,student[idd2].oneSemesterLesStat);
                    printf("\n%-20s%-20d%-20s",student[idd2].oneSemesterLes2,(student[idd2].oneSemesterNot2[0]+student[idd2].oneSemesterNot2[1])/2,student[idd2].oneSemesterLes2Stat);

                    printf("\n*************************2.DONEM***********************************");
                    printf("\n%-20s%-20s%-20s","DERS ADI","DERS PUANI","DERS DURUMU");
                    printf("\n%-20s%-20d%-20s",student[idd2].twoSemesterLes,(student[idd2].twoSemesterNot[0]+student[idd2].twoSemesterNot[1])/2,student[idd2].twoSemesterLesStat);
                    printf("\n%-20s%-20d%-20s",student[idd2].twoSemesterLes2,(student[idd2].twoSemesterNot2[0]+student[idd2].twoSemesterNot2[1])/2,student[idd2].twoSemesterLes2Stat);

                    printf("\n*************************3.DONEM***********************************");
                    printf("\n%-20s%-20s%-20s","DERS ADI","DERS PUANI","DERS DURUMU");
                    printf("\n%-20s%-20d%-20s",student[idd2].threeSemesterLes,(student[idd2].threeSemesterNot[0]+student[idd2].threeSemesterNot[1])/2,student[idd2].threeSemesterLesStat);
                    printf("\n%-20s%-20d%-20s",student[idd2].threeSemesterLes2,(student[idd2].threeSemesterNot2[0]+student[idd2].threeSemesterNot2[1])/2,student[idd2].threeSemesterLes2Stat);

                    printf("\n*************************4.DONEM***********************************");
                    printf("\n%-20s%-20s%-20s","DERS ADI","DERS PUANI","DERS DURUMU");
                    printf("\n%-20s%-20d%-20s",student[idd2].fourSemesterLes,(student[idd2].fourSemesterNot[0]+student[idd2].fourSemesterNot[1])/2,student[idd2].fourSemesterLesStat);
                    printf("\n%-20s%-20d%-20s",student[idd2].fourSemesterLes2,(student[idd2].fourSemesterNot2[0]+student[idd2].fourSemesterNot2[1])/2,student[idd2].fourSemesterLes2Stat);
                }
            }while(flagg==1);

        }




    }while(flag==1);






    return 0;
}
