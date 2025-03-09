public class Imutability {
    public static void main(String[] args) {
        String str = "Hello world!";
        char[] arr = str.toCharArray();
        arr[7] = '7';
        str = new String(arr);

        System.out.println(str);
    }
}