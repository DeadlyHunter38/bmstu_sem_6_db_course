import sys
from random import randint
from constants import *
from read_file import *

def generate_db_start(file_name, exponent):
    surnames = read_all_file('surnames.txt')
    amount_rows = 10**exponent
    with open(file_name, 'w') as file:
        for i in range(amount_rows):
            k = randint(MIN_K, MAX_K)
            age = randint(MIN_AGE, MAX_AGE)
            cabinet = randint(MIN_CABINET, MAX_CABINET)
            file.write("comp_one({}, '{}', {}, {}).\n".format(i+1, surnames[k], age, cabinet))

def generate_db_next(file_name, new_file_name, num_column):
    lines = []
    with open(file_name, 'r') as file:
        lines = file.readlines()

    if lines == []:
        print('Ошибка открытия файла.')
    else:
        i = 0
        if num_column == 5:
            posts = ['Начальник', 'Менеджер', 'Уборщик', 'Директор', 'Статист']
            for line in lines:
                end = line.find(')')
                post_i = randint(MIN_POST, MAX_POST)
                lines[i] = line[:end] + ', ' + "'" + posts[post_i] + "'" + line[end:]
                i += 1
        elif num_column == 6:
            for line in lines:
                end = line.find(')')
                count_work_days = randint(MIN_WORK_DAY, MAX_WORK_DAY)
                lines[i] = line[:end] + ', ' + str(count_work_days) + line[end:]
                i += 1
        elif num_column == 7:
            sexs = ['М', 'Ж']
            for line in lines:
                end = line.find(')')
                sex = randint(MIN_SEX, MAX_SEX)
                lines[i] = line[:end] + ', ' + "'" + sexs[sex] + "'" + line[end:]
                i += 1
        elif num_column == 8:
            for line in lines:
                end = line.find(')')
                children = randint(MIN_CHILDREN, MAX_CHILDREN)
                lines[i] = line[:end] + ', ' + str(children) + line[end:]
                i += 1
        elif num_column == 9:
            for line in lines:
                end = line.find(')')
                salary = randint(MIN_SALARY, MAX_SALARY)
                lines[i] = line[:end] + ', ' + str(salary) + line[end:]
                i += 1
        elif num_column == 10:
            for line in lines:
                end = line.find(')')
                fine = randint(MIN_FINE, MAX_FINE)
                lines[i] = line[:end] + ', ' + str(fine) + line[end:]
                i += 1
        elif num_column == 11:
            for line in lines:
                end = line.find(')')
                number_build = randint(MIN_BUILD, MAX_BUILD)
                lines[i] = line[:end] + ', ' + str(number_build) + line[end:]
                i += 1
        elif num_column == 12:
            countries = read_all_file('countries.txt')
            for line in lines:
                end = line.find(')')
                c_i = randint(MIN_COUNTRY, MAX_COUNTRY)
                lines[i] = line[:end] + ', ' + "'" + countries[c_i] + "'" + line[end:]
                i += 1
        elif num_column == 13:
            for line in lines:
                end = line.find(')')
                place = randint(MIN_PLACE, MAX_PLACE)
                lines[i] = line[:end] + ', ' + str(place) + line[end:]
                i += 1      

        with open(new_file_name, 'w') as new_file:
            for line in lines:
                #print(line)
                new_file.write(line)


def main():
    if len(sys.argv) != 3:
        print("Ошибка. Не хватает кол-во столбцов (2 аргумент) и экспоненты (3 аргумент).")
    else:
        begin_num_columns = int(sys.argv[1])
        file_name = 'db_' + str(begin_num_columns) + '_' + str(sys.argv[2]) + '.pl'
        print(file_name)
        generate_db_start(file_name, int(sys.argv[2]))
        
        for i in range(begin_num_columns + 1, 14):
            new_file_name = 'db_' + str(i) + '_' + str(sys.argv[2]) + '.pl'
            print(f'new_file_name = {new_file_name}, file_name = {file_name}')
            generate_db_next(file_name, new_file_name, num_column=i)
            file_name = new_file_name
    return 

if __name__ == "__main__":
    main()