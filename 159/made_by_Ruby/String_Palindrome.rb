def str_is_same?(str1, str2)
	if str1 == str2
		return true
	else
		return false
	end
end

S = gets.chomp
if str_is_same?(S, S.reverse)
	puts "Yes"
elsif
	puts "No"
end
