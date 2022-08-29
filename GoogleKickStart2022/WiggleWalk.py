def main():
    T = int(input())  # the number of test cases

    for case in range(1, T+1):
        N, R, C, r, c = map(int, input().split())
        instructions = input()  # string of N, S, E or W
        neighbors = {}

        for i in instructions:
            link_neighbors(r, c, neighbors)
            r, c = get_neighbor(r, c, i, neighbors)  # new position

        print('Case #{}: {} {}'.format(case, r, c))


main()