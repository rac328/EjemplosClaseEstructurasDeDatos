.PHONY: clean All

All:
	@echo "----------Building project:[ Ejemplo_Pila - Debug ]----------"
	@cd "Ejemplo_Pila" && "$(MAKE)" -f  "Ejemplo_Pila.mk"
clean:
	@echo "----------Cleaning project:[ Ejemplo_Pila - Debug ]----------"
	@cd "Ejemplo_Pila" && "$(MAKE)" -f  "Ejemplo_Pila.mk" clean
