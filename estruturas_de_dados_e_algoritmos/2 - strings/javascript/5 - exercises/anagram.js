function is_anagram(s, t) {
    const s_sorted = s.split('').sort().join('');
    const t_sorted = t.split('').sort().join('');

    return s_sorted === t_sorted;

}

function is_anagram_2(s, t) {
    const count = new Array(26).fill(0);

    for (let i = 0; i < s.length; i++) {
        const index = s.charCodeAt(i) - 'a'.charCodeAt(0);
        count[index]++;
    }

    for (let i = 0; i < t.length; i++) {
        const index = t.charCodeAt(i) - 'a'.charCodeAt(0);
        count[index]--;
    }

    for (const num of count) {
        if (num !== 0) {
            return false;
        }
    }

    return true;
}

console.log(is_anagram_2("abc", "cba"));