#include<stdio.h>
void check_n_print_Result(float result){
    int result1 = (int) result;
    float check =  result - result1;
    if (check == 0 ) printf("%d",result1);
    else printf("%f",result);   

}
int main(int argc, char const *argv[])
{
    printf("Input a line to execute a simple mathematical operation of one step\nlike + , - , * , /\nNote : all number must be separated by space like\n");
    printf("3 / 5 = 0.2\n---> ");
    float a,b;
    char c;
    scanf("%f %c %f",&a,&c,&b);

    switch (c)
    {
    case '+':
        check_n_print_Result(a + b);
        break;
    case '-':
        check_n_print_Result(a - b);
        break;
    case '*':
        check_n_print_Result(a * b);
        break;
    case '/':
        check_n_print_Result(a / b);
        break;
    
    default:
        printf("Enter a valid expression");
        break;
    }   

    return 0;
}
