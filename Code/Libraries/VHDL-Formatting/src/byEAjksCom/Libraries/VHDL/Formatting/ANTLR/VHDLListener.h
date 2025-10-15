
// Generated from
// /home/k8sadmin/Repositories/hdl-design-tools/Resources/Grammars/VHDL/VHDL.g4
// by ANTLR 4.13.2

#pragma once

#include "VHDLParser.h"
#include "antlr4-runtime.h"

namespace byEAjksCom::Libraries::VHDL::Formatting::ANTLR
{

/**
 * This interface defines an abstract listener for a parse tree produced by
 * VHDLParser.
 */
class VHDLListener : public antlr4::tree::ParseTreeListener
{
  public:
    virtual void enterAbstract_literal(VHDLParser::Abstract_literalContext *ctx) = 0;
    virtual void exitAbstract_literal(VHDLParser::Abstract_literalContext *ctx) = 0;

    virtual void enterAccess_type_definition(VHDLParser::Access_type_definitionContext *ctx) = 0;
    virtual void exitAccess_type_definition(VHDLParser::Access_type_definitionContext *ctx) = 0;

    virtual void enterAcross_aspect(VHDLParser::Across_aspectContext *ctx) = 0;
    virtual void exitAcross_aspect(VHDLParser::Across_aspectContext *ctx) = 0;

    virtual void enterActual_designator(VHDLParser::Actual_designatorContext *ctx) = 0;
    virtual void exitActual_designator(VHDLParser::Actual_designatorContext *ctx) = 0;

    virtual void enterActual_parameter_part(VHDLParser::Actual_parameter_partContext *ctx) = 0;
    virtual void exitActual_parameter_part(VHDLParser::Actual_parameter_partContext *ctx) = 0;

    virtual void enterActual_part(VHDLParser::Actual_partContext *ctx) = 0;
    virtual void exitActual_part(VHDLParser::Actual_partContext *ctx) = 0;

    virtual void enterAdding_operator(VHDLParser::Adding_operatorContext *ctx) = 0;
    virtual void exitAdding_operator(VHDLParser::Adding_operatorContext *ctx) = 0;

    virtual void enterAggregate(VHDLParser::AggregateContext *ctx) = 0;
    virtual void exitAggregate(VHDLParser::AggregateContext *ctx) = 0;

    virtual void enterAlias_declaration(VHDLParser::Alias_declarationContext *ctx) = 0;
    virtual void exitAlias_declaration(VHDLParser::Alias_declarationContext *ctx) = 0;

    virtual void enterAlias_designator(VHDLParser::Alias_designatorContext *ctx) = 0;
    virtual void exitAlias_designator(VHDLParser::Alias_designatorContext *ctx) = 0;

    virtual void enterAlias_indication(VHDLParser::Alias_indicationContext *ctx) = 0;
    virtual void exitAlias_indication(VHDLParser::Alias_indicationContext *ctx) = 0;

    virtual void enterAllocator(VHDLParser::AllocatorContext *ctx) = 0;
    virtual void exitAllocator(VHDLParser::AllocatorContext *ctx) = 0;

    virtual void enterArchitecture_body(VHDLParser::Architecture_bodyContext *ctx) = 0;
    virtual void exitArchitecture_body(VHDLParser::Architecture_bodyContext *ctx) = 0;

    virtual void enterArchitecture_declarative_part(VHDLParser::Architecture_declarative_partContext *ctx) = 0;
    virtual void exitArchitecture_declarative_part(VHDLParser::Architecture_declarative_partContext *ctx) = 0;

    virtual void enterArchitecture_statement(VHDLParser::Architecture_statementContext *ctx) = 0;
    virtual void exitArchitecture_statement(VHDLParser::Architecture_statementContext *ctx) = 0;

    virtual void enterArchitecture_statement_part(VHDLParser::Architecture_statement_partContext *ctx) = 0;
    virtual void exitArchitecture_statement_part(VHDLParser::Architecture_statement_partContext *ctx) = 0;

    virtual void enterArray_nature_definition(VHDLParser::Array_nature_definitionContext *ctx) = 0;
    virtual void exitArray_nature_definition(VHDLParser::Array_nature_definitionContext *ctx) = 0;

    virtual void enterArray_type_definition(VHDLParser::Array_type_definitionContext *ctx) = 0;
    virtual void exitArray_type_definition(VHDLParser::Array_type_definitionContext *ctx) = 0;

    virtual void enterAssertion(VHDLParser::AssertionContext *ctx) = 0;
    virtual void exitAssertion(VHDLParser::AssertionContext *ctx) = 0;

    virtual void enterAssertion_statement(VHDLParser::Assertion_statementContext *ctx) = 0;
    virtual void exitAssertion_statement(VHDLParser::Assertion_statementContext *ctx) = 0;

    virtual void enterAssociation_element(VHDLParser::Association_elementContext *ctx) = 0;
    virtual void exitAssociation_element(VHDLParser::Association_elementContext *ctx) = 0;

    virtual void enterAssociation_list(VHDLParser::Association_listContext *ctx) = 0;
    virtual void exitAssociation_list(VHDLParser::Association_listContext *ctx) = 0;

    virtual void enterAttribute_declaration(VHDLParser::Attribute_declarationContext *ctx) = 0;
    virtual void exitAttribute_declaration(VHDLParser::Attribute_declarationContext *ctx) = 0;

    virtual void enterAttribute_designator(VHDLParser::Attribute_designatorContext *ctx) = 0;
    virtual void exitAttribute_designator(VHDLParser::Attribute_designatorContext *ctx) = 0;

    virtual void enterAttribute_specification(VHDLParser::Attribute_specificationContext *ctx) = 0;
    virtual void exitAttribute_specification(VHDLParser::Attribute_specificationContext *ctx) = 0;

    virtual void enterBase_unit_declaration(VHDLParser::Base_unit_declarationContext *ctx) = 0;
    virtual void exitBase_unit_declaration(VHDLParser::Base_unit_declarationContext *ctx) = 0;

    virtual void enterBinding_indication(VHDLParser::Binding_indicationContext *ctx) = 0;
    virtual void exitBinding_indication(VHDLParser::Binding_indicationContext *ctx) = 0;

    virtual void enterBlock_configuration(VHDLParser::Block_configurationContext *ctx) = 0;
    virtual void exitBlock_configuration(VHDLParser::Block_configurationContext *ctx) = 0;

    virtual void enterBlock_declarative_item(VHDLParser::Block_declarative_itemContext *ctx) = 0;
    virtual void exitBlock_declarative_item(VHDLParser::Block_declarative_itemContext *ctx) = 0;

    virtual void enterBlock_declarative_part(VHDLParser::Block_declarative_partContext *ctx) = 0;
    virtual void exitBlock_declarative_part(VHDLParser::Block_declarative_partContext *ctx) = 0;

