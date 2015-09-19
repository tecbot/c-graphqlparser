/**
 * Copyright (c) 2015, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/** @generated */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif


struct GraphQLAstDefinition;

struct GraphQLAstDocument;
int GraphQLAstDocument_get_definitions_size(const struct GraphQLAstDocument *node);

struct GraphQLAstOperationDefinition;
const char * GraphQLAstOperationDefinition_get_operation(const struct GraphQLAstOperationDefinition *node);
const struct GraphQLAstName * GraphQLAstOperationDefinition_get_name(const struct GraphQLAstOperationDefinition *node);
int GraphQLAstOperationDefinition_get_variable_definitions_size(const struct GraphQLAstOperationDefinition *node);
int GraphQLAstOperationDefinition_get_directives_size(const struct GraphQLAstOperationDefinition *node);
const struct GraphQLAstSelectionSet * GraphQLAstOperationDefinition_get_selection_set(const struct GraphQLAstOperationDefinition *node);

struct GraphQLAstVariableDefinition;
const struct GraphQLAstVariable * GraphQLAstVariableDefinition_get_variable(const struct GraphQLAstVariableDefinition *node);
const struct GraphQLAstType * GraphQLAstVariableDefinition_get_type(const struct GraphQLAstVariableDefinition *node);
const struct GraphQLAstValue * GraphQLAstVariableDefinition_get_default_value(const struct GraphQLAstVariableDefinition *node);

struct GraphQLAstSelectionSet;
int GraphQLAstSelectionSet_get_selections_size(const struct GraphQLAstSelectionSet *node);

struct GraphQLAstSelection;

struct GraphQLAstField;
const struct GraphQLAstName * GraphQLAstField_get_alias(const struct GraphQLAstField *node);
const struct GraphQLAstName * GraphQLAstField_get_name(const struct GraphQLAstField *node);
int GraphQLAstField_get_arguments_size(const struct GraphQLAstField *node);
int GraphQLAstField_get_directives_size(const struct GraphQLAstField *node);
const struct GraphQLAstSelectionSet * GraphQLAstField_get_selection_set(const struct GraphQLAstField *node);

struct GraphQLAstArgument;
const struct GraphQLAstName * GraphQLAstArgument_get_name(const struct GraphQLAstArgument *node);
const struct GraphQLAstValue * GraphQLAstArgument_get_value(const struct GraphQLAstArgument *node);

struct GraphQLAstFragmentSpread;
const struct GraphQLAstName * GraphQLAstFragmentSpread_get_name(const struct GraphQLAstFragmentSpread *node);
int GraphQLAstFragmentSpread_get_directives_size(const struct GraphQLAstFragmentSpread *node);

struct GraphQLAstInlineFragment;
const struct GraphQLAstNamedType * GraphQLAstInlineFragment_get_type_condition(const struct GraphQLAstInlineFragment *node);
int GraphQLAstInlineFragment_get_directives_size(const struct GraphQLAstInlineFragment *node);
const struct GraphQLAstSelectionSet * GraphQLAstInlineFragment_get_selection_set(const struct GraphQLAstInlineFragment *node);

struct GraphQLAstFragmentDefinition;
const struct GraphQLAstName * GraphQLAstFragmentDefinition_get_name(const struct GraphQLAstFragmentDefinition *node);
const struct GraphQLAstNamedType * GraphQLAstFragmentDefinition_get_type_condition(const struct GraphQLAstFragmentDefinition *node);
int GraphQLAstFragmentDefinition_get_directives_size(const struct GraphQLAstFragmentDefinition *node);
const struct GraphQLAstSelectionSet * GraphQLAstFragmentDefinition_get_selection_set(const struct GraphQLAstFragmentDefinition *node);

struct GraphQLAstValue;

struct GraphQLAstVariable;
const struct GraphQLAstName * GraphQLAstVariable_get_name(const struct GraphQLAstVariable *node);

struct GraphQLAstIntValue;
const char * GraphQLAstIntValue_get_value(const struct GraphQLAstIntValue *node);

struct GraphQLAstFloatValue;
const char * GraphQLAstFloatValue_get_value(const struct GraphQLAstFloatValue *node);

struct GraphQLAstStringValue;
const char * GraphQLAstStringValue_get_value(const struct GraphQLAstStringValue *node);

struct GraphQLAstBooleanValue;
int GraphQLAstBooleanValue_get_value(const struct GraphQLAstBooleanValue *node);

struct GraphQLAstEnumValue;
const char * GraphQLAstEnumValue_get_value(const struct GraphQLAstEnumValue *node);

struct GraphQLAstArrayValue;
int GraphQLAstArrayValue_get_values_size(const struct GraphQLAstArrayValue *node);

struct GraphQLAstObjectValue;
int GraphQLAstObjectValue_get_fields_size(const struct GraphQLAstObjectValue *node);

struct GraphQLAstObjectField;
const struct GraphQLAstName * GraphQLAstObjectField_get_name(const struct GraphQLAstObjectField *node);
const struct GraphQLAstValue * GraphQLAstObjectField_get_value(const struct GraphQLAstObjectField *node);

struct GraphQLAstDirective;
const struct GraphQLAstName * GraphQLAstDirective_get_name(const struct GraphQLAstDirective *node);
int GraphQLAstDirective_get_arguments_size(const struct GraphQLAstDirective *node);

struct GraphQLAstType;

struct GraphQLAstNamedType;
const struct GraphQLAstName * GraphQLAstNamedType_get_name(const struct GraphQLAstNamedType *node);

struct GraphQLAstListType;
const struct GraphQLAstType * GraphQLAstListType_get_type(const struct GraphQLAstListType *node);

struct GraphQLAstNonNullType;
const struct GraphQLAstType * GraphQLAstNonNullType_get_type(const struct GraphQLAstNonNullType *node);

struct GraphQLAstName;
const char * GraphQLAstName_get_value(const struct GraphQLAstName *node);



#ifdef __cplusplus
}
#endif

