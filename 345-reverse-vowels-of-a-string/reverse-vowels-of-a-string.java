class Solution {
    public String reverseVowels(String s) {

        ArrayList<Character> vowel = new ArrayList<>();
        ArrayList<Integer> ids = new ArrayList<>();

        for(int i=0;i<s.length();i++){

            char ch = Character.toLowerCase(s.charAt(i));

            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowel.add(s.charAt(i));
                ids.add(i);
            }
        }

        Collections.reverse(vowel);

        char[] arr = s.toCharArray();

        for(int i=0;i<vowel.size();i++){
            arr[ids.get(i)] = vowel.get(i);
        }

        return new String(arr);
    }
}