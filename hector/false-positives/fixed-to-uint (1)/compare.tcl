set_custom_solve_script "orch_multipliers"
set_user_assumes_lemmas_procedure "miter"

create_design -name spec -top spec
vcs -sverilog spec.v
compile_design spec

create_design -name impl -top impl
cppan impl.cpp
compile_design impl

proc miter {} {
        # map_by_name -inputs -implphase 1 -specphase 1
        lemma out_equiv = spec.out(1) == impl.out(1)
}

compose
solveNB proof
proofwait
listproof
simcex -txt counter_example.txt out_equiv
quit
