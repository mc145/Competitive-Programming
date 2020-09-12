import java.util.*; 
public class sample{
    static Scanner key = new Scanner(System.in); 
    public static void main(String[] args){
        int n = key.nextInt(); 
        int sum = 0; 
        for(int i = 0; i<n; i++){
            int a = key.nextInt(); 
            sum+=a; 
        }
        System.out.println(sum);
    }
}