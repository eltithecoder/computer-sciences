#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-science   |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/


def main():
    """Main entry point"""

    values = []
    print("Enter values, Q to quit")

    user_input = input("")
    while user_input.upper() != "Q":
        values.append(float(user_input))
        user_input = input("")

    print(values)
    print(f"Min is {min(values)}, max is {max(values)}")


if __name__ == '__main__':  # BLACK MAGIC!
    main()