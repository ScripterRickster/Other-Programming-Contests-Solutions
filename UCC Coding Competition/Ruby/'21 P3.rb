n = gets.to_i
x, y = gets.split.map(&:to_i)
r = gets.to_i
t = 0

r.times do
  s, e = gets.split.map(&:to_i)

  clamped_start = [s, x].max
  clamped_end   = [e, y].min
  
  diff = clamped_end - clamped_start + 1
  diff = [0, diff].max
  t += diff
end

puts t
