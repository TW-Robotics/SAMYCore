import yaml


def generateTestSkill():
	# Using readlines()
	paramsFile = open('ParametersTypes.txt', 'r')
	Lines = paramsFile.readlines()

	config = {}
        config["SAMYSkillConfig"] = {}

        config["SAMYSkillConfig"]["SkillName"] = "TestSkill"
        config["SAMYSkillConfig"]["Language"] = "C++"
        config["SAMYSkillConfig"]["EntryFile"] = "Skill_1.cpp"
        config["SAMYSkillConfig"]["EntryFunction"] = "testFunction"

        paramsArr = []
	count = 0
	for line in Lines:
		count += 1
	    	param = {}
		param["Name"] = "param_" + str(count)
		lineClean = line.replace( " \n", "" )
	    	param["DataType"] = lineClean
		paramsArr.append(param)

        config["SAMYSkillConfig"]["Parameters"] = paramsArr
	stream = file('document.yaml', 'w')
	yaml.dump(config, stream)    # Write a YAML representation of data to 'document.yaml'.
	print yaml.dump(config)      # Output the document to the screen.




generateTestSkill()
