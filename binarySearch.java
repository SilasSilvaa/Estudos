import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int search = binarySearch(arr);
        System.out.println(search);

    }

    private static int binarySearch(int[] arr){
        Scanner scanner = new Scanner(System.in);
        int value = scanner.nextInt();

        int baixo = 0;
        int alto = arr.length - 1;

        while(baixo <= alto){
            int meio = (baixo + alto) / 2;
            int chute = arr[meio];

            if(chute == value){
                return meio;
            }else if(chute > value){
                alto = meio - 1;
            }else{
                baixo = meio + 1;
            }
        }
        return 0;
    }
}
