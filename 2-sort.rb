#!/usr/bin/ruby

numbers = ARGV.select { |arg| arg.match?(/\A-?\d+\z/) }

numbers.map!(&:to_i)
numbers.sort!

numbers.each do |number|
  puts number
end
