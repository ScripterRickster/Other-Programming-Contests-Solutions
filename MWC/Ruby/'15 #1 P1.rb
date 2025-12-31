n = gets.to_i 
tArr = []

n.times{
  m,s = gets.split.map(&:to_i)
  tArr.insert(tArr.length,(m*60)+s)
}
tArr = tArr.sort
tM,tS = gets.split.map(&:to_i)
tS = (tM*60) + tS
c = 0

while true
  if tArr.length == 0 
    break 
  end
  
  tS -= tArr[0]
  if tS < 0
    break
  end
  tArr.delete_at(0)
  
  c += 1
  
end

puts c
