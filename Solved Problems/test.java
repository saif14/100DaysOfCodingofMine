import java.util.Arrays;

class test {

    public static int minFlips(String s) {
        int ln = s.length();
        s = s+ s;
        int res = s.length();
        String alt_1 = "";
        String alt_0 = "";
        int diff_1 = 0;
        int diff_0 = 0;
        int l = 0, r = 0;
        for(int i = 0; i < s.length(); i++) {
            alt_1 = (i%2 == 0) ? alt_1+"1" : alt_1+"0";
            alt_0 = (i%2 == 0) ? alt_0+"0" : alt_0+"1";;
        }

        for(;r<s.length(); r++){
            if(s.charAt(r) != alt_1.charAt(r)) diff_1++;
            if(s.charAt(r) != alt_0.charAt(r)) diff_0++;

            if(r- l + 1 > ln){
                if(s.charAt(l) != alt_1.charAt(l)) diff_1--;
                if(s.charAt(l) != alt_0.charAt(l)) diff_0--;
                l++;
            }
            if((r- l + 1) == ln) res = Math.min(res, Math.min(diff_1, diff_0));
        }

        return res;

    }
    public static void main(String[] args) {
        System.out.println(minFlips("111000"));
    }

}