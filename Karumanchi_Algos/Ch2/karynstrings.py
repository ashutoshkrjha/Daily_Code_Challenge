def kstring(num_bits, global_arr, k):
    if (num_bits == 0):
        print(global_arr)
    else:
        for x in range(k + 1):
            global_arr[num_bits - 1] = x
            kstring(num_bits - 1, global_arr, k)


def main():
    num_bits = input("Give me the number of bits:")
    num_bits = int(num_bits)

    k = input("Give me k for k-ary strings:")
    k = int(k)
    global_arr = [None] * num_bits
    kstring(num_bits, global_arr, k)


if __name__ == '__main__':
    main()