    virtual void enterBlock_header(VHDLParser::Block_headerContext *ctx) = 0;
    virtual void exitBlock_header(VHDLParser::Block_headerContext *ctx) = 0;

    virtual void enterBlock_specification(VHDLParser::Block_specificationContext *ctx) = 0;
    virtual void exitBlock_specification(VHDLParser::Block_specificationContext *ctx) = 0;

    virtual void enterBlock_statement(VHDLParser::Block_statementContext *ctx) = 0;
    virtual void exitBlock_statement(VHDLParser::Block_statementContext *ctx) = 0;

    virtual void enterBlock_statement_part(VHDLParser::Block_statement_partContext *ctx) = 0;
    virtual void exitBlock_statement_part(VHDLParser::Block_statement_partContext *ctx) = 0;

    virtual void enterBranch_quantity_declaration(VHDLParser::Branch_quantity_declarationContext *ctx) = 0;
    virtual void exitBranch_quantity_declaration(VHDLParser::Branch_quantity_declarationContext *ctx) = 0;

    virtual void enterBreak_element(VHDLParser::Break_elementContext *ctx) = 0;
    virtual void exitBreak_element(VHDLParser::Break_elementContext *ctx) = 0;

    virtual void enterBreak_list(VHDLParser::Break_listContext *ctx) = 0;
    virtual void exitBreak_list(VHDLParser::Break_listContext *ctx) = 0;

    virtual void enterBreak_selector_clause(VHDLParser::Break_selector_clauseContext *ctx) = 0;
    virtual void exitBreak_selector_clause(VHDLParser::Break_selector_clauseContext *ctx) = 0;

    virtual void enterBreak_statement(VHDLParser::Break_statementContext *ctx) = 0;
    virtual void exitBreak_statement(VHDLParser::Break_statementContext *ctx) = 0;

    virtual void enterCase_statement(VHDLParser::Case_statementContext *ctx) = 0;
    virtual void exitCase_statement(VHDLParser::Case_statementContext *ctx) = 0;

    virtual void enterCase_statement_alternative(VHDLParser::Case_statement_alternativeContext *ctx) = 0;
    virtual void exitCase_statement_alternative(VHDLParser::Case_statement_alternativeContext *ctx) = 0;

    virtual void enterChoice(VHDLParser::ChoiceContext *ctx) = 0;
    virtual void exitChoice(VHDLParser::ChoiceContext *ctx) = 0;

    virtual void enterChoices(VHDLParser::ChoicesContext *ctx) = 0;
    virtual void exitChoices(VHDLParser::ChoicesContext *ctx) = 0;

    virtual void enterComponent_configuration(VHDLParser::Component_configurationContext *ctx) = 0;
    virtual void exitComponent_configuration(VHDLParser::Component_configurationContext *ctx) = 0;

    virtual void enterComponent_declaration(VHDLParser::Component_declarationContext *ctx) = 0;
    virtual void exitComponent_declaration(VHDLParser::Component_declarationContext *ctx) = 0;

    virtual void enterComponent_instantiation_statement(VHDLParser::Component_instantiation_statementContext *ctx) = 0;
    virtual void exitComponent_instantiation_statement(VHDLParser::Component_instantiation_statementContext *ctx) = 0;

    virtual void enterComponent_specification(VHDLParser::Component_specificationContext *ctx) = 0;
    virtual void exitComponent_specification(VHDLParser::Component_specificationContext *ctx) = 0;

    virtual void enterComposite_nature_definition(VHDLParser::Composite_nature_definitionContext *ctx) = 0;
    virtual void exitComposite_nature_definition(VHDLParser::Composite_nature_definitionContext *ctx) = 0;

    virtual void enterComposite_type_definition(VHDLParser::Composite_type_definitionContext *ctx) = 0;
    virtual void exitComposite_type_definition(VHDLParser::Composite_type_definitionContext *ctx) = 0;

    virtual void enterConcurrent_assertion_statement(VHDLParser::Concurrent_assertion_statementContext *ctx) = 0;
    virtual void exitConcurrent_assertion_statement(VHDLParser::Concurrent_assertion_statementContext *ctx) = 0;

    virtual void enterConcurrent_break_statement(VHDLParser::Concurrent_break_statementContext *ctx) = 0;
    virtual void exitConcurrent_break_statement(VHDLParser::Concurrent_break_statementContext *ctx) = 0;

    virtual void enterConcurrent_procedure_call_statement(VHDLParser::Concurrent_procedure_call_statementContext *ctx) = 0;
    virtual void exitConcurrent_procedure_call_statement(VHDLParser::Concurrent_procedure_call_statementContext *ctx) = 0;

    virtual void enterConcurrent_signal_assignment_statement(VHDLParser::Concurrent_signal_assignment_statementContext *ctx) = 0;
    virtual void exitConcurrent_signal_assignment_statement(VHDLParser::Concurrent_signal_assignment_statementContext *ctx) = 0;

    virtual void enterCondition(VHDLParser::ConditionContext *ctx) = 0;
    virtual void exitCondition(VHDLParser::ConditionContext *ctx) = 0;

    virtual void enterCondition_clause(VHDLParser::Condition_clauseContext *ctx) = 0;
    virtual void exitCondition_clause(VHDLParser::Condition_clauseContext *ctx) = 0;

    virtual void enterConditional_signal_assignment(VHDLParser::Conditional_signal_assignmentContext *ctx) = 0;
    virtual void exitConditional_signal_assignment(VHDLParser::Conditional_signal_assignmentContext *ctx) = 0;

    virtual void enterConditional_waveforms(VHDLParser::Conditional_waveformsContext *ctx) = 0;
    virtual void exitConditional_waveforms(VHDLParser::Conditional_waveformsContext *ctx) = 0;

    virtual void enterConfiguration_declaration(VHDLParser::Configuration_declarationContext *ctx) = 0;
    virtual void exitConfiguration_declaration(VHDLParser::Configuration_declarationContext *ctx) = 0;

    virtual void enterConfiguration_declarative_item(VHDLParser::Configuration_declarative_itemContext *ctx) = 0;
    virtual void exitConfiguration_declarative_item(VHDLParser::Configuration_declarative_itemContext *ctx) = 0;

    virtual void enterConfiguration_declarative_part(VHDLParser::Configuration_declarative_partContext *ctx) = 0;
    virtual void exitConfiguration_declarative_part(VHDLParser::Configuration_declarative_partContext *ctx) = 0;

    virtual void enterConfiguration_item(VHDLParser::Configuration_itemContext *ctx) = 0;
    virtual void exitConfiguration_item(VHDLParser::Configuration_itemContext *ctx) = 0;

