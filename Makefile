.PHONY: clean All

All:
	@echo "----------Building project:[ PL2Moni - Debug ]----------"
	@cd "PL2Moni" && "$(MAKE)" -f  "PL2Moni.mk"
clean:
	@echo "----------Cleaning project:[ PL2Moni - Debug ]----------"
	@cd "PL2Moni" && "$(MAKE)" -f  "PL2Moni.mk" clean
