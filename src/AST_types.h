/* Automatically generated file, do not edit. See nodetypes.def */

/* Copyright (c) 2000-200 The Regents of the University of California. */
/* See the copyright notice in nodetypes.def for distribution restrictions */
typedef struct AST_node *node;
typedef struct AST_declaration *declaration;
typedef struct AST_statement *statement;
typedef struct AST_expression *expression;
typedef struct AST_type_element *type_element;
typedef struct AST_declarator *declarator;
typedef struct AST_label *label;
typedef struct AST_asm_decl *asm_decl;
typedef struct AST_data_decl *data_decl;
typedef struct AST_extension_decl *extension_decl;
typedef struct AST_ellipsis_decl *ellipsis_decl;
typedef struct AST_enumerator *enumerator;
typedef struct AST_oldidentifier_decl *oldidentifier_decl;
typedef struct AST_function_decl *function_decl;
typedef struct AST_implicit_decl *implicit_decl;
typedef struct AST_variable_decl *variable_decl;
typedef struct AST_field_decl *field_decl;
typedef struct AST_asttype *asttype;
typedef struct AST_typename *typename;
typedef struct AST_type_variable *type_variable;
typedef struct AST_typeof_expr *typeof_expr;
typedef struct AST_typeof_type *typeof_type;
typedef struct AST_attribute *attribute;
typedef struct AST_rid *rid;
typedef struct AST_user_qual *user_qual;
typedef struct AST_qualifier *qualifier;
typedef struct AST_tag_ref *tag_ref;
typedef struct AST_function_declarator *function_declarator;
typedef struct AST_pointer_declarator *pointer_declarator;
typedef struct AST_array_declarator *array_declarator;
typedef struct AST_identifier_declarator *identifier_declarator;
typedef struct AST_asm_stmt *asm_stmt;
typedef struct AST_compound_stmt *compound_stmt;
typedef struct AST_if_stmt *if_stmt;
typedef struct AST_labeled_stmt *labeled_stmt;
typedef struct AST_expression_stmt *expression_stmt;
typedef struct AST_breakable_stmt *breakable_stmt;
typedef struct AST_conditional_stmt *conditional_stmt;
typedef struct AST_switch_stmt *switch_stmt;
typedef struct AST_for_stmt *for_stmt;
typedef struct AST_break_stmt *break_stmt;
typedef struct AST_continue_stmt *continue_stmt;
typedef struct AST_return_stmt *return_stmt;
typedef struct AST_goto_stmt *goto_stmt;
typedef struct AST_computed_goto_stmt *computed_goto_stmt;
typedef struct AST_empty_stmt *empty_stmt;
typedef struct AST_assert_type_stmt *assert_type_stmt;
typedef struct AST_change_type_stmt *change_type_stmt;
typedef struct AST_deep_restrict_stmt *deep_restrict_stmt;
typedef struct AST_unary *unary;
typedef struct AST_binary *binary;
typedef struct AST_comma *comma;
typedef struct AST_sizeof_type *sizeof_type;
typedef struct AST_alignof_type *alignof_type;
typedef struct AST_label_address *label_address;
typedef struct AST_cast *cast;
typedef struct AST_cast_list *cast_list;
typedef struct AST_conditional *conditional;
typedef struct AST_identifier *identifier;
typedef struct AST_compound_expr *compound_expr;
typedef struct AST_function_call *function_call;
typedef struct AST_array_ref *array_ref;
typedef struct AST_field_ref *field_ref;
typedef struct AST_init_list *init_list;
typedef struct AST_init_index *init_index;
typedef struct AST_init_field *init_field;
typedef struct AST_known_cst *known_cst;
typedef struct AST_lexical_cst *lexical_cst;
typedef struct AST_string_cst *string_cst;
typedef struct AST_string *string;
typedef struct AST_id_label *id_label;
typedef struct AST_case_label *case_label;
typedef struct AST_default_label *default_label;
typedef struct AST_word *word;
typedef struct AST_asm_operand *asm_operand;
typedef struct AST_declaration *error_decl;
typedef struct AST_tag_ref *struct_ref;
typedef struct AST_tag_ref *union_ref;
typedef struct AST_tag_ref *enum_ref;
typedef struct AST_statement *error_stmt;
typedef struct AST_conditional_stmt *while_stmt;
typedef struct AST_conditional_stmt *dowhile_stmt;
typedef struct AST_expression *error_expr;
typedef struct AST_unary *dereference;
typedef struct AST_unary *extension_expr;
typedef struct AST_unary *sizeof_expr;
typedef struct AST_unary *alignof_expr;
typedef struct AST_unary *realpart;
typedef struct AST_unary *imagpart;
typedef struct AST_unary *address_of;
typedef struct AST_unary *unary_minus;
typedef struct AST_unary *unary_plus;
typedef struct AST_unary *conjugate;
typedef struct AST_unary *preincrement;
typedef struct AST_unary *predecrement;
typedef struct AST_unary *postincrement;
typedef struct AST_unary *postdecrement;
typedef struct AST_unary *bitnot;
typedef struct AST_unary *not;
typedef struct AST_binary *plus;
typedef struct AST_binary *minus;
typedef struct AST_binary *times;
typedef struct AST_binary *divide;
typedef struct AST_binary *modulo;
typedef struct AST_binary *lshift;
typedef struct AST_binary *rshift;
typedef struct AST_binary *leq;
typedef struct AST_binary *geq;
typedef struct AST_binary *lt;
typedef struct AST_binary *gt;
typedef struct AST_binary *eq;
typedef struct AST_binary *ne;
typedef struct AST_binary *bitand;
typedef struct AST_binary *bitor;
typedef struct AST_binary *bitxor;
typedef struct AST_binary *andand;
typedef struct AST_binary *oror;
typedef struct AST_binary *assign;
typedef struct AST_binary *plus_assign;
typedef struct AST_binary *minus_assign;
typedef struct AST_binary *times_assign;
typedef struct AST_binary *divide_assign;
typedef struct AST_binary *modulo_assign;
typedef struct AST_binary *lshift_assign;
typedef struct AST_binary *rshift_assign;
typedef struct AST_binary *bitand_assign;
typedef struct AST_binary *bitor_assign;
typedef struct AST_binary *bitxor_assign;
typedef enum {
  kind_node = 0x1,
  kind_declaration = 0x41,
  kind_statement = 0x81,
  kind_expression = 0xc1,
  kind_type_element = 0x101,
  kind_declarator = 0x141,
  kind_label = 0x181,
  kind_asm_decl = 0x1041,
  kind_data_decl = 0x2041,
  kind_extension_decl = 0x3041,
  kind_ellipsis_decl = 0x4041,
  kind_enumerator = 0x5041,
  kind_oldidentifier_decl = 0x6041,
  kind_function_decl = 0x7041,
  kind_implicit_decl = 0x8041,
  kind_variable_decl = 0x9041,
  kind_field_decl = 0xa041,
  kind_asttype = 0x1c1,
  kind_typename = 0x1101,
  kind_type_variable = 0x2101,
  kind_typeof_expr = 0x3101,
  kind_typeof_type = 0x4101,
  kind_attribute = 0x5101,
  kind_rid = 0x6101,
  kind_user_qual = 0x7101,
  kind_qualifier = 0x8101,
  kind_tag_ref = 0x9101,
  kind_function_declarator = 0x1141,
  kind_pointer_declarator = 0x2141,
  kind_array_declarator = 0x3141,
  kind_identifier_declarator = 0x4141,
  kind_asm_stmt = 0x1081,
  kind_compound_stmt = 0x2081,
  kind_if_stmt = 0x3081,
  kind_labeled_stmt = 0x4081,
  kind_expression_stmt = 0x5081,
  kind_breakable_stmt = 0x6081,
  kind_conditional_stmt = 0x46081,
  kind_switch_stmt = 0x1046081,
  kind_for_stmt = 0x86081,
  kind_break_stmt = 0x7081,
  kind_continue_stmt = 0x8081,
  kind_return_stmt = 0x9081,
  kind_goto_stmt = 0xa081,
  kind_computed_goto_stmt = 0xb081,
  kind_empty_stmt = 0xc081,
  kind_assert_type_stmt = 0xd081,
  kind_change_type_stmt = 0xe081,
  kind_deep_restrict_stmt = 0xf081,
  kind_unary = 0x10c1,
  kind_binary = 0x20c1,
  kind_comma = 0x30c1,
  kind_sizeof_type = 0x40c1,
  kind_alignof_type = 0x50c1,
  kind_label_address = 0x60c1,
  kind_cast = 0x410c1,
  kind_cast_list = 0x70c1,
  kind_conditional = 0x80c1,
  kind_identifier = 0x90c1,
  kind_compound_expr = 0xa0c1,
  kind_function_call = 0xb0c1,
  kind_array_ref = 0x420c1,
  kind_field_ref = 0x810c1,
  kind_init_list = 0xc0c1,
  kind_init_index = 0xd0c1,
  kind_init_field = 0xe0c1,
  kind_known_cst = 0xf0c1,
  kind_lexical_cst = 0x100c1,
  kind_string_cst = 0x500c1,
  kind_string = 0x110c1,
  kind_id_label = 0x1181,
  kind_case_label = 0x2181,
  kind_default_label = 0x3181,
  kind_word = 0x201,
  kind_asm_operand = 0x241,
  kind_error_decl = 0xb041,
  kind_struct_ref = 0x49101,
  kind_union_ref = 0x89101,
  kind_enum_ref = 0xc9101,
  kind_error_stmt = 0x10081,
  kind_while_stmt = 0x2046081,
  kind_dowhile_stmt = 0x3046081,
  kind_error_expr = 0x120c1,
  kind_dereference = 0xc10c1,
  kind_extension_expr = 0x1010c1,
  kind_sizeof_expr = 0x1410c1,
  kind_alignof_expr = 0x1810c1,
  kind_realpart = 0x1c10c1,
  kind_imagpart = 0x2010c1,
  kind_address_of = 0x2410c1,
  kind_unary_minus = 0x2810c1,
  kind_unary_plus = 0x2c10c1,
  kind_conjugate = 0x3010c1,
  kind_preincrement = 0x3410c1,
  kind_predecrement = 0x3810c1,
  kind_postincrement = 0x3c10c1,
  kind_postdecrement = 0x4010c1,
  kind_bitnot = 0x4410c1,
  kind_not = 0x4810c1,
  kind_plus = 0x820c1,
  kind_minus = 0xc20c1,
  kind_times = 0x1020c1,
  kind_divide = 0x1420c1,
  kind_modulo = 0x1820c1,
  kind_lshift = 0x1c20c1,
  kind_rshift = 0x2020c1,
  kind_leq = 0x2420c1,
  kind_geq = 0x2820c1,
  kind_lt = 0x2c20c1,
  kind_gt = 0x3020c1,
  kind_eq = 0x3420c1,
  kind_ne = 0x3820c1,
  kind_bitand = 0x3c20c1,
  kind_bitor = 0x4020c1,
  kind_bitxor = 0x4420c1,
  kind_andand = 0x4820c1,
  kind_oror = 0x4c20c1,
  kind_assign = 0x5020c1,
  kind_plus_assign = 0x5420c1,
  kind_minus_assign = 0x5820c1,
  kind_times_assign = 0x5c20c1,
  kind_divide_assign = 0x6020c1,
  kind_modulo_assign = 0x6420c1,
  kind_lshift_assign = 0x6820c1,
  kind_rshift_assign = 0x6c20c1,
  kind_bitand_assign = 0x7020c1,
  kind_bitor_assign = 0x7420c1,
  kind_bitxor_assign = 0x7820c1
} ast_kind;
#define is_node(x) ((((x)->kind) & 0x3f) == kind_node)
#define is_declaration(x) ((((x)->kind) & 0xfff) == kind_declaration)
#define is_statement(x) ((((x)->kind) & 0xfff) == kind_statement)
#define is_expression(x) ((((x)->kind) & 0xfff) == kind_expression)
#define is_type_element(x) ((((x)->kind) & 0xfff) == kind_type_element)
#define is_declarator(x) ((((x)->kind) & 0xfff) == kind_declarator)
#define is_label(x) ((((x)->kind) & 0xfff) == kind_label)
#define is_asm_decl(x) ((((x)->kind) & 0x3ffff) == kind_asm_decl)
#define is_data_decl(x) ((((x)->kind) & 0x3ffff) == kind_data_decl)
#define is_extension_decl(x) ((((x)->kind) & 0x3ffff) == kind_extension_decl)
#define is_ellipsis_decl(x) ((((x)->kind) & 0x3ffff) == kind_ellipsis_decl)
#define is_enumerator(x) ((((x)->kind) & 0x3ffff) == kind_enumerator)
#define is_oldidentifier_decl(x) ((((x)->kind) & 0x3ffff) == kind_oldidentifier_decl)
#define is_function_decl(x) ((((x)->kind) & 0x3ffff) == kind_function_decl)
#define is_implicit_decl(x) ((((x)->kind) & 0x3ffff) == kind_implicit_decl)
#define is_variable_decl(x) ((((x)->kind) & 0x3ffff) == kind_variable_decl)
#define is_field_decl(x) ((((x)->kind) & 0x3ffff) == kind_field_decl)
#define is_asttype(x) ((((x)->kind) & 0xfff) == kind_asttype)
#define is_typename(x) ((((x)->kind) & 0x3ffff) == kind_typename)
#define is_type_variable(x) ((((x)->kind) & 0x3ffff) == kind_type_variable)
#define is_typeof_expr(x) ((((x)->kind) & 0x3ffff) == kind_typeof_expr)
#define is_typeof_type(x) ((((x)->kind) & 0x3ffff) == kind_typeof_type)
#define is_attribute(x) ((((x)->kind) & 0x3ffff) == kind_attribute)
#define is_rid(x) ((((x)->kind) & 0x3ffff) == kind_rid)
#define is_user_qual(x) ((((x)->kind) & 0x3ffff) == kind_user_qual)
#define is_qualifier(x) ((((x)->kind) & 0x3ffff) == kind_qualifier)
#define is_tag_ref(x) ((((x)->kind) & 0x3ffff) == kind_tag_ref)
#define is_function_declarator(x) ((((x)->kind) & 0x3ffff) == kind_function_declarator)
#define is_pointer_declarator(x) ((((x)->kind) & 0x3ffff) == kind_pointer_declarator)
#define is_array_declarator(x) ((((x)->kind) & 0x3ffff) == kind_array_declarator)
#define is_identifier_declarator(x) ((((x)->kind) & 0x3ffff) == kind_identifier_declarator)
#define is_asm_stmt(x) ((((x)->kind) & 0x3ffff) == kind_asm_stmt)
#define is_compound_stmt(x) ((((x)->kind) & 0x3ffff) == kind_compound_stmt)
#define is_if_stmt(x) ((((x)->kind) & 0x3ffff) == kind_if_stmt)
#define is_labeled_stmt(x) ((((x)->kind) & 0x3ffff) == kind_labeled_stmt)
#define is_expression_stmt(x) ((((x)->kind) & 0x3ffff) == kind_expression_stmt)
#define is_breakable_stmt(x) ((((x)->kind) & 0x3ffff) == kind_breakable_stmt)
#define is_conditional_stmt(x) ((((x)->kind) & 0xffffff) == kind_conditional_stmt)
#define is_switch_stmt(x) ((((x)->kind) & 0x3fffffff) == kind_switch_stmt)
#define is_for_stmt(x) ((((x)->kind) & 0xffffff) == kind_for_stmt)
#define is_break_stmt(x) ((((x)->kind) & 0x3ffff) == kind_break_stmt)
#define is_continue_stmt(x) ((((x)->kind) & 0x3ffff) == kind_continue_stmt)
#define is_return_stmt(x) ((((x)->kind) & 0x3ffff) == kind_return_stmt)
#define is_goto_stmt(x) ((((x)->kind) & 0x3ffff) == kind_goto_stmt)
#define is_computed_goto_stmt(x) ((((x)->kind) & 0x3ffff) == kind_computed_goto_stmt)
#define is_empty_stmt(x) ((((x)->kind) & 0x3ffff) == kind_empty_stmt)
#define is_assert_type_stmt(x) ((((x)->kind) & 0x3ffff) == kind_assert_type_stmt)
#define is_change_type_stmt(x) ((((x)->kind) & 0x3ffff) == kind_change_type_stmt)
#define is_deep_restrict_stmt(x) ((((x)->kind) & 0x3ffff) == kind_deep_restrict_stmt)
#define is_unary(x) ((((x)->kind) & 0x3ffff) == kind_unary)
#define is_binary(x) ((((x)->kind) & 0x3ffff) == kind_binary)
#define is_comma(x) ((((x)->kind) & 0x3ffff) == kind_comma)
#define is_sizeof_type(x) ((((x)->kind) & 0x3ffff) == kind_sizeof_type)
#define is_alignof_type(x) ((((x)->kind) & 0x3ffff) == kind_alignof_type)
#define is_label_address(x) ((((x)->kind) & 0x3ffff) == kind_label_address)
#define is_cast(x) ((((x)->kind) & 0xffffff) == kind_cast)
#define is_cast_list(x) ((((x)->kind) & 0x3ffff) == kind_cast_list)
#define is_conditional(x) ((((x)->kind) & 0x3ffff) == kind_conditional)
#define is_identifier(x) ((((x)->kind) & 0x3ffff) == kind_identifier)
#define is_compound_expr(x) ((((x)->kind) & 0x3ffff) == kind_compound_expr)
#define is_function_call(x) ((((x)->kind) & 0x3ffff) == kind_function_call)
#define is_array_ref(x) ((((x)->kind) & 0xffffff) == kind_array_ref)
#define is_field_ref(x) ((((x)->kind) & 0xffffff) == kind_field_ref)
#define is_init_list(x) ((((x)->kind) & 0x3ffff) == kind_init_list)
#define is_init_index(x) ((((x)->kind) & 0x3ffff) == kind_init_index)
#define is_init_field(x) ((((x)->kind) & 0x3ffff) == kind_init_field)
#define is_known_cst(x) ((((x)->kind) & 0x3ffff) == kind_known_cst)
#define is_lexical_cst(x) ((((x)->kind) & 0x3ffff) == kind_lexical_cst)
#define is_string_cst(x) ((((x)->kind) & 0xffffff) == kind_string_cst)
#define is_string(x) ((((x)->kind) & 0x3ffff) == kind_string)
#define is_id_label(x) ((((x)->kind) & 0x3ffff) == kind_id_label)
#define is_case_label(x) ((((x)->kind) & 0x3ffff) == kind_case_label)
#define is_default_label(x) ((((x)->kind) & 0x3ffff) == kind_default_label)
#define is_word(x) ((((x)->kind) & 0xfff) == kind_word)
#define is_asm_operand(x) ((((x)->kind) & 0xfff) == kind_asm_operand)
#define is_error_decl(x) ((((x)->kind) & 0x3ffff) == kind_error_decl)
#define is_struct_ref(x) ((((x)->kind) & 0xffffff) == kind_struct_ref)
#define is_union_ref(x) ((((x)->kind) & 0xffffff) == kind_union_ref)
#define is_enum_ref(x) ((((x)->kind) & 0xffffff) == kind_enum_ref)
#define is_error_stmt(x) ((((x)->kind) & 0x3ffff) == kind_error_stmt)
#define is_while_stmt(x) ((((x)->kind) & 0x3fffffff) == kind_while_stmt)
#define is_dowhile_stmt(x) ((((x)->kind) & 0x3fffffff) == kind_dowhile_stmt)
#define is_error_expr(x) ((((x)->kind) & 0x3ffff) == kind_error_expr)
#define is_dereference(x) ((((x)->kind) & 0xffffff) == kind_dereference)
#define is_extension_expr(x) ((((x)->kind) & 0xffffff) == kind_extension_expr)
#define is_sizeof_expr(x) ((((x)->kind) & 0xffffff) == kind_sizeof_expr)
#define is_alignof_expr(x) ((((x)->kind) & 0xffffff) == kind_alignof_expr)
#define is_realpart(x) ((((x)->kind) & 0xffffff) == kind_realpart)
#define is_imagpart(x) ((((x)->kind) & 0xffffff) == kind_imagpart)
#define is_address_of(x) ((((x)->kind) & 0xffffff) == kind_address_of)
#define is_unary_minus(x) ((((x)->kind) & 0xffffff) == kind_unary_minus)
#define is_unary_plus(x) ((((x)->kind) & 0xffffff) == kind_unary_plus)
#define is_conjugate(x) ((((x)->kind) & 0xffffff) == kind_conjugate)
#define is_preincrement(x) ((((x)->kind) & 0xffffff) == kind_preincrement)
#define is_predecrement(x) ((((x)->kind) & 0xffffff) == kind_predecrement)
#define is_postincrement(x) ((((x)->kind) & 0xffffff) == kind_postincrement)
#define is_postdecrement(x) ((((x)->kind) & 0xffffff) == kind_postdecrement)
#define is_bitnot(x) ((((x)->kind) & 0xffffff) == kind_bitnot)
#define is_not(x) ((((x)->kind) & 0xffffff) == kind_not)
#define is_plus(x) ((((x)->kind) & 0xffffff) == kind_plus)
#define is_minus(x) ((((x)->kind) & 0xffffff) == kind_minus)
#define is_times(x) ((((x)->kind) & 0xffffff) == kind_times)
#define is_divide(x) ((((x)->kind) & 0xffffff) == kind_divide)
#define is_modulo(x) ((((x)->kind) & 0xffffff) == kind_modulo)
#define is_lshift(x) ((((x)->kind) & 0xffffff) == kind_lshift)
#define is_rshift(x) ((((x)->kind) & 0xffffff) == kind_rshift)
#define is_leq(x) ((((x)->kind) & 0xffffff) == kind_leq)
#define is_geq(x) ((((x)->kind) & 0xffffff) == kind_geq)
#define is_lt(x) ((((x)->kind) & 0xffffff) == kind_lt)
#define is_gt(x) ((((x)->kind) & 0xffffff) == kind_gt)
#define is_eq(x) ((((x)->kind) & 0xffffff) == kind_eq)
#define is_ne(x) ((((x)->kind) & 0xffffff) == kind_ne)
#define is_bitand(x) ((((x)->kind) & 0xffffff) == kind_bitand)
#define is_bitor(x) ((((x)->kind) & 0xffffff) == kind_bitor)
#define is_bitxor(x) ((((x)->kind) & 0xffffff) == kind_bitxor)
#define is_andand(x) ((((x)->kind) & 0xffffff) == kind_andand)
#define is_oror(x) ((((x)->kind) & 0xffffff) == kind_oror)
#define is_assign(x) ((((x)->kind) & 0xffffff) == kind_assign)
#define is_plus_assign(x) ((((x)->kind) & 0xffffff) == kind_plus_assign)
#define is_minus_assign(x) ((((x)->kind) & 0xffffff) == kind_minus_assign)
#define is_times_assign(x) ((((x)->kind) & 0xffffff) == kind_times_assign)
#define is_divide_assign(x) ((((x)->kind) & 0xffffff) == kind_divide_assign)
#define is_modulo_assign(x) ((((x)->kind) & 0xffffff) == kind_modulo_assign)
#define is_lshift_assign(x) ((((x)->kind) & 0xffffff) == kind_lshift_assign)
#define is_rshift_assign(x) ((((x)->kind) & 0xffffff) == kind_rshift_assign)
#define is_bitand_assign(x) ((((x)->kind) & 0xffffff) == kind_bitand_assign)
#define is_bitor_assign(x) ((((x)->kind) & 0xffffff) == kind_bitor_assign)
#define is_bitxor_assign(x) ((((x)->kind) & 0xffffff) == kind_bitxor_assign)