    virtual void enterConfiguration_specification(VHDLParser::Configuration_specificationContext *ctx) = 0;
    virtual void exitConfiguration_specification(VHDLParser::Configuration_specificationContext *ctx) = 0;

    virtual void enterConstant_declaration(VHDLParser::Constant_declarationContext *ctx) = 0;
    virtual void exitConstant_declaration(VHDLParser::Constant_declarationContext *ctx) = 0;

    virtual void enterConstrained_array_definition(VHDLParser::Constrained_array_definitionContext *ctx) = 0;
    virtual void exitConstrained_array_definition(VHDLParser::Constrained_array_definitionContext *ctx) = 0;

    virtual void enterConstrained_nature_definition(VHDLParser::Constrained_nature_definitionContext *ctx) = 0;
    virtual void exitConstrained_nature_definition(VHDLParser::Constrained_nature_definitionContext *ctx) = 0;

    virtual void enterConstraint(VHDLParser::ConstraintContext *ctx) = 0;
    virtual void exitConstraint(VHDLParser::ConstraintContext *ctx) = 0;

    virtual void enterContext_clause(VHDLParser::Context_clauseContext *ctx) = 0;
    virtual void exitContext_clause(VHDLParser::Context_clauseContext *ctx) = 0;

    virtual void enterContext_item(VHDLParser::Context_itemContext *ctx) = 0;
    virtual void exitContext_item(VHDLParser::Context_itemContext *ctx) = 0;

    virtual void enterDelay_mechanism(VHDLParser::Delay_mechanismContext *ctx) = 0;
    virtual void exitDelay_mechanism(VHDLParser::Delay_mechanismContext *ctx) = 0;

    virtual void enterDesign_file(VHDLParser::Design_fileContext *ctx) = 0;
    virtual void exitDesign_file(VHDLParser::Design_fileContext *ctx) = 0;

    virtual void enterDesign_unit(VHDLParser::Design_unitContext *ctx) = 0;
    virtual void exitDesign_unit(VHDLParser::Design_unitContext *ctx) = 0;

    virtual void enterDesignator(VHDLParser::DesignatorContext *ctx) = 0;
    virtual void exitDesignator(VHDLParser::DesignatorContext *ctx) = 0;

    virtual void enterDirection(VHDLParser::DirectionContext *ctx) = 0;
    virtual void exitDirection(VHDLParser::DirectionContext *ctx) = 0;

    virtual void enterDisconnection_specification(VHDLParser::Disconnection_specificationContext *ctx) = 0;
    virtual void exitDisconnection_specification(VHDLParser::Disconnection_specificationContext *ctx) = 0;

    virtual void enterDiscrete_range(VHDLParser::Discrete_rangeContext *ctx) = 0;
    virtual void exitDiscrete_range(VHDLParser::Discrete_rangeContext *ctx) = 0;

    virtual void enterElement_association(VHDLParser::Element_associationContext *ctx) = 0;
    virtual void exitElement_association(VHDLParser::Element_associationContext *ctx) = 0;

    virtual void enterElement_declaration(VHDLParser::Element_declarationContext *ctx) = 0;
    virtual void exitElement_declaration(VHDLParser::Element_declarationContext *ctx) = 0;

    virtual void enterElement_subnature_definition(VHDLParser::Element_subnature_definitionContext *ctx) = 0;
    virtual void exitElement_subnature_definition(VHDLParser::Element_subnature_definitionContext *ctx) = 0;

    virtual void enterElement_subtype_definition(VHDLParser::Element_subtype_definitionContext *ctx) = 0;
    virtual void exitElement_subtype_definition(VHDLParser::Element_subtype_definitionContext *ctx) = 0;

    virtual void enterEntity_aspect(VHDLParser::Entity_aspectContext *ctx) = 0;
    virtual void exitEntity_aspect(VHDLParser::Entity_aspectContext *ctx) = 0;

    virtual void enterEntity_class(VHDLParser::Entity_classContext *ctx) = 0;
    virtual void exitEntity_class(VHDLParser::Entity_classContext *ctx) = 0;

    virtual void enterEntity_class_entry(VHDLParser::Entity_class_entryContext *ctx) = 0;
    virtual void exitEntity_class_entry(VHDLParser::Entity_class_entryContext *ctx) = 0;

    virtual void enterEntity_class_entry_list(VHDLParser::Entity_class_entry_listContext *ctx) = 0;
    virtual void exitEntity_class_entry_list(VHDLParser::Entity_class_entry_listContext *ctx) = 0;

    virtual void enterEntity_declaration(VHDLParser::Entity_declarationContext *ctx) = 0;
    virtual void exitEntity_declaration(VHDLParser::Entity_declarationContext *ctx) = 0;

    virtual void enterEntity_declarative_item(VHDLParser::Entity_declarative_itemContext *ctx) = 0;
    virtual void exitEntity_declarative_item(VHDLParser::Entity_declarative_itemContext *ctx) = 0;

    virtual void enterEntity_declarative_part(VHDLParser::Entity_declarative_partContext *ctx) = 0;
    virtual void exitEntity_declarative_part(VHDLParser::Entity_declarative_partContext *ctx) = 0;

    virtual void enterEntity_designator(VHDLParser::Entity_designatorContext *ctx) = 0;
    virtual void exitEntity_designator(VHDLParser::Entity_designatorContext *ctx) = 0;

    virtual void enterEntity_header(VHDLParser::Entity_headerContext *ctx) = 0;
    virtual void exitEntity_header(VHDLParser::Entity_headerContext *ctx) = 0;

    virtual void enterEntity_name_list(VHDLParser::Entity_name_listContext *ctx) = 0;
    virtual void exitEntity_name_list(VHDLParser::Entity_name_listContext *ctx) = 0;

    virtual void enterEntity_specification(VHDLParser::Entity_specificationContext *ctx) = 0;
    virtual void exitEntity_specification(VHDLParser::Entity_specificationContext *ctx) = 0;

    virtual void enterEntity_statement(VHDLParser::Entity_statementContext *ctx) = 0;
    virtual void exitEntity_statement(VHDLParser::Entity_statementContext *ctx) = 0;

    virtual void enterEntity_statement_part(VHDLParser::Entity_statement_partContext *ctx) = 0;
    virtual void exitEntity_statement_part(VHDLParser::Entity_statement_partContext *ctx) = 0;

    virtual void enterEntity_tag(VHDLParser::Entity_tagContext *ctx) = 0;
    virtual void exitEntity_tag(VHDLParser::Entity_tagContext *ctx) = 0;

    virtual void enterEnumeration_literal(VHDLParser::Enumeration_literalContext *ctx) = 0;
    virtual void exitEnumeration_literal(VHDLParser::Enumeration_literalContext *ctx) = 0;

