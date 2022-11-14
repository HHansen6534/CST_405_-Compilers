import os

def get_text_files()->str:
    """Returns the path to a text file"""
    os.chdir('Calculator')
    return os.listdir()

def read_and_compute_text_file(list_of_text_files:list):
    """Reads the text file and returns the text
    @param list_of_text_files: The list of text files
    """
    print(list_of_text_files)
    for file in list_of_text_files:
        if file.endswith('.txt'):
            with open(file, 'r') as f:
                string = f.read()
            results = computer_string(string)
            write_results(results, file)
        
        
def computer_string(string:str)->str:
    """Computes the string and returns the result
    @param string: The string to be computed
    """
    return str(eval(string))

def write_results(results:str, file:str)->None:
    """Writes the results to a file
    @param results: The results to be written
    """
    with open(f'Results/{file}_results.txt', 'w') as f:
        f.write(results)
        
if __name__ == '__main__':
    list_of_text_files = get_text_files()
    read_and_compute_text_file(list_of_text_files)
    