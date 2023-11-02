#!/usr/bin/python3
'''
comment
'''


def island_perimeter(grid):
    '''
    comment
    '''
    inner_list, item = len(grid), len(grid[0])
    perimeter = 0
    for i in range(inner_list):
        for j in range(item):
            if grid[i][j] == 1:
                # check to the left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # check to the right
                if j == item-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # check to the top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # check to the bottom
                if i == inner_list-1 or grid[i+1][j] == 0:
                    perimeter += 1
    return perimeter
