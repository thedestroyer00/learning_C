//C program that reads recoards of students(name , roll no, date of birth , marks) and print it.

# include <stdio.h>
# include <stdlib.h>
# define NAME_SIZE 30;
typedef unsigned int ui;

typedef struct DOB{
    ui y;
    ui m;
    ui d;
} DOB;

typedef struct marks{
    ui phy;
    ui mth;
    ui cp;
} marks;

typedef struct student{
    char *name;
    unsigned int roll;
    DOB *d;
    marks *m;
} student;

char* getName(){
    size_t sz = NAME_SIZE;
    size_t i = 0;
    char *name = (char*)malloc(sizeof(char)*sz);
    printf("Enter name : ");
    char ch;
    while((ch = getchar()) != '\n' && i < sz){
        name[i] = ch;
        name[++i] = '\0';
    }
    
    return name;
}
int checkMarks(ui p, ui m, ui c){
    if(p > 100 || m > 100 || c > 100)
        return 0;
    else 
        return 1;
}

int checkDate(ui y, ui m, ui d){
    if((y < 1980 || y > 2021)|| m > 12 || d > 32)
        return 0;
    else 
        return 1;
}

DOB* getDOB(){
    DOB *date = (DOB*)malloc(sizeof(DOB));
    printf("Enter Date of Birth(yyyy month day) : ");
    scanf(" %d %d %d", &(date->y), &(date->m), &(date->d));
    if(checkDate(date->y, date->m, date->d))
        return date;
    else{
        printf("Invalide Date!");
        exit(1);
    }
}

marks* getMark(){
    marks* mark = (marks*)malloc(sizeof(marks));
    printf("Enter marks in physics maths cprogramming :");
    scanf(" %d %d %d", &(mark->phy), &(mark->mth), &(mark->cp));
    if(checkMarks(mark->phy, mark->mth, mark->cp))
        return mark;
    else{
        printf("Invalide Marks!");
        exit(1);
    }
}

void printMarks(const marks *m){
    printf("physics : %d \nmaths : %d \nc programming : %d\n",
        m->phy, m->mth, m->cp);
}

void printDate(const DOB *d){
    printf("Date of birth : %d %d %d ", d->y, d->m, d->d);
}

student* getStudent(){
    student *s = (student*)malloc(sizeof(student));
    s->name = getName();
    printf("Enter roll no: ");
    scanf(" %d", &(s->roll));
    s->d = getDOB();
    s->m = getMark();
    return s;
}

void printStudent(const student* s){
    printf("\nStudent info : \n");
    printf("Name : %s\n", s->name);
    printf("Roll no: %d\n", s->roll);
    printMarks(s->m);
    printDate(s->d);
    printf("\n");
}

void freemem(student* s){
    free(s->name);
    free(s->d);
    free(s->m);
    free(s);
}

int main(){
    student *s = getStudent();
    printStudent(s);
    freemem(s);
    return 0;
}