    virtual void enterEnumeration_type_definition(VHDLParser::Enumeration_type_definitionContext *ctx) = 0;
    virtual void exitEnumeration_type_definition(VHDLParser::Enumeration_type_definitionContext *ctx) = 0;

    virtual void enterExit_statement(VHDLParser::Exit_statementContext *ctx) = 0;
    virtual void exitExit_statement(VHDLParser::Exit_statementContext *ctx) = 0;

    virtual void enterExpression(VHDLParser::ExpressionContext *ctx) = 0;
    virtual void exitExpression(VHDLParser::ExpressionContext *ctx) = 0;

    virtual void enterFactor(VHDLParser::FactorContext *ctx) = 0;
    virtual void exitFactor(VHDLParser::FactorContext *ctx) = 0;

    virtual void enterFile_declaration(VHDLParser::File_declarationContext *ctx) = 0;
    virtual void exitFile_declaration(VHDLParser::File_declarationContext *ctx) = 0;

    virtual void enterFile_logical_name(VHDLParser::File_logical_nameContext *ctx) = 0;
    virtual void exitFile_logical_name(VHDLParser::File_logical_nameContext *ctx) = 0;

    virtual void enterFile_open_information(VHDLParser::File_open_informationContext *ctx) = 0;
    virtual void exitFile_open_information(VHDLParser::File_open_informationContext *ctx) = 0;

    virtual void enterFile_type_definition(VHDLParser::File_type_definitionContext *ctx) = 0;
    virtual void exitFile_type_definition(VHDLParser::File_type_definitionContext *ctx) = 0;

    virtual void enterFormal_parameter_list(VHDLParser::Formal_parameter_listContext *ctx) = 0;
    virtual void exitFormal_parameter_list(VHDLParser::Formal_parameter_listContext *ctx) = 0;

    virtual void enterFormal_part(VHDLParser::Formal_partContext *ctx) = 0;
    virtual void exitFormal_part(VHDLParser::Formal_partContext *ctx) = 0;

    virtual void enterFree_quantity_declaration(VHDLParser::Free_quantity_declarationContext *ctx) = 0;
    virtual void exitFree_quantity_declaration(VHDLParser::Free_quantity_declarationContext *ctx) = 0;

    virtual void enterGenerate_statement(VHDLParser::Generate_statementContext *ctx) = 0;
    virtual void exitGenerate_statement(VHDLParser::Generate_statementContext *ctx) = 0;

    virtual void enterGeneration_scheme(VHDLParser::Generation_schemeContext *ctx) = 0;
    virtual void exitGeneration_scheme(VHDLParser::Generation_schemeContext *ctx) = 0;

    virtual void enterGeneric_clause(VHDLParser::Generic_clauseContext *ctx) = 0;
    virtual void exitGeneric_clause(VHDLParser::Generic_clauseContext *ctx) = 0;

    virtual void enterGeneric_list(VHDLParser::Generic_listContext *ctx) = 0;
    virtual void exitGeneric_list(VHDLParser::Generic_listContext *ctx) = 0;

    virtual void enterGeneric_map_aspect(VHDLParser::Generic_map_aspectContext *ctx) = 0;
    virtual void exitGeneric_map_aspect(VHDLParser::Generic_map_aspectContext *ctx) = 0;

    virtual void enterGroup_constituent(VHDLParser::Group_constituentContext *ctx) = 0;
    virtual void exitGroup_constituent(VHDLParser::Group_constituentContext *ctx) = 0;

    virtual void enterGroup_constituent_list(VHDLParser::Group_constituent_listContext *ctx) = 0;
    virtual void exitGroup_constituent_list(VHDLParser::Group_constituent_listContext *ctx) = 0;

    virtual void enterGroup_declaration(VHDLParser::Group_declarationContext *ctx) = 0;
    virtual void exitGroup_declaration(VHDLParser::Group_declarationContext *ctx) = 0;

    virtual void enterGroup_template_declaration(VHDLParser::Group_template_declarationContext *ctx) = 0;
    virtual void exitGroup_template_declaration(VHDLParser::Group_template_declarationContext *ctx) = 0;

    virtual void enterGuarded_signal_specification(VHDLParser::Guarded_signal_specificationContext *ctx) = 0;
    virtual void exitGuarded_signal_specification(VHDLParser::Guarded_signal_specificationContext *ctx) = 0;

    virtual void enterIdentifier(VHDLParser::IdentifierContext *ctx) = 0;
    virtual void exitIdentifier(VHDLParser::IdentifierContext *ctx) = 0;

    virtual void enterIdentifier_list(VHDLParser::Identifier_listContext *ctx) = 0;
    virtual void exitIdentifier_list(VHDLParser::Identifier_listContext *ctx) = 0;

    virtual void enterIf_statement(VHDLParser::If_statementContext *ctx) = 0;
    virtual void exitIf_statement(VHDLParser::If_statementContext *ctx) = 0;

    virtual void enterIndex_constraint(VHDLParser::Index_constraintContext *ctx) = 0;
    virtual void exitIndex_constraint(VHDLParser::Index_constraintContext *ctx) = 0;

    virtual void enterIndex_specification(VHDLParser::Index_specificationContext *ctx) = 0;
    virtual void exitIndex_specification(VHDLParser::Index_specificationContext *ctx) = 0;

    virtual void enterIndex_subtype_definition(VHDLParser::Index_subtype_definitionContext *ctx) = 0;
    virtual void exitIndex_subtype_definition(VHDLParser::Index_subtype_definitionContext *ctx) = 0;

    virtual void enterInstantiated_unit(VHDLParser::Instantiated_unitContext *ctx) = 0;
    virtual void exitInstantiated_unit(VHDLParser::Instantiated_unitContext *ctx) = 0;

    virtual void enterInstantiation_list(VHDLParser::Instantiation_listContext *ctx) = 0;
    virtual void exitInstantiation_list(VHDLParser::Instantiation_listContext *ctx) = 0;

    virtual void enterInterface_constant_declaration(VHDLParser::Interface_constant_declarationContext *ctx) = 0;
    virtual void exitInterface_constant_declaration(VHDLParser::Interface_constant_declarationContext *ctx) = 0;

    virtual void enterInterface_declaration(VHDLParser::Interface_declarationContext *ctx) = 0;
    virtual void exitInterface_declaration(VHDLParser::Interface_declarationContext *ctx) = 0;

    virtual void enterInterface_element(VHDLParser::Interface_elementContext *ctx) = 0;
    virtual void exitInterface_element(VHDLParser::Interface_elementContext *ctx) = 0;

    virtual void enterInterface_file_declaration(VHDLParser::Interface_file_declarationContext *ctx) = 0;
    virtual void exitInterface_file_declaration(VHDLParser::Interface_file_declarationContext *ctx) = 0;

