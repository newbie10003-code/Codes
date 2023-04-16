public class immutableStrings {
    public static void main(String[] args) {
        // String Class

        // String s = new String("Newbie");
        // System.out.println(s);
        // s = "Bunny";
        // char[] ch = s.toCharArray();
        // System.out.println(s.toString());
        // for (int i = 0; i < ch.length; i++) {
        //     System.out.print(ch[i] + " ");
        // }

        // StringBuffer

        StringBuffer sb = new StringBuffer("Newbie");
        System.out.println(sb.charAt(2));
        System.out.println(sb.hashCode());
        System.out.println(sb);
        System.out.println(sb.reverse());
    }
}
