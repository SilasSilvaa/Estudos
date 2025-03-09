import java.util.regex.*;
import java.util.ArrayList;
import java.util.List;

public class RegularExpression {

    public static void main(String[] args)  {
        System.out.println(validateCEP("12345-678")); // true
        System.out.println(validateCEP("12345678")); // true
        System.out.println(validateCEP("1234-5678")); // false

        System.out.println(removeNonDigits("94923784799"));
        System.out.println(removeNonDigits("213.445.034-82"));

        System.out.println(validateBrDomain("batata.com.br")); // true
        System.out.println(validateBrDomain("banana.com")); // false

        String text = "Para mais informações, contate-nos em contato@exemplo.com ou suporte@exemplo.com.br.";
        List<String> emails = findEmails(text);

        if (!emails.isEmpty()) {
            System.out.println("Emails encontrados:");
            for (String email : emails) {
                System.out.println(email);
            }
        } else {
            System.out.println("Nenhum email encontrado.");
        }
    }

    public static boolean validateCEP(String cep) {
        String regex = "^\\d{5}-?\\d{3}$";
        return Pattern.matches(regex, cep);
    }

    public static String removeNonDigits(String string) {
        return string.replaceAll("\\D", "");
    }

    public static boolean validateBrDomain(String domain) {
        String regex = "\\.br$";
        return Pattern.matches(regex, domain);
    }

    public static List<String> findEmails(String string) {
        String regex = "\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}\\b";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(string);

        List<String> emails = new ArrayList<>();
        while (matcher.find()) {
            emails.add(matcher.group());
        }

        return emails;
    }
}
