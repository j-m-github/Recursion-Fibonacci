def main():
    while True:
        try:
            x = int(input("Amount of Fibonaccis: "))
        except ValueError:
            print("Please provide a valid integer.")
            continue
        break
    fibonacci = []
    for i in range(x):
        fibonacci.append(calculate(i + 1))
    print(fibonacci)


def calculate(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    return calculate(n - 2) + calculate(n - 1)

main()