import re, os, sys
from distutils.dir_util import copy_tree

PROJECT_BASE_DIR = os.path.dirname(os.path.abspath(__file__))
TEMPLATE_DIR = f"{PROJECT_BASE_DIR}/template"

if __name__ == "__main__":
    number_of_arguments = len(sys.argv)

    # The first argument is the name of the script and the second should be the name of the lc problem
    if (number_of_arguments < 2):
        raise TypeError("This script requires only one argument: the name of the leetcode problem (e.g. '$ python3 script.py 001_TwoSum').")

    # Parse arguments
    new_directory_name = sys.argv[1]
    problem_number = new_directory_name.split("_")[0]
    problem_name_no_spaces = new_directory_name.split("_")[1]
    seperator = " "
    problem_name_with_spaces = seperator.join(re.sub( r"([A-Z])", r" \1", problem_name_no_spaces).split())
    instance_method_name = sys.argv[2].split(" ")[1].split("(")[0]
    instance_method_return_type = sys.argv[2].split(" ")[0] # TODO: use this and parameter list to make the generated file more accurate
    instance_method_parameter_list = sys.argv[2].split(" ")[1] # TODO: make this work

    # Create the new directory
    new_problem_directory = f"{PROJECT_BASE_DIR}/{new_directory_name}"
    copy_tree(TEMPLATE_DIR, new_problem_directory)

    # Edit the README.md
    readme_path = f"{new_problem_directory}/README.md"
    with open (readme_path, 'r' ) as f:
        content = f.read()
    
    new_content = content.replace("Problem Name", problem_name_with_spaces)

    with open(readme_path, 'w') as f:
        f.write(new_content)
    
    # Edit the name of the instance method
    files = ["main.cpp", "Solution.cpp", "Solution.hpp"]
    for file_name in files:
        file_path = f"{new_problem_directory}/{file_name}"

        with open(file_path, 'r') as f:
            content = f.read()
            
        new_content = content.replace("function", instance_method_name)

        with open(file_path, 'w') as f:
            f.write(new_content)