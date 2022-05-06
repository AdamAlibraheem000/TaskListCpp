.PHONY: clean All

All:
	@echo "----------Building project:[ TaskListCpp - Debug ]----------"
	@cd "TaskListCpp" && "$(MAKE)" -f  "TaskListCpp.mk"
clean:
	@echo "----------Cleaning project:[ TaskListCpp - Debug ]----------"
	@cd "TaskListCpp" && "$(MAKE)" -f  "TaskListCpp.mk" clean
