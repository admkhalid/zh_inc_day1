def possibleJumps(a = "", curr_index = 0, path = ""):
    path = path + str(curr_index) + " "

    if curr_index == len(a) - 1:
        print(path)
        return
    
    if(a[curr_index+1] == '0'):
        possibleJumps(a, curr_index + 1, path)
    if(a[curr_index+2] == '0'):
        possibleJumps(a, curr_index + 2, path)

possibleJumps("0100010")