func isAnagram(s string, t string) bool {
	if(len(s)!= len(t)) {return false;}
	first := make(map[rune]int);
	second := make(map[rune]int);
	for _,n := range s{
		first[n]++;
	}
	for _,n := range t{
		second[n]++;
	}
	for k, v := range first {
		if second[k] != v {
			return false
		}
	}
	return true
}
