library(ggplot2)

year = seq(1979,2008,1)
accidents = c(4,0,1,1,1,3,1,1,2,1,6,0,3,2,0,1,5,2,1,6,0,2,2,2,3,3,2,3,2,0)

data = data.frame(accidents = accidents)
rownames(data) = year

#a
probability_11million = data["2006",]/11000000
print(probability_11million)


#b
p = 0.00000001
n = 11000000

x = c()
for(i in 0:12){
  x = c(x,choose(n,i) * p^i * (1-p)^(n-i))
}
x

#c
#i - 4 fatal accidents
print(x[4])

#ii - 10 fatal accidents
print(x[10])

#iii - between 1 - 5 inclusive
print(sum(x[1:5]))

