set_custom_solve_script "orch_multipliers"
set_user_assumes_lemmas_procedure "miter"

create_design -name spec -top impl
scdtan impl.cpp -DSC_INCLUDE_FX -DSYSTEMC_DTONLY
compile_design spec

create_design -name impl -top impl
scdtan impl.cpp -DSC_INCLUDE_FX -DSYSTEMC_DTONLY
compile_design impl

proc miter {} {
        lemma out_equiv = impl.out(1) == 41'b00000000000000000000000000000000000000000
}

compose
solveNB proof
proofwait
listproof
simcex -txt counter_example.txt out_equiv
quit
