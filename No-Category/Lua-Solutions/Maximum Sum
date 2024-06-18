local n = io.read("*n")
local nums = {}
for i=1,n do
  table.insert(nums,io.read("*n"))
end
local iMax,eMax = 0,0
for _,v in pairs(nums) do
  local newMax
  if eMax > iMax then
    newMax = eMax
  else
    newMax = iMax
  end
  iMax = eMax + v
  eMax = newMax

end

if eMax > iMax then
  print(eMax)
else
  print(iMax)
end
