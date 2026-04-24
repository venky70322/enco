compile:
	verilator -Wall --binary --timing --trace encoder.v tb_encoder.v
run:
	./obj_dir/Vencoder
all: compile run
