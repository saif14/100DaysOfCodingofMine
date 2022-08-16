import java.util.Arrays;

class test {
    public static boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length())
            return false;
        int[] s1_ar = new int[26];
        int[] s2_ar = new int[26];
        char[] s1_char = s1.toCharArray();
        char[] s2_char = s2.toCharArray();

        int matches = 0;
        int l = 0;
        int r = 0;
        int ln = s1.length();
        boolean res = false;

        for (int i = 0; i < ln; i++) {
            s1_ar[s1_char[i] - 'a']++;
            s2_ar[s2_char[i] - 'a']++;
        }
        
        System.out.println(Arrays.toString(s1_ar));
        System.out.println(Arrays.toString(s2_ar));

        for (int i = 0; i < 26; i++) {
            if(s1_ar[i]== s2_ar[i]) matches++;
        }
        System.out.println(matches);

        for (r = ln; r < s2.length(); r++) {
            if (matches == 26) return true;
            s2_ar[s2_char[l] - 'a']--;
            if (s2_ar[s2_char[l] - 'a'] != s1_ar[s2_char[l] - 'a'])
                matches--;
            else
                matches++;
            l++;

            s2_ar[s2_char[r] - 'a']++;
            if (s2_ar[s2_char[r] - 'a'] != s1_ar[s2_char[r] - 'a'])
                matches--;
            else
                matches++;

            // int idx = s2_char[r] - 'a';
            // s2_ar[idx]++;
            // if(s2_ar[idx] == s1_ar[idx]) matches++;
            // else if(s1_ar[idx] +1 == s2_ar[idx]) matches--;

            // idx = s2_char[l] - 'a';
            // s2_ar[idx]--;
            // if(s2_ar[idx] == s1_ar[idx]) matches++;
            // else if(s1_ar[idx] - 1 == s2_ar[idx]) matches--;
            // l++;
        }
        return res;
    }

    public static void main(String[] args) {

        boolean res = checkInclusion("abc", "bbbca");
        System.out.println(res);
    }

}