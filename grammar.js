module.exports = grammar ({
    name: 'z80n_assembly',

    externals: $=> [
	$.nl,
	$.ws,
    ],
	
    rules: {
	program: $ => repeat($.block),
	
	block: $ => choice(
	    prec(2, $.line),
	    prec(1, $.if_block)
	),

	line: $ => choice(
	    $.empty_line,
	    $.label_line,
	    $.nolabel_line,
	    $.full_line
	),

	empty_line: $ => $.nl,

	label_line: $ => seq(
	    $.label,
	    $.nl
	),

	nolabel_line: $ => seq(
	    $.ws,
	    $.stuff,
	    $.nl
	),

	full_line: $ => seq(
	    $.label,
	    $.ws,
	    $.stuff,
	    $.nl
	),

	label: $ => /\w+:?/,

	stuff: $ => seq(
	    $.op,
	    repeat(seq($.ws, /\S+/))
	),

	op: $ => choice(
	    prec(1, $.z80_op),
	    prec(1, $.z80n_op),
	    prec(2, $.user_op)
	),

	if_block: $ => seq(
	    $.if_line,
	    $.block,
	    $.else_block
	),
	
	if_line: $ => choice(
	    seq($.label, $.ws, $.if_op, $.expr, $.nl),
	    seq($.ws, $.if_op, $.expr, $.nl)
	),

	if_op: $ => 'if',

	expr: $ => /\S+/,
	
	else_block: $ => choice(
	    $.endif_line,
	    seq(
		$.else_line,
		repeat1($.block),
		$.endif_line
	    ),
	    seq(
		$.elseif_line,
		repeat1($.block),
		$.else_block
	    )
	),	

	else_line: $ => choice(
	    seq($.label, $.ws, $.else_op, $.nl),
	    seq($.ws, $.else_op, $.nl),
	),

	else_op: $ => 'else',
	
	elseif_line: $ => choice(
	    seq($.label, $.ws, $.elseif_op, $.ws, $.expr, $.nl),
	    seq($.ws, $.elseif_op, $.ws, $.expr, $.nl),
	),

	endif_line: $ => choice(
	    seq($.label, $.ws, $.endif_op, $.nl),
	    seq($.ws, $.endif_op, $.nl),
	),

	elseif_op: $ => 'elseif',
	
	endif_op: $ => 'endif',
	
	z80_op: $ => 'ld',

	z80n_op: $ => 'mul',

	user_op: $ => /\w+/,
	
    }	    
});