    virtual void enterInterface_signal_list(VHDLParser::Interface_signal_listContext *ctx) = 0;
    virtual void exitInterface_signal_list(VHDLParser::Interface_signal_listContext *ctx) = 0;

    virtual void enterInterface_port_list(VHDLParser::Interface_port_listContext *ctx) = 0;
    virtual void exitInterface_port_list(VHDLParser::Interface_port_listContext *ctx) = 0;

    virtual void enterInterface_list(VHDLParser::Interface_listContext *ctx) = 0;
    virtual void exitInterface_list(VHDLParser::Interface_listContext *ctx) = 0;

    virtual void enterInterface_quantity_declaration(VHDLParser::Interface_quantity_declarationContext *ctx) = 0;
    virtual void exitInterface_quantity_declaration(VHDLParser::Interface_quantity_declarationContext *ctx) = 0;

    virtual void enterInterface_port_declaration(VHDLParser::Interface_port_declarationContext *ctx) = 0;
    virtual void exitInterface_port_declaration(VHDLParser::Interface_port_declarationContext *ctx) = 0;

    virtual void enterInterface_signal_declaration(VHDLParser::Interface_signal_declarationContext *ctx) = 0;
    virtual void exitInterface_signal_declaration(VHDLParser::Interface_signal_declarationContext *ctx) = 0;

    virtual void enterInterface_terminal_declaration(VHDLParser::Interface_terminal_declarationContext *ctx) = 0;
    virtual void exitInterface_terminal_declaration(VHDLParser::Interface_terminal_declarationContext *ctx) = 0;

    virtual void enterInterface_variable_declaration(VHDLParser::Interface_variable_declarationContext *ctx) = 0;
    virtual void exitInterface_variable_declaration(VHDLParser::Interface_variable_declarationContext *ctx) = 0;

    virtual void enterIteration_scheme(VHDLParser::Iteration_schemeContext *ctx) = 0;
    virtual void exitIteration_scheme(VHDLParser::Iteration_schemeContext *ctx) = 0;

    virtual void enterLabel_colon(VHDLParser::Label_colonContext *ctx) = 0;
    virtual void exitLabel_colon(VHDLParser::Label_colonContext *ctx) = 0;

    virtual void enterLibrary_clause(VHDLParser::Library_clauseContext *ctx) = 0;
    virtual void exitLibrary_clause(VHDLParser::Library_clauseContext *ctx) = 0;

    virtual void enterLibrary_unit(VHDLParser::Library_unitContext *ctx) = 0;
    virtual void exitLibrary_unit(VHDLParser::Library_unitContext *ctx) = 0;

    virtual void enterLiteral(VHDLParser::LiteralContext *ctx) = 0;
    virtual void exitLiteral(VHDLParser::LiteralContext *ctx) = 0;

    virtual void enterLogical_name(VHDLParser::Logical_nameContext *ctx) = 0;
    virtual void exitLogical_name(VHDLParser::Logical_nameContext *ctx) = 0;

    virtual void enterLogical_name_list(VHDLParser::Logical_name_listContext *ctx) = 0;
    virtual void exitLogical_name_list(VHDLParser::Logical_name_listContext *ctx) = 0;

    virtual void enterLogical_operator(VHDLParser::Logical_operatorContext *ctx) = 0;
    virtual void exitLogical_operator(VHDLParser::Logical_operatorContext *ctx) = 0;

    virtual void enterLoop_statement(VHDLParser::Loop_statementContext *ctx) = 0;
    virtual void exitLoop_statement(VHDLParser::Loop_statementContext *ctx) = 0;

    virtual void enterSignal_mode(VHDLParser::Signal_modeContext *ctx) = 0;
    virtual void exitSignal_mode(VHDLParser::Signal_modeContext *ctx) = 0;

    virtual void enterMultiplying_operator(VHDLParser::Multiplying_operatorContext *ctx) = 0;
    virtual void exitMultiplying_operator(VHDLParser::Multiplying_operatorContext *ctx) = 0;

    virtual void enterName(VHDLParser::NameContext *ctx) = 0;
    virtual void exitName(VHDLParser::NameContext *ctx) = 0;

    virtual void enterName_part(VHDLParser::Name_partContext *ctx) = 0;
    virtual void exitName_part(VHDLParser::Name_partContext *ctx) = 0;

    virtual void enterSelected_name(VHDLParser::Selected_nameContext *ctx) = 0;
    virtual void exitSelected_name(VHDLParser::Selected_nameContext *ctx) = 0;

    virtual void enterSelected_name_part(VHDLParser::Selected_name_partContext *ctx) = 0;
    virtual void exitSelected_name_part(VHDLParser::Selected_name_partContext *ctx) = 0;

    virtual void enterFunction_call_or_indexed_name_part(VHDLParser::Function_call_or_indexed_name_partContext *ctx) = 0;
    virtual void exitFunction_call_or_indexed_name_part(VHDLParser::Function_call_or_indexed_name_partContext *ctx) = 0;

    virtual void enterSlice_name_part(VHDLParser::Slice_name_partContext *ctx) = 0;
    virtual void exitSlice_name_part(VHDLParser::Slice_name_partContext *ctx) = 0;

    virtual void enterAttribute_name_part(VHDLParser::Attribute_name_partContext *ctx) = 0;
    virtual void exitAttribute_name_part(VHDLParser::Attribute_name_partContext *ctx) = 0;

    virtual void enterNature_declaration(VHDLParser::Nature_declarationContext *ctx) = 0;
    virtual void exitNature_declaration(VHDLParser::Nature_declarationContext *ctx) = 0;

    virtual void enterNature_definition(VHDLParser::Nature_definitionContext *ctx) = 0;
    virtual void exitNature_definition(VHDLParser::Nature_definitionContext *ctx) = 0;

    virtual void enterNature_element_declaration(VHDLParser::Nature_element_declarationContext *ctx) = 0;
    virtual void exitNature_element_declaration(VHDLParser::Nature_element_declarationContext *ctx) = 0;

    virtual void enterNext_statement(VHDLParser::Next_statementContext *ctx) = 0;
    virtual void exitNext_statement(VHDLParser::Next_statementContext *ctx) = 0;

    virtual void enterNumeric_literal(VHDLParser::Numeric_literalContext *ctx) = 0;
    virtual void exitNumeric_literal(VHDLParser::Numeric_literalContext *ctx) = 0;

    virtual void enterObject_declaration(VHDLParser::Object_declarationContext *ctx) = 0;
    virtual void exitObject_declaration(VHDLParser::Object_declarationContext *ctx) = 0;

    virtual void enterOpts(VHDLParser::OptsContext *ctx) = 0;
    virtual void exitOpts(VHDLParser::OptsContext *ctx) = 0;

