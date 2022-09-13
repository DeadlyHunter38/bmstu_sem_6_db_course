def read_all_file(path):
    with open(path, "r") as file_data:
        data = [line.strip() for line in file_data]
    return data