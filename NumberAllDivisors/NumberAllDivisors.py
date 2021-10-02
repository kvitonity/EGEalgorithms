def divisors(number : int) -> []:
    dv = [1, number]
    if number > 3:
        k = 2
        while k * k <= number:
            if number % k == 0:
                if number // k > k:
                    dv.append(k)
                    dv.append(number // k)
                else:
                    dv.append(k)
            k = k + 1
    dv.sort()
    return dv

# example
print(divisors(int(input())))
