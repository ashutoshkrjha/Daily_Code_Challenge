def towerofhanoi(num_discs, frompeg, topeg, auxpeg):
    if (num_discs == 1):
        print("Move Disc 1 from Peg " + frompeg + " to Peg " + topeg)
        return

    else:
        towerofhanoi(num_discs - 1, frompeg, auxpeg, topeg)
        print("Move Disc " + str(num_discs) + " from Peg " + frompeg +
              " to Peg " + topeg)
        towerofhanoi(num_discs - 1, auxpeg, topeg, frompeg)


def main():
    num_discs = input("Give me the number of discs in TOH: ")
    num_discs = int(num_discs)
    towerofhanoi(num_discs, "A", "C", "B")


if __name__ == '__main__':
    main()
