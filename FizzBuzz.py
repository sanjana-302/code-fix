#FizzBuzz is a children's counting game commonly used to teach division.
# It also happens to be a very common coding interview problem.
# it's a great test of several basic programming patterns.

for n in range(1, 101):
    if n % 3 == 0 and n % 5 == 0:       # n%15 == 0
        print('FizzBuzz')
    elif n % 3 == 0:
        print('Fizz')
    elif n % 5 == 0:
        print('Buzz')
    else:
        print(n)
