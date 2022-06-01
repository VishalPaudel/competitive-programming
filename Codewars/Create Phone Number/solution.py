
def create_phone_number(n):
    format = "(...) ...-...."
    copy = ""
    
    i = 0
    j = 0
    while (i < 10):
        if format[j] == ".":
            copy += str(n[i])
            i += 1
            j += 1
        else:
            copy += format[j]
            j += 1
            
    return copy

# EOF


