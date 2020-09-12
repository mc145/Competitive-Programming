import java.util.*; 
public class A{
    static Scanner key = new Scanner(System.in); 
    public static void main(String[] args){
        int n = key.nextInt(), m = key.nextInt(), l = key.nextInt(); 
        int times[] = new int[n]; 
        for(int i = 0; i<n; i++){
            int zz = key.nextInt(); 
            times[i] = zz; 
        }
        int first[] = new int[n]; 
        int second[] = new int[n]; 

        for(int i = 0; i<n; i++){
            first[i] = times[i]; 
            second[i] = times[i] + m - 1; 
        }
        for(int time = 1; time<=second[n-1]; time++){
            int cnt = 0; 
            int curI = -1; 
            for(int i = 0; i<n; i++){
                if(time >= first[i] && time <= second[i]){
                    cnt++; 
                }
                if(cnt > l){
                    curI = i; 
                    break; 
                }
            }
        if(cnt > l){
        first[curI] = time - first[curI] + 1 + first[curI]; 
        second[curI] = first[curI] + m - 1; 
        }
        }
        int ans = 0; 
        for(int time = 1; time<second[n-1]; time++){
            int cnts = 0; 
            for(int i = 0; i<n; i++){
                if(time >= first[i] && time <= second[i]){
                    cnts++; 
                }
            }
            if(cnts == 0){
                ans++; 
            }
        }
        System.out.println(ans); 
    }
}