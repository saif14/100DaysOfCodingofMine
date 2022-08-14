public class Minimum_Number_of_Flips_82_1888 {
    public static int minFlips(String s) {
        int ln = s.length();
        s = s+ s;
        int res = 2*ln;
        char[] sn = s.toCharArray();
        // String alt_1 = "";
        char[] alt_1 = new char[res];
        // String alt_0 = "";
        char[] alt_0 = new char[res];
        int diff_1 = 0;
        int diff_0 = 0;
        int l = 0, r = 0;
        for(int i = 0; i < res; i++) {
            alt_1[i] = (i%2 == 0) ? '1' : '0';
            alt_0[i] = (i%2 == 0) ? '0' : '1';
        }

        for(;r<2*ln; r++){
            if(sn[r] != alt_1[r]) diff_1++;
            if(sn[r] != alt_0[r]) diff_0++;

            if(r- l + 1 > ln){
                if(sn[l] != alt_1[l]) diff_1--;
                if(sn[l] != alt_0[l]) diff_0--;
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
