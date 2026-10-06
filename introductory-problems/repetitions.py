dna_seq = input()
maximum_len_substring = 1
curr_len = 1

for i in range(1, len(dna_seq)):
    if (dna_seq[i] == dna_seq[i-1]):
        curr_len += 1
        maximum_len_substring = max(curr_len, maximum_len_substring)
    elif (dna_seq[i] != dna_seq[i-1]):
        curr_len = 1

print(maximum_len_substring)