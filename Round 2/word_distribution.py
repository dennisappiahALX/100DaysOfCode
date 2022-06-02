# Read text from a file, and count the occurence of words in that text
# Example:
# count_words("The cake is done. It is a big cake!") 
# --> {"cake":2, "big":1, "is":2, "the":1, "a":1, "it":1}

def read_file_content(filename):
    with open(filename, "r") as f:
        file_content = f.read()

    return file_content
# print(read_file_content("./story.txt"))

def count_words():
    text = read_file_content("./story.txt")
    # print(text)
    text_list = text.split()
    dict_count = {}

    for txt in text_list:
        if txt not in dict_count:
            dict_count[txt] = 1
        else:
            dict_count[txt] = dict_count[txt] + 1


    return dict_count

print(count_words())