    virtual void enterPackage_body(VHDLParser::Package_bodyContext *ctx) = 0;
    virtual void exitPackage_body(VHDLParser::Package_bodyContext *ctx) = 0;

    virtual void enterPackage_body_declarative_item(VHDLParser::Package_body_declarative_itemContext *ctx) = 0;
    virtual void exitPackage_body_declarative_item(VHDLParser::Package_body_declarative_itemContext *ctx) = 0;

    virtual void enterPackage_body_declarative_part(VHDLParser::Package_body_declarative_partContext *ctx) = 0;
    virtual void exitPackage_body_declarative_part(VHDLParser::Package_body_declarative_partContext *ctx) = 0;

    virtual void enterPackage_declaration(VHDLParser::Package_declarationContext *ctx) = 0;
    virtual void exitPackage_declaration(VHDLParser::Package_declarationContext *ctx) = 0;

    virtual void enterPackage_declarative_item(VHDLParser::Package_declarative_itemContext *ctx) = 0;
    virtual void exitPackage_declarative_item(VHDLParser::Package_declarative_itemContext *ctx) = 0;

    virtual void enterPackage_declarative_part(VHDLParser::Package_declarative_partContext *ctx) = 0;
    virtual void exitPackage_declarative_part(VHDLParser::Package_declarative_partContext *ctx) = 0;

    virtual void enterParameter_specification(VHDLParser::Parameter_specificationContext *ctx) = 0;
    virtual void exitParameter_specification(VHDLParser::Parameter_specificationContext *ctx) = 0;

    virtual void enterPhysical_literal(VHDLParser::Physical_literalContext *ctx) = 0;
    virtual void exitPhysical_literal(VHDLParser::Physical_literalContext *ctx) = 0;

    virtual void enterPhysical_type_definition(VHDLParser::Physical_type_definitionContext *ctx) = 0;
    virtual void exitPhysical_type_definition(VHDLParser::Physical_type_definitionContext *ctx) = 0;

    virtual void enterPort_clause(VHDLParser::Port_clauseContext *ctx) = 0;
    virtual void exitPort_clause(VHDLParser::Port_clauseContext *ctx) = 0;

    virtual void enterPort_list(VHDLParser::Port_listContext *ctx) = 0;
    virtual void exitPort_list(VHDLParser::Port_listContext *ctx) = 0;

    virtual void enterPort_map_aspect(VHDLParser::Port_map_aspectContext *ctx) = 0;
    virtual void exitPort_map_aspect(VHDLParser::Port_map_aspectContext *ctx) = 0;

    virtual void enterPrimary(VHDLParser::PrimaryContext *ctx) = 0;
    virtual void exitPrimary(VHDLParser::PrimaryContext *ctx) = 0;

    virtual void enterPrimary_unit(VHDLParser::Primary_unitContext *ctx) = 0;
    virtual void exitPrimary_unit(VHDLParser::Primary_unitContext *ctx) = 0;

    virtual void enterProcedural_declarative_item(VHDLParser::Procedural_declarative_itemContext *ctx) = 0;
    virtual void exitProcedural_declarative_item(VHDLParser::Procedural_declarative_itemContext *ctx) = 0;

    virtual void enterProcedural_declarative_part(VHDLParser::Procedural_declarative_partContext *ctx) = 0;
    virtual void exitProcedural_declarative_part(VHDLParser::Procedural_declarative_partContext *ctx) = 0;

    virtual void enterProcedural_statement_part(VHDLParser::Procedural_statement_partContext *ctx) = 0;
    virtual void exitProcedural_statement_part(VHDLParser::Procedural_statement_partContext *ctx) = 0;

    virtual void enterProcedure_call(VHDLParser::Procedure_callContext *ctx) = 0;
    virtual void exitProcedure_call(VHDLParser::Procedure_callContext *ctx) = 0;

    virtual void enterProcedure_call_statement(VHDLParser::Procedure_call_statementContext *ctx) = 0;
    virtual void exitProcedure_call_statement(VHDLParser::Procedure_call_statementContext *ctx) = 0;

    virtual void enterProcess_declarative_item(VHDLParser::Process_declarative_itemContext *ctx) = 0;
    virtual void exitProcess_declarative_item(VHDLParser::Process_declarative_itemContext *ctx) = 0;

    virtual void enterProcess_declarative_part(VHDLParser::Process_declarative_partContext *ctx) = 0;
    virtual void exitProcess_declarative_part(VHDLParser::Process_declarative_partContext *ctx) = 0;

    virtual void enterProcess_statement(VHDLParser::Process_statementContext *ctx) = 0;
    virtual void exitProcess_statement(VHDLParser::Process_statementContext *ctx) = 0;

    virtual void enterProcess_statement_part(VHDLParser::Process_statement_partContext *ctx) = 0;
    virtual void exitProcess_statement_part(VHDLParser::Process_statement_partContext *ctx) = 0;

    virtual void enterQualified_expression(VHDLParser::Qualified_expressionContext *ctx) = 0;
    virtual void exitQualified_expression(VHDLParser::Qualified_expressionContext *ctx) = 0;

    virtual void enterQuantity_declaration(VHDLParser::Quantity_declarationContext *ctx) = 0;
    virtual void exitQuantity_declaration(VHDLParser::Quantity_declarationContext *ctx) = 0;

    virtual void enterQuantity_list(VHDLParser::Quantity_listContext *ctx) = 0;
    virtual void exitQuantity_list(VHDLParser::Quantity_listContext *ctx) = 0;

    virtual void enterQuantity_specification(VHDLParser::Quantity_specificationContext *ctx) = 0;
    virtual void exitQuantity_specification(VHDLParser::Quantity_specificationContext *ctx) = 0;

    virtual void enterRange_decl(VHDLParser::Range_declContext *ctx) = 0;
    virtual void exitRange_decl(VHDLParser::Range_declContext *ctx) = 0;

    virtual void enterExplicit_range(VHDLParser::Explicit_rangeContext *ctx) = 0;
    virtual void exitExplicit_range(VHDLParser::Explicit_rangeContext *ctx) = 0;

    virtual void enterRange_constraint(VHDLParser::Range_constraintContext *ctx) = 0;
    virtual void exitRange_constraint(VHDLParser::Range_constraintContext *ctx) = 0;

    virtual void enterRecord_nature_definition(VHDLParser::Record_nature_definitionContext *ctx) = 0;
    virtual void exitRecord_nature_definition(VHDLParser::Record_nature_definitionContext *ctx) = 0;

    virtual void enterRecord_type_definition(VHDLParser::Record_type_definitionContext *ctx) = 0;
    virtual void exitRecord_type_definition(VHDLParser::Record_type_definitionContext *ctx) = 0;

