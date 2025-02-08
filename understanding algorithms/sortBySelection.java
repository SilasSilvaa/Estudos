import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> integers = sortBySelection();

        for (Integer integer : integers) {
            System.out.println(integer); //[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
        }


    }
    private static List<Integer> sortBySelection(){
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(5, 3, 6, 2, 10, 1, 2, 8, 9, 4, 7));
        ArrayList<Integer> newArr = new ArrayList<>(list.size());

        int size = list.size();

        for(int i = 0; i < size; i ++){
            int lower = searchLower(list);
            newArr.add(list.get(lower));

            list.remove(lower);
        }

        return newArr;
    }

    private static int searchLower(List<Integer> list){
        int lower = list.getFirst();
        int iLower = 0;

        for(int i = 0; i < list.size(); i++){
            if(list.get(i) < lower){
                lower = list.get(i);
                iLower = i;
            }
        }

        return iLower;
    }
}