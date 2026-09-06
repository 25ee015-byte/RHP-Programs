import java.util.*;
class Program_6{
    //Adjacent cell sum 
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        int matrix[][] = new int[R][C];
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                matrix[i][j] = sc.nextInt();
            }
        }
        int row = sc.nextInt();
        int col = sc.nextInt();
        final int diff[][]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        int sum = 0;
        for(int i = 0; i < 8; i++){
            int adjRow = row + diff[i][0];
            int adjCol = col + diff[i][1];
            if(adjCol >= 0 && adjCol < C && adjRow >= 0 && adjRow < R){
                sum += matrix[adjRow][adjCol];
            }
        }
        System.out.println(sum);
    }
}