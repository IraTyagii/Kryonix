

set -ex



! test -f $PREFIX/include/boost/python.hpp
! test -d $PREFIX/include/boost/python
test -f $PREFIX/lib/libboost_exception.a
test -f $PREFIX/lib/libboost_test_exec_monitor.a
test ! -f $PREFIX/lib/libboost_atomic.a
test -f $PREFIX/lib/libboost_atomic.so
test ! -f $PREFIX/lib/libboost_chrono.a
test -f $PREFIX/lib/libboost_chrono.so
test ! -f $PREFIX/lib/libboost_container.a
test -f $PREFIX/lib/libboost_container.so
test ! -f $PREFIX/lib/libboost_context.a
test -f $PREFIX/lib/libboost_context.so
test ! -f $PREFIX/lib/libboost_contract.a
test -f $PREFIX/lib/libboost_contract.so
test ! -f $PREFIX/lib/libboost_coroutine.a
test -f $PREFIX/lib/libboost_coroutine.so
test ! -f $PREFIX/lib/libboost_date_time.a
test -f $PREFIX/lib/libboost_date_time.so
test ! -f $PREFIX/lib/libboost_filesystem.a
test -f $PREFIX/lib/libboost_filesystem.so
test ! -f $PREFIX/lib/libboost_graph.a
test -f $PREFIX/lib/libboost_graph.so
test ! -f $PREFIX/lib/libboost_iostreams.a
test -f $PREFIX/lib/libboost_iostreams.so
test ! -f $PREFIX/lib/libboost_locale.a
test -f $PREFIX/lib/libboost_locale.so
test ! -f $PREFIX/lib/libboost_log.a
test -f $PREFIX/lib/libboost_log.so
test ! -f $PREFIX/lib/libboost_log_setup.a
test -f $PREFIX/lib/libboost_log_setup.so
test ! -f $PREFIX/lib/libboost_math_c99.a
test -f $PREFIX/lib/libboost_math_c99.so
test ! -f $PREFIX/lib/libboost_math_c99f.a
test -f $PREFIX/lib/libboost_math_c99f.so
test ! -f $PREFIX/lib/libboost_math_tr1.a
test -f $PREFIX/lib/libboost_math_tr1.so
test ! -f $PREFIX/lib/libboost_math_tr1f.a
test -f $PREFIX/lib/libboost_math_tr1f.so
test ! -f $PREFIX/lib/libboost_prg_exec_monitor.a
test -f $PREFIX/lib/libboost_prg_exec_monitor.so
test ! -f $PREFIX/lib/libboost_program_options.a
test -f $PREFIX/lib/libboost_program_options.so
test ! -f $PREFIX/lib/libboost_random.a
test -f $PREFIX/lib/libboost_random.so
test ! -f $PREFIX/lib/libboost_regex.a
test -f $PREFIX/lib/libboost_regex.so
test ! -f $PREFIX/lib/libboost_serialization.a
test -f $PREFIX/lib/libboost_serialization.so
test ! -f $PREFIX/lib/libboost_system.a
test -f $PREFIX/lib/libboost_system.so
test ! -f $PREFIX/lib/libboost_thread.a
test -f $PREFIX/lib/libboost_thread.so
test ! -f $PREFIX/lib/libboost_timer.a
test -f $PREFIX/lib/libboost_timer.so
test ! -f $PREFIX/lib/libboost_type_erasure.a
test -f $PREFIX/lib/libboost_type_erasure.so
test ! -f $PREFIX/lib/libboost_unit_test_framework.a
test -f $PREFIX/lib/libboost_unit_test_framework.so
test ! -f $PREFIX/lib/libboost_wave.a
test -f $PREFIX/lib/libboost_wave.so
test ! -f $PREFIX/lib/libboost_wserialization.a
test -f $PREFIX/lib/libboost_wserialization.so
test ! -f $PREFIX/lib/libboost_math_c99l.a
test -f $PREFIX/lib/libboost_math_c99l.so
test ! -f $PREFIX/lib/libboost_math_tr1l.a
test -f $PREFIX/lib/libboost_math_tr1l.so
exit 0
