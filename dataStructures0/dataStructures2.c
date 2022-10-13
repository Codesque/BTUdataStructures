
int dataStructures1()
{
    int myGrade;
    scanf("%d" , &myGrade);

    if ((0<= myGrade) && (myGrade <50)) {
        printf("FF");
        return 0;
    }
    if ((50<= myGrade) && (myGrade <60)) {
        printf("DC");
        return 0;
    }
    if ((60<= myGrade) && (myGrade <70)) {
        printf("CC");
        return 0;
    }
    if ((70<= myGrade) && (myGrade <80)) {
        printf("CB");
        return 0;
    }
    if ((80<= myGrade) && (myGrade <90)) {
        printf("BA");
        return 0;
    }
    if ((90<= myGrade) && (myGrade <=100)) {
        printf("AA");
        return 0;
    }

    printf("ValueError : Grade value cant be greater than 100");
    return 0;


}
