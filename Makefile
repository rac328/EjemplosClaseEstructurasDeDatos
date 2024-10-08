.PHONY: clean All

All:
	@echo "----------Building project:[ EjercicioNodosPersonas - Debug ]----------"
	@cd "EjercicioNodosPersonas" && "$(MAKE)" -f  "EjercicioNodosPersonas.mk"
clean:
	@echo "----------Cleaning project:[ EjercicioNodosPersonas - Debug ]----------"
	@cd "EjercicioNodosPersonas" && "$(MAKE)" -f  "EjercicioNodosPersonas.mk" clean
