import random
import string

LIMIT_RECURSION = 2


def program():
    return f"int main() {{ {create_stat_list(0)} return 0; }}"


def create_stat_list(depth):
    if depth >= LIMIT_RECURSION:
        return create_assgn_stat()

    first_statement = create_stat(depth + 1)
    second_statement = create_stat(depth + 1)
    return first_statement + second_statement
