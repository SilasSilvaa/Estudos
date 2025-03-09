public class Cpf {
    public static String removeNonDigits(String str) {
        String regex = "\\D";
        return str.replaceAll(regex, "");
    }

    public static String removeNonDigits2(String str) {

        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < str.length(); i++) {
            if (Character.isDigit(str.charAt(i))) {
                sb.append(str.charAt(i));
            }
        }

        return sb.toString();
    }

    public static void main(String[] args) {
        System.out.println(removeNonDigits("123.123.123-12"));
        System.out.println(removeNonDigits2("123.123.123-12"));
    }
}