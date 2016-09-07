import java.io.*;
import java.util.*;
class Tower_Of_Hanoi
{
    static void hl(int n,char x,char y,char z)
    {
        if(n==1)
        {
            System.out.println("MOVING THE DISK 1 FROM "+x+" TO "+y);
            return;
        }
        hl(n-1,x,z,y);
        System.out.println("MOVING THE DISK "+n+" FROM "+x+" TO "+y);
        hl(n-1,z,y,x);
    }
    public static void main(String[] args)
    {
        int num;
        char A='A',B='B',C='C';
        System.out.println("ENTER THE NUM OF DISK:");
        Scanner s=new Scanner(System.in);
        num=s.nextInt();
        hl(num,A,B,C);
    }
}
