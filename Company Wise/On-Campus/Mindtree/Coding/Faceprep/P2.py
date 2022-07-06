# Reverse Words in a String

def reverseWords(s):
    arr = s.split(" ")
    newArr = [x[::-1] for x in arr]
    return str(' '.join(newArr))
    

if __name__=='__main__':
    s = str(input())
    newSen = reverseWords(s)
    print(newSen)