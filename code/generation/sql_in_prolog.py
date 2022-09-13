import sys

def convert_sql_in_prolog(file_name: str):
    lines = []
    with open(file_name, 'r') as file:
        lines = file.readlines()

    if lines == []:
        print('Ошибка открытия файла.')
    else:
        i = 0
        for line in lines:
            begin = line.find('(')
            end = line.find(')')
            lines[i] = line[begin+1:end]
            i += 1
        print(i)
        new_file_name_index_end = file_name.find('.')
        new_file_name = file_name[:new_file_name_index_end] + '.csv'

        with open(new_file_name, 'w') as new_file:
            for line in lines:
                #print(line)
                new_file.write(line+'\n')

    return


def main():
    if len(sys.argv) != 2:
        print("Ошибка. Не хватает пути до файла (2 аргумент).")
    else:
        convert_sql_in_prolog(sys.argv[1])
    return 

if __name__ == "__main__":
    main()