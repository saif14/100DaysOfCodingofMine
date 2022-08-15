public class Roman_to_Integer_83_13 {
    /**
     * @param s
     * @return
     */
    public static int romanToInt(String s) {

        char[] sn = s.toCharArray();
        Map<Character, Integer> symbolMap = new HashMap<Character, Integer>();
        symbolMap.put('I', 1);
        symbolMap.put('V', 5);
        symbolMap.put('X', 10);
        symbolMap.put('L', 50);
        symbolMap.put('C', 100);
        symbolMap.put('D', 500);
        symbolMap.put('M', 1000);

        int res = symbolMap.get(sn[sn.length - 1]);

        for (int i = sn.length - 2; i >= 0; i--) {
            if (symbolMap.get(sn[i]) < symbolMap.get(sn[i + 1])) {
                res -= symbolMap.get(sn[i]);
            } else {
                res += symbolMap.get(sn[i]);
            }

        }

        return res;
    }

    public static void main(String[] args) {
        System.out.println(romanToInt("IX"));
    }
}
