def bitstring(num_bits, global_arr):
    if (num_bits == 0):
        print(global_arr)
    else:
        global_arr[num_bits - 1] = 0
        bitstring(num_bits - 1, global_arr)
        global_arr[num_bits - 1] = 1
        bitstring(num_bits - 1, global_arr)


def main():
    num_bits = input("Give me the number of bits:")
    num_bits = int(num_bits)
    global_arr = [None] * num_bits
    bitstring(num_bits, global_arr)


if __name__ == '__main__':
    main()
