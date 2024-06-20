#include<stdio.h>
void main(){
    int a;
    a= printf("Deepshikha");
    printf("Length =%d\n",a);//DeepshikhaLength =10
    printf("Length =%d\n",printf("Deepshikha"));//DeepshikhaLength =10
    
    a=10;
    float b=1.2;
    printf("Hi\n");//Hi
    printf("a=%d,b=%f\n",a,b);//10 1.200000
    printf("Sum=%f\n",a+b);//11.200000
    printf("a=%d,b=%f,sum=%f\n",a,b,a+b);//10 1.200000 11.200000
    printf("%d + %f = %f\n",a,b,a+b);//10 + 1.200000 11.200000
    printf("%d\n",a);//10
    printf("Deepshikha Vishwakarma");//Deepshikha Vishwakarma
    
    printf("Deepshikha\n");
    printf("Deep\n");
    printf("Deepu\n");
    
    printf("\aDeepshikha\n");//-Deepshikha
    printf("Naresh\tSuresh\n");//Naresh    Suresh
    printf("S\b\vAmeer Khan\f\n");//S--Ameer Khan-
    printf("section-365682\rHyd\n");//section-365682
                                     //Hyd
                                   
    printf("\a\n");  //-
    printf("Naresh\\tSuresh\\Hyd\n");//Naresh\tSuresh\Hyd
    printf("Naresh\\\tSuresh\\\nHyd\n"); //Naresh\    Suresh\
                                       //Hyd    (if we write \\ //together then it will print one //backslash)
    printf("12%c34%c56\n",9,10);//12 34
                                //56 (9=\t ascii,10=\n ascii value.)
    printf("\"Deepshikha\"\n");//"Deepshikha"   printf("\--------\");it //will remove this statement and print remaining context
    printf("printf(\"Deep\");\n");//printf("Deep");   printf("----\--------\---");it will remove this statement and print remaining context
    printf("%cDeep%c\n",34,34);//Deep  34= " ascii value
    printf("Bharthi addre is %u\n","Bharthi");//Bharthi addre is 4202767
    printf("Bharthi\n"+1);//harthi   baseaddress + 1 ==4202768
    printf(1+"Bhaurthi\n"+1);//harthi
    printf("Bharathi\n"-1);//Grbage value or blank
    printf("Krish %c Radha\n",3);//krish love Radha
    printf("%c + %c = %c\n",1,2,3);//smile + anothersmile = love
    
    
    
}