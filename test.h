#include "csp.h"
#define EQsubstsubst )EQ_T(
$zeval((( (label)
         (subst)
         (
                 (lambda) ((x) (y) (z))
                 (
                         (cond)
                         (((atom)(z))
                          (
                                  (cond)
                                  (((eq) (z) (y)) (x))
                                  (((quote)(T)) (z))
                                  )
                                 )
                         (((quote) (T))
                          ((cons)
                           ((subst) (x) (y) ((car) (z)))
                           ((subst) (x) (y) ((cdr) (z)))
                                  )
                                 )
                         )
                 )
                ) ((quote) (m)) ((quote) (b)) ((quote) ((a) (b) ((a) (b) (c)) (d)))),())
#define test_e (((label) (f)((lambda)((x))((cons)(x)((quote)((b))))))((quote)(w)))
$zeval(test_e,())
$zeval(((atom)(x)),())
ATOM $zipped_eval(EVAL_e(SAFE_CAR SAFE_CDR ((atom)((quote)(x)))),())
/*$zeval(( (cond)(((atom)(x))((quote)(a)) )
         (((quote)(T))((quote)(b)))),())*/
/*$zeval( (((label)
          (f)
          ((lambda)((x))
           ( (cond)(((atom)(x))(a) )
             (((quote)(T))(b))))
          )
         ((quote)(w))
         ),() )*/
/*$zeval( (((label)
          (f)
          ((lambda)((x))
           ((f) (x) ))
                 )
         ((quote)(w))
         ),() )*/
//(EVAL_e(CONS EVAL_e(EVAL_e(EVAL_e(EVAL_e(SAFE_CAR SAFE_CDR SAFE_CDR SAFE_CAR test_e)))) EVAL_e( SAFE_CDR test_e)),EVAL_e(_e CONS (EVAL_e(EVAL_e(SAFE_CAR SAFE_CDR SAFE_CAR _e test_e)) SAFE_CAR test_e) (a)))
//$zeval((((label) ((f)) ((lambda) (x) ((f) (x))))((quote) (a))),())
//$zeval( ((cons)(x)((quote)((b))) ), ((x ) (w )) (((f ) ((label) (f)((lambda)((x))((cons)(x)((quote)((b))))) )) ()) )
//$zipped_evlis(((quote)(a))(b),(((b)(d))((g)(h))))
//EVAL_e(_e CONS (EVAL_e(EVAL_e(SAFE_CAR SAFE_CDR SAFE_CAR test_e)) SAFE_CAR test_e) (((w)(b))))
$zeval((a),((c)(b))((a)(d)))
//(EVAL_e(CONS EVAL_e(EVAL_e(EVAL_e(EVAL_e(SAFE_CAR SAFE_CDR SAFE_CDR SAFE_CAR test_e)))) EVAL_e( SAFE_CDR test_e)),_e CONS (EVAL_e(EVAL_e(SAFE_CAR SAFE_CDR SAFE_CAR test_e)) SAFE_CAR test_e) (()))
//EVAL_e(CONS EVAL_e(EVAL_e(EVAL_e(EVAL_e(SAFE_CAR SAFE_CDR SAFE_CDR SAFE_CAR test_e)))) EVAL_e( SAFE_CDR test_e))
//CONS (EVAL_e(EVAL_e(SAFE_CAR SAFE_CDR SAFE_CAR test_e)) SAFE_CAR test_e) ()
