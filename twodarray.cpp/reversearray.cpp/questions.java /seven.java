import java.util.*;
class Main{
    public static void main(String[] args){
        int n=1;
        while(n<=20){
            if(n%3==0){
                n++;
                continue;
            }
            System.out.println(n);
            n++;
        }
        
        
    }
}