    virtual void enterRelation(VHDLParser::RelationContext *ctx) = 0;
    virtual void exitRelation(VHDLParser::RelationContext *ctx) = 0;

    virtual void enterRelational_operator(VHDLParser::Relational_operatorContext *ctx) = 0;
    virtual void exitRelational_operator(VHDLParser::Relational_operatorContext *ctx) = 0;

    virtual void enterReport_statement(VHDLParser::Report_statementContext *ctx) = 0;
    virtual void exitReport_statement(VHDLParser::Report_statementContext *ctx) = 0;

    virtual void enterReturn_statement(VHDLParser::Return_statementContext *ctx) = 0;
    virtual void exitReturn_statement(VHDLParser::Return_statementContext *ctx) = 0;

    virtual void enterScalar_nature_definition(VHDLParser::Scalar_nature_definitionContext *ctx) = 0;
    virtual void exitScalar_nature_definition(VHDLParser::Scalar_nature_definitionContext *ctx) = 0;

    virtual void enterScalar_type_definition(VHDLParser::Scalar_type_definitionContext *ctx) = 0;
    virtual void exitScalar_type_definition(VHDLParser::Scalar_type_definitionContext *ctx) = 0;

    virtual void enterSecondary_unit(VHDLParser::Secondary_unitContext *ctx) = 0;
    virtual void exitSecondary_unit(VHDLParser::Secondary_unitContext *ctx) = 0;

    virtual void enterSecondary_unit_declaration(VHDLParser::Secondary_unit_declarationContext *ctx) = 0;
    virtual void exitSecondary_unit_declaration(VHDLParser::Secondary_unit_declarationContext *ctx) = 0;

    virtual void enterSelected_signal_assignment(VHDLParser::Selected_signal_assignmentContext *ctx) = 0;
    virtual void exitSelected_signal_assignment(VHDLParser::Selected_signal_assignmentContext *ctx) = 0;

    virtual void enterSelected_waveforms(VHDLParser::Selected_waveformsContext *ctx) = 0;
    virtual void exitSelected_waveforms(VHDLParser::Selected_waveformsContext *ctx) = 0;

    virtual void enterSensitivity_clause(VHDLParser::Sensitivity_clauseContext *ctx) = 0;
    virtual void exitSensitivity_clause(VHDLParser::Sensitivity_clauseContext *ctx) = 0;

    virtual void enterSensitivity_list(VHDLParser::Sensitivity_listContext *ctx) = 0;
    virtual void exitSensitivity_list(VHDLParser::Sensitivity_listContext *ctx) = 0;

    virtual void enterSequence_of_statements(VHDLParser::Sequence_of_statementsContext *ctx) = 0;
    virtual void exitSequence_of_statements(VHDLParser::Sequence_of_statementsContext *ctx) = 0;

    virtual void enterSequential_statement(VHDLParser::Sequential_statementContext *ctx) = 0;
    virtual void exitSequential_statement(VHDLParser::Sequential_statementContext *ctx) = 0;

    virtual void enterShift_expression(VHDLParser::Shift_expressionContext *ctx) = 0;
    virtual void exitShift_expression(VHDLParser::Shift_expressionContext *ctx) = 0;

    virtual void enterShift_operator(VHDLParser::Shift_operatorContext *ctx) = 0;
    virtual void exitShift_operator(VHDLParser::Shift_operatorContext *ctx) = 0;

    virtual void enterSignal_assignment_statement(VHDLParser::Signal_assignment_statementContext *ctx) = 0;
    virtual void exitSignal_assignment_statement(VHDLParser::Signal_assignment_statementContext *ctx) = 0;

    virtual void enterSignal_declaration(VHDLParser::Signal_declarationContext *ctx) = 0;
    virtual void exitSignal_declaration(VHDLParser::Signal_declarationContext *ctx) = 0;

    virtual void enterSignal_kind(VHDLParser::Signal_kindContext *ctx) = 0;
    virtual void exitSignal_kind(VHDLParser::Signal_kindContext *ctx) = 0;

    virtual void enterSignal_list(VHDLParser::Signal_listContext *ctx) = 0;
    virtual void exitSignal_list(VHDLParser::Signal_listContext *ctx) = 0;

    virtual void enterSignature(VHDLParser::SignatureContext *ctx) = 0;
    virtual void exitSignature(VHDLParser::SignatureContext *ctx) = 0;

    virtual void enterSimple_expression(VHDLParser::Simple_expressionContext *ctx) = 0;
    virtual void exitSimple_expression(VHDLParser::Simple_expressionContext *ctx) = 0;

    virtual void enterSimple_simultaneous_statement(VHDLParser::Simple_simultaneous_statementContext *ctx) = 0;
    virtual void exitSimple_simultaneous_statement(VHDLParser::Simple_simultaneous_statementContext *ctx) = 0;

    virtual void enterSimultaneous_alternative(VHDLParser::Simultaneous_alternativeContext *ctx) = 0;
    virtual void exitSimultaneous_alternative(VHDLParser::Simultaneous_alternativeContext *ctx) = 0;

    virtual void enterSimultaneous_case_statement(VHDLParser::Simultaneous_case_statementContext *ctx) = 0;
    virtual void exitSimultaneous_case_statement(VHDLParser::Simultaneous_case_statementContext *ctx) = 0;

    virtual void enterSimultaneous_if_statement(VHDLParser::Simultaneous_if_statementContext *ctx) = 0;
    virtual void exitSimultaneous_if_statement(VHDLParser::Simultaneous_if_statementContext *ctx) = 0;

    virtual void enterSimultaneous_procedural_statement(VHDLParser::Simultaneous_procedural_statementContext *ctx) = 0;
    virtual void exitSimultaneous_procedural_statement(VHDLParser::Simultaneous_procedural_statementContext *ctx) = 0;

    virtual void enterSimultaneous_statement(VHDLParser::Simultaneous_statementContext *ctx) = 0;
    virtual void exitSimultaneous_statement(VHDLParser::Simultaneous_statementContext *ctx) = 0;

    virtual void enterSimultaneous_statement_part(VHDLParser::Simultaneous_statement_partContext *ctx) = 0;
    virtual void exitSimultaneous_statement_part(VHDLParser::Simultaneous_statement_partContext *ctx) = 0;

    virtual void enterSource_aspect(VHDLParser::Source_aspectContext *ctx) = 0;
    virtual void exitSource_aspect(VHDLParser::Source_aspectContext *ctx) = 0;

    virtual void enterSource_quantity_declaration(VHDLParser::Source_quantity_declarationContext *ctx) = 0;
    virtual void exitSource_quantity_declaration(VHDLParser::Source_quantity_declarationContext *ctx) = 0;

