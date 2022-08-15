import java.util.Arrays;

class test {
    public static boolean checkInclusion(String s1, String s2) {
        int[] s1_ar = new int[26];
        int[] s2_ar = new int[26];
        char[] s1_char = s1.toCharArray();
        char[] s2_char = s2.toCharArray();

        boolean res = false;

        for(Character c: s1_char) {
            s1_ar[c-'a']++;
        }

        int matches = 0;
        int l = 0;
        int r = 0;
        int ln = s1_char.length;
        
        for(int i=0; i<ln; i++){
            s2_ar[s2_char[i]-'a']++;
        }        
        for(int i=0; i<26; i++){
            if(s2_ar[i] != s1_ar[i]) matches++;
        }
        matches = 26 - matches;
        if(matches == 26) return true;
        for(r = ln; r<s2_char.length; r++){
            s2_ar[s2_char[l]-'a']--;
            if(s2_ar[s2_char[l]-'a'] != s1_ar[s2_char[l]-'a']) matches--;
            else matches++;
            l++;

            s2_ar[s2_char[r]-'a']++;
            if(s2_ar[s2_char[r]-'a'] != s1_ar[s2_char[r]-'a']) matches--;
            else matches++;

            if(matches == 26) {res = true; break;}
        }
        return res;
    }

    public static void main(String[] args) {

        boolean res =  checkInclusion("abc","bbbca");
        System.out.println(res);
    }

}