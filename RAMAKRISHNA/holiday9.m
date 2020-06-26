%imple syntax of rows and columns of a matrix
ramakrishna = readtable('ramakrishna.xlsx')
ramakrishna = [ramakrishna.Match1,ramakrishna.Match2,ramakrishna.Match3,ramakrishna.Match4,ramakrishna.Match5]

a = ramakrishna(2:5,:)
v2 = ramakrishna(:,5)
v2(2) = 11
r = v2 + 1
v1 = ramakrishna(:,2)
vs = v1 + v2
max(vs)
sqrt(vs)
size(vs)
[dr,dc] = size(vs)
[xlarge,index] = max(vs)

p = randi(10,5)
p = randi(20,5,7)
q = randn(5)
q1 = q(1,:)
q1m = mean(q1)
mean(q)
mean(q,1)%Above command and this command is same column wise mean 
mean(q,2)%Row wise mean of the elements