    virtual void enterStep_limit_specification(VHDLParser::Step_limit_specificationContext *ctx) = 0;
    virtual void exitStep_limit_specification(VHDLParser::Step_limit_specificationContext *ctx) = 0;

    virtual void enterSubnature_declaration(VHDLParser::Subnature_declarationContext *ctx) = 0;
    virtual void exitSubnature_declaration(VHDLParser::Subnature_declarationContext *ctx) = 0;

    virtual void enterSubnature_indication(VHDLParser::Subnature_indicationContext *ctx) = 0;
    virtual void exitSubnature_indication(VHDLParser::Subnature_indicationContext *ctx) = 0;

    virtual void enterSubprogram_body(VHDLParser::Subprogram_bodyContext *ctx) = 0;
    virtual void exitSubprogram_body(VHDLParser::Subprogram_bodyContext *ctx) = 0;

    virtual void enterSubprogram_declaration(VHDLParser::Subprogram_declarationContext *ctx) = 0;
    virtual void exitSubprogram_declaration(VHDLParser::Subprogram_declarationContext *ctx) = 0;

    virtual void enterSubprogram_declarative_item(VHDLParser::Subprogram_declarative_itemContext *ctx) = 0;
    virtual void exitSubprogram_declarative_item(VHDLParser::Subprogram_declarative_itemContext *ctx) = 0;

    virtual void enterSubprogram_declarative_part(VHDLParser::Subprogram_declarative_partContext *ctx) = 0;
    virtual void exitSubprogram_declarative_part(VHDLParser::Subprogram_declarative_partContext *ctx) = 0;

    virtual void enterSubprogram_kind(VHDLParser::Subprogram_kindContext *ctx) = 0;
    virtual void exitSubprogram_kind(VHDLParser::Subprogram_kindContext *ctx) = 0;

    virtual void enterSubprogram_specification(VHDLParser::Subprogram_specificationContext *ctx) = 0;
    virtual void exitSubprogram_specification(VHDLParser::Subprogram_specificationContext *ctx) = 0;

    virtual void enterProcedure_specification(VHDLParser::Procedure_specificationContext *ctx) = 0;
    virtual void exitProcedure_specification(VHDLParser::Procedure_specificationContext *ctx) = 0;

    virtual void enterFunction_specification(VHDLParser::Function_specificationContext *ctx) = 0;
    virtual void exitFunction_specification(VHDLParser::Function_specificationContext *ctx) = 0;

    virtual void enterSubprogram_statement_part(VHDLParser::Subprogram_statement_partContext *ctx) = 0;
    virtual void exitSubprogram_statement_part(VHDLParser::Subprogram_statement_partContext *ctx) = 0;

    virtual void enterSubtype_declaration(VHDLParser::Subtype_declarationContext *ctx) = 0;
    virtual void exitSubtype_declaration(VHDLParser::Subtype_declarationContext *ctx) = 0;

    virtual void enterSubtype_indication(VHDLParser::Subtype_indicationContext *ctx) = 0;
    virtual void exitSubtype_indication(VHDLParser::Subtype_indicationContext *ctx) = 0;

    virtual void enterSuffix(VHDLParser::SuffixContext *ctx) = 0;
    virtual void exitSuffix(VHDLParser::SuffixContext *ctx) = 0;

    virtual void enterTarget(VHDLParser::TargetContext *ctx) = 0;
    virtual void exitTarget(VHDLParser::TargetContext *ctx) = 0;

    virtual void enterTerm(VHDLParser::TermContext *ctx) = 0;
    virtual void exitTerm(VHDLParser::TermContext *ctx) = 0;

    virtual void enterTerminal_aspect(VHDLParser::Terminal_aspectContext *ctx) = 0;
    virtual void exitTerminal_aspect(VHDLParser::Terminal_aspectContext *ctx) = 0;

    virtual void enterTerminal_declaration(VHDLParser::Terminal_declarationContext *ctx) = 0;
    virtual void exitTerminal_declaration(VHDLParser::Terminal_declarationContext *ctx) = 0;

    virtual void enterThrough_aspect(VHDLParser::Through_aspectContext *ctx) = 0;
    virtual void exitThrough_aspect(VHDLParser::Through_aspectContext *ctx) = 0;

    virtual void enterTimeout_clause(VHDLParser::Timeout_clauseContext *ctx) = 0;
    virtual void exitTimeout_clause(VHDLParser::Timeout_clauseContext *ctx) = 0;

    virtual void enterTolerance_aspect(VHDLParser::Tolerance_aspectContext *ctx) = 0;
    virtual void exitTolerance_aspect(VHDLParser::Tolerance_aspectContext *ctx) = 0;

    virtual void enterType_declaration(VHDLParser::Type_declarationContext *ctx) = 0;
    virtual void exitType_declaration(VHDLParser::Type_declarationContext *ctx) = 0;

    virtual void enterType_definition(VHDLParser::Type_definitionContext *ctx) = 0;
    virtual void exitType_definition(VHDLParser::Type_definitionContext *ctx) = 0;

    virtual void enterUnconstrained_array_definition(VHDLParser::Unconstrained_array_definitionContext *ctx) = 0;
    virtual void exitUnconstrained_array_definition(VHDLParser::Unconstrained_array_definitionContext *ctx) = 0;

    virtual void enterUnconstrained_nature_definition(VHDLParser::Unconstrained_nature_definitionContext *ctx) = 0;
    virtual void exitUnconstrained_nature_definition(VHDLParser::Unconstrained_nature_definitionContext *ctx) = 0;

    virtual void enterUse_clause(VHDLParser::Use_clauseContext *ctx) = 0;
    virtual void exitUse_clause(VHDLParser::Use_clauseContext *ctx) = 0;

    virtual void enterVariable_assignment_statement(VHDLParser::Variable_assignment_statementContext *ctx) = 0;
    virtual void exitVariable_assignment_statement(VHDLParser::Variable_assignment_statementContext *ctx) = 0;

    virtual void enterVariable_declaration(VHDLParser::Variable_declarationContext *ctx) = 0;
    virtual void exitVariable_declaration(VHDLParser::Variable_declarationContext *ctx) = 0;

    virtual void enterWait_statement(VHDLParser::Wait_statementContext *ctx) = 0;
    virtual void exitWait_statement(VHDLParser::Wait_statementContext *ctx) = 0;

    virtual void enterWaveform(VHDLParser::WaveformContext *ctx) = 0;
    virtual void exitWaveform(VHDLParser::WaveformContext *ctx) = 0;

    virtual void enterWaveform_element(VHDLParser::Waveform_elementContext *ctx) = 0;
    virtual void exitWaveform_element(VHDLParser::Waveform_elementContext *ctx) = 0;
};

} // namespace byEAjksCom::Libraries::VHDL::Formatting::ANTLR
