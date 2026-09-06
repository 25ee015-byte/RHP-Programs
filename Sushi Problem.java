import java.util.*;
class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int ars[] = new int[n];
    int arn[] = new int[m];
    for(int i=0; i<n; i++){
      ars[i] = sc.nextInt();
    }
    for(int i=0; i<m; i++){
      arn[i] = sc.nextInt();
    }
    Arrays.sort(ars);
    Arrays.sort(arn);
    int shari = ars.length-1;
    int neta = arn.length-1;
    int count = 0;
    while(shari>=0 && neta >= 0){
      if(2*ars[shari] >= arn[neta]){
        count++;
        shari--;
        neta--;
      } else {
        neta--;
      }
    }
    System.out.println(count);
    sc.close();
  }
}