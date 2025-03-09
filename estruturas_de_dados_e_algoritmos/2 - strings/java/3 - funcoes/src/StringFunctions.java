import java.util.Locale;

public class StringFunctions {
    public static void main(String[] args) {

        String str1 = "Hello, ";
        String str2 = "World!";
        String str3 = "This is a test. Testing, test one, two, three.";
        String str4 = "HELLO, ";

        System.out.println("str1: \"" + str1 + "\"");
        System.out.println("str2: \"" + str2 + "\"");
        System.out.println("str3: \"" + str3 + "\"");
        System.out.println("str4: \"" + str4 + "\"");

        // length()
        System.out.println("str1.length(): " + str1.length());

        // isEmpty()
        System.out.println("str1.isEmpty(): " + str1.isEmpty());

        // equals(Object anObject)
        System.out.println("str1.equals(str2): " + str1.equals(str2));

        // equalsIgnoreCase(String anotherString)
        System.out.println("str1.equalsIgnoreCase(str2): " + str1.equalsIgnoreCase(str2));
        System.out.println("str1.equalsIgnoreCase(str4): " + str1.equalsIgnoreCase(str4));

        // compareTo(String anotherString)
        System.out.println("str1.compareTo(str2): " + str1.compareTo(str2));
        System.out.println("str1.compareTo(str4): " + str1.compareTo(str4));

        // compareToIgnoreCase(String str)
        System.out.println("str1.compareToIgnoreCase(str2): " + str1.compareToIgnoreCase(str2));
        System.out.println("str1.compareToIgnoreCase(str4): " + str1.compareToIgnoreCase(str4));

        // startsWith(String prefix)
        System.out.println("str1.startsWith(\"He\"): " + str1.startsWith("He"));

        // endsWith(String suffix)
        System.out.println("str2.endsWith(\"rld!\"): " + str2.endsWith("rld!"));

        // contains(CharSequence s)
        System.out.println("str2.contains(\"World\"): " + str2.contains("World"));

        // indexOf(int ch)
        // indexOf(int ch, int fromIndex)
        System.out.println("str3.indexOf('y'): " + str3.indexOf('y'));
        System.out.println("str3.indexOf('t'): " + str3.indexOf('t'));
        System.out.println("str3.indexOf('t', 11): " + str3.indexOf('t', 11));
        System.out.println("str3.indexOf('t', 42): " + str3.indexOf('t', 42));

        // indexOf(String str)
        // indexOf(String str, int fromIndex)
        System.out.println("str3.indexOf(\"bla\"): " + str3.indexOf("bla"));
        System.out.println("str3.indexOf(\"test\"): " + str3.indexOf("test"));
        System.out.println("str3.indexOf(\"test\", 11): " + str3.indexOf("Test", 11));
        System.out.println("str3.indexOf(\"test\", 30): " + str3.indexOf("Test", 30));

        // lastIndexOf(int ch)
        // lastIndexOf(int ch, int fromIndex)
        System.out.println("str3.lastIndexOf('t'): " + str3.lastIndexOf('t'));
        System.out.println("str3.lastIndexOf('t', 15): " + str3.lastIndexOf('t', 15));
        System.out.println("str3.lastIndexOf('t', 5): " + str3.lastIndexOf('t', 5));

        // lastIndexOf(String str)
        // lastIndexOf(String str, int fromIndex)
        System.out.println("str3.lastIndexOf(\"test\"): " + str3.lastIndexOf("test"));
        System.out.println("str3.lastIndexOf(\"test\", 15): " + str3.lastIndexOf("test", 15));
        System.out.println("str3.lastIndexOf(\"test\", 5): " + str3.lastIndexOf("test", 5));

        // charAt(int index)
        System.out.println("str1.charAt(0): " + str1.charAt(0)); // H

        // substring(int beginIndex)
        System.out.println("str1.substring(7): " + str1.substring(7)); // World!

        // substring(int beginIndex, int endIndex)
        System.out.println("str1.substring(0, 5): " + str1.substring(0, 5)); // Hello

        // split(String regex)
        String[] parts = str2.split(",");
        System.out.print("str2.split(\",\"): ");
        for (String str : parts) {
            System.out.print(str + " ");
        }
        System.out.println();

        // split(String regex, int limit)
        String[] partsLimited = str2.split(",", 2);
        System.out.print("str2.split(\",\", 2): ");
        for (String str : partsLimited) {
            System.out.print(str + " ");
        }
        System.out.println();

        // trim()
        System.out.println("str3.trim(): \"" + str3.trim() + "\""); // 'Trim me'

        // toLowerCase()
        System.out.println("str1.toLowerCase(): " + str1.toLowerCase()); // hello, world!

        // toUpperCase()
        System.out.println("str1.toUpperCase(): " + str1.toUpperCase()); // HELLO, WORLD!

        // replace(char oldChar, char newChar)
        System.out.println("str1.replace('l', 'p'): " + str1.replace('l', 'p')); // Heplo, Worpd!

        // replaceAll(String regex, String replacement)
        System.out.println("str1.replaceAll(\"o\", \"X\"): " + str1.replaceAll("o", "X")); // HellX, WXrld!

        // replaceFirst(String regex, String replacement)
        System.out.println("str1.replaceFirst(\"o\", \"X\"): " + str1.replaceFirst("o", "X")); // HellX, World!

        // toCharArray()
        char[] charArray = str1.toCharArray();
        System.out.print("str1.toCharArray(): ");
        for (char c : charArray) {
            System.out.print(c + " ");
        }
        System.out.println();

        // valueOf(Various Types)
        System.out.println("String.valueOf(123): " + String.valueOf(123)); // 123

        // matches(String regex)
        System.out.println("str1.matches(\"Hello, World!\"): " + str1.matches("Hello, World!")); // true
        System.out.println("str1.matches(\"World\"): " + str1.matches("World")); // true
        System.out.println("str1.matches(\".*World.*\"): " + str1.matches(".*World.*")); // true

        // concat(String str)
        System.out.println("str1.concat(\" Yeah!\"): " + str1.concat(" Yeah!")); // Hello, World! Yeah!

        // join(delimiter, elements)
        String[] words = { "banana", "abacate", "morango" };
        System.out.println("String.join(\"-\", words): " + String.join("-", words)); // Java String Split Example

        // format(Locale, format, text)
        System.out.println("String.format(Locale.US, \"%.2f\", 2.345): " + String.format(Locale.US, "%.2f", 2.345));
    }
}
