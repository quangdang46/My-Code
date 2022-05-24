def count_substring(string, sub_string):
    cnt=0
    while string.find(sub_string)>=0:
        cnt+=1
        string=string[string.find(sub_string)+1:]
    return cnt

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)