'''
# Sample code to perform I/O:

name = raw_input()          # Reading input from STDIN
print 'Hi, %s.' % name      # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
num = int(raw_input())
lst = []
for i in range (2,num+1):
    for j in range (2,i):
        if (i%j) == 0:
            break
    else:
        lst.append(i)
str = ' '.join(str(a) for a in lst)
print str
