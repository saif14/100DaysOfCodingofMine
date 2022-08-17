import java.util.HashMap;
import java.util.Map;

public class _84_804_UniqueMorseCodeWords {
    public static String convertToMorse(String s) {
		String[] morseList = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
				"--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
		String transformedString = "";
		for(Character c: s.toCharArray()) {
			transformedString+=morseList[c-'a'];
		}
		
		return transformedString;
	}

	public static int uniqueMorseRepresentations(String[] words) {
		
		Map<String, Integer> countMap = new HashMap<>();
		
		for(String word: words) {
			String transformedString = convertToMorse(word);
			countMap.put(transformedString, countMap.getOrDefault(transformedString, 0)+1);
		}
		
		return countMap.size();
	}

	public static void main(String[] args) {
		String[] words = {"a"};
		System.out.println(uniqueMorseRepresentations(words));

	}
}
