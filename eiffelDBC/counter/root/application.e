note
	description: "Summary description for {APPLICATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32
create
	make
feature {NONE} --init

	make
		--run application	
		local
		 c:MY_COUNTER


		do
			--implememtaion
			create {MY_COUNTER} c.make (5)

			print(c.value)

		end

end
