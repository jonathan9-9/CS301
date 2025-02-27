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


def create_stat(depth):
    if depth >= LIMIT_RECURSION:
        return create_assgn_stat()

    return random.choice([create_cmpd_stat, create_if_stat, create_iter_stat,
                         lambda d: create_assgn_stat(), create_decl_stat])(depth)


def create_cmpd_stat(depth):
    return f"{{ {create_stat_list(depth + 1)} }}"


def create_if_stat(depth):

    return random.choice([
        f"if ({create_expression()}) {create_stat(depth + 1)}",
        f"if ({create_expression()}) {create_cmpd_stat(depth + 1)}",
        f"if ({create_expression()}) {create_stat(depth + 1)} else {create_stat(depth + 1)}",
        f"if ({create_expression()}) {create_cmpd_stat(depth + 1)} else {create_stat(depth + 1)}",
        f"if ({create_expression()}) {create_stat(depth + 1)} else {create_cmpd_stat(depth + 1)}",
        f"if ({create_expression()}) {create_cmpd_stat(depth + 1)} else {create_cmpd_stat(depth + 1)}",
    ])


def create_iter_stat(depth):

    body = create_stat(depth + 1) if random.choice([True, False]) else create_cmpd_stat(depth + 1)
    return f"while ({create_expression()}) {body}"


def create_assgn_stat():
    return f"{create_id()} = {create_expression()};"


def create_decl_stat(depth):
    var_type = define_type()
    var_name = create_id()
    return random.choice([
        f"{var_type} {var_name};",
        f"{var_type} {var_name} = {create_expression()};"
    ])


def create_expression():
    if random.random() > 0.5:
        return f"{random.choice([create_id(), create_const()])} {create_operator()}"
    else:
        return random.choice([create_id(), create_const()])


def define_type():
    return random.choice(["int", "float"])


def create_operator():
    return random.choice(["+", "-", "*", "/"])


def create_id():
    first_char = str(random.choice(string.ascii_letters + "_"))
    remaining_chars = ''.join(random.choice(list(string.ascii_letters + string.digits + "_")) for _ in range(2))
    return first_char + remaining_chars


def create_const():
    constant = str(random.choice(string.digits)) + ''.join(random.choice(list(string.digits)) for _ in range(2))
    return constant
