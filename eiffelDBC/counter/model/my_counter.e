note
	description: "Summary description for {MY_COUNTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MY_COUNTER

create -- we need to explicitly declare which feature is a constructor.
	make

feature -- attribute: counter value
	value:INTEGER

feature --contructor

make(v:INTEGER)

-- Initilaize counter with value v
-- NO require clause here means that there's no preconditoin
-- any input value v will be accpeted and used to asign to value

do
	value := v
end

feature --Commands (mutators in java, commands does not have return type)
	increment_by(v:INTEGER)

		require -- precondition, sum of value and v cannot be greater than 10
			not_above_max: value + v < 10
		do
			--implementation
			value:= value + v
			ensure -- postcondition: whats expected to be true , garrenteed by supplier
				value_incremented: value = old value + v
		end

	decrement_by(v:INTEGER)

		require --precondition, cannot go below min
			not_below_min: value + v >= 0
		do
			value:= value - v
			ensure -- postcondition
			value_decremented: value = old value - v

		end

invariant
	counter_in_range:
	0 <= value and value <=10


end

