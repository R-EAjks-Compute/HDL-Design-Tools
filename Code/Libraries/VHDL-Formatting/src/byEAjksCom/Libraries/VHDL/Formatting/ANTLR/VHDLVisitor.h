
// Generated from
// /home/k8sadmin/Repositories/hdl-design-tools/Resources/Grammars/VHDL/VHDL.g4
// by ANTLR 4.13.2

#pragma once

#include "VHDLParser.h"
#include "antlr4-runtime.h"

namespace byEAjksCom::Libraries::VHDL::Formatting::ANTLR
{

/**
 * This class defines an abstract visitor for a parse tree
 * produced by VHDLParser.
 */
class VHDLVisitor : public antlr4::tree::AbstractParseTreeVisitor
{
  public:
    /**
   * Visit parse trees produced by VHDLParser.
   */
    virtual std::any visitAbstract_literal(VHDLParser::Abstract_literalContext *context) = 0;

    virtual std::any visitAccess_type_definition(VHDLParser::Access_type_definitionContext *context) = 0;

    virtual std::any visitAcross_aspect(VHDLParser::Across_aspectContext *context) = 0;

    virtual std::any visitActual_designator(VHDLParser::Actual_designatorContext *context) = 0;

    virtual std::any visitActual_parameter_part(VHDLParser::Actual_parameter_partContext *context) = 0;

    virtual std::any visitActual_part(VHDLParser::Actual_partContext *context) = 0;

    virtual std::any visitAdding_operator(VHDLParser::Adding_operatorContext *context) = 0;

    virtual std::any visitAggregate(VHDLParser::AggregateContext *context) = 0;

    virtual std::any visitAlias_declaration(VHDLParser::Alias_declarationContext *context) = 0;

    virtual std::any visitAlias_designator(VHDLParser::Alias_designatorContext *context) = 0;

    virtual std::any visitAlias_indication(VHDLParser::Alias_indicationContext *context) = 0;

    virtual std::any visitAllocator(VHDLParser::AllocatorContext *context) = 0;

    virtual std::any visitArchitecture_body(VHDLParser::Architecture_bodyContext *context) = 0;

    virtual std::any visitArchitecture_declarative_part(VHDLParser::Architecture_declarative_partContext *context) = 0;

    virtual std::any visitArchitecture_statement(VHDLParser::Architecture_statementContext *context) = 0;

    virtual std::any visitArchitecture_statement_part(VHDLParser::Architecture_statement_partContext *context) = 0;

    virtual std::any visitArray_nature_definition(VHDLParser::Array_nature_definitionContext *context) = 0;

    virtual std::any visitArray_type_definition(VHDLParser::Array_type_definitionContext *context) = 0;

    virtual std::any visitAssertion(VHDLParser::AssertionContext *context) = 0;

    virtual std::any visitAssertion_statement(VHDLParser::Assertion_statementContext *context) = 0;

    virtual std::any visitAssociation_element(VHDLParser::Association_elementContext *context) = 0;

    virtual std::any visitAssociation_list(VHDLParser::Association_listContext *context) = 0;

    virtual std::any visitAttribute_declaration(VHDLParser::Attribute_declarationContext *context) = 0;

    virtual std::any visitAttribute_designator(VHDLParser::Attribute_designatorContext *context) = 0;

    virtual std::any visitAttribute_specification(VHDLParser::Attribute_specificationContext *context) = 0;

    virtual std::any visitBase_unit_declaration(VHDLParser::Base_unit_declarationContext *context) = 0;

    virtual std::any visitBinding_indication(VHDLParser::Binding_indicationContext *context) = 0;

    virtual std::any visitBlock_configuration(VHDLParser::Block_configurationContext *context) = 0;

    virtual std::any visitBlock_declarative_item(VHDLParser::Block_declarative_itemContext *context) = 0;

    virtual std::any visitBlock_declarative_part(VHDLParser::Block_declarative_partContext *context) = 0;

    virtual std::any visitBlock_header(VHDLParser::Block_headerContext *context) = 0;

    virtual std::any visitBlock_specification(VHDLParser::Block_specificationContext *context) = 0;

    virtual std::any visitBlock_statement(VHDLParser::Block_statementContext *context) = 0;

    virtual std::any visitBlock_statement_part(VHDLParser::Block_statement_partContext *context) = 0;

    virtual std::any visitBranch_quantity_declaration(VHDLParser::Branch_quantity_declarationContext *context) = 0;

    virtual std::any visitBreak_element(VHDLParser::Break_elementContext *context) = 0;

    virtual std::any visitBreak_list(VHDLParser::Break_listContext *context) = 0;

    virtual std::any visitBreak_selector_clause(VHDLParser::Break_selector_clauseContext *context) = 0;

    virtual std::any visitBreak_statement(VHDLParser::Break_statementContext *context) = 0;

    virtual std::any visitCase_statement(VHDLParser::Case_statementContext *context) = 0;

    virtual std::any visitCase_statement_alternative(VHDLParser::Case_statement_alternativeContext *context) = 0;

    virtual std::any visitChoice(VHDLParser::ChoiceContext *context) = 0;

    virtual std::any visitChoices(VHDLParser::ChoicesContext *context) = 0;

    virtual std::any visitComponent_configuration(VHDLParser::Component_configurationContext *context) = 0;

    virtual std::any visitComponent_declaration(VHDLParser::Component_declarationContext *context) = 0;

    virtual std::any visitComponent_instantiation_statement(VHDLParser::Component_instantiation_statementContext *context) = 0;

    virtual std::any visitComponent_specification(VHDLParser::Component_specificationContext *context) = 0;

    virtual std::any visitComposite_nature_definition(VHDLParser::Composite_nature_definitionContext *context) = 0;

    virtual std::any visitComposite_type_definition(VHDLParser::Composite_type_definitionContext *context) = 0;

    virtual std::any visitConcurrent_assertion_statement(VHDLParser::Concurrent_assertion_statementContext *context) = 0;

    virtual std::any visitConcurrent_break_statement(VHDLParser::Concurrent_break_statementContext *context) = 0;

    virtual std::any visitConcurrent_procedure_call_statement(VHDLParser::Concurrent_procedure_call_statementContext *context) = 0;

    virtual std::any visitConcurrent_signal_assignment_statement(VHDLParser::Concurrent_signal_assignment_statementContext *context) = 0;

    virtual std::any visitCondition(VHDLParser::ConditionContext *context) = 0;

    virtual std::any visitCondition_clause(VHDLParser::Condition_clauseContext *context) = 0;

    virtual std::any visitConditional_signal_assignment(VHDLParser::Conditional_signal_assignmentContext *context) = 0;

    virtual std::any visitConditional_waveforms(VHDLParser::Conditional_waveformsContext *context) = 0;

    virtual std::any visitConfiguration_declaration(VHDLParser::Configuration_declarationContext *context) = 0;

    virtual std::any visitConfiguration_declarative_item(VHDLParser::Configuration_declarative_itemContext *context) = 0;

    virtual std::any visitConfiguration_declarative_part(VHDLParser::Configuration_declarative_partContext *context) = 0;

    virtual std::any visitConfiguration_item(VHDLParser::Configuration_itemContext *context) = 0;

    virtual std::any visitConfiguration_specification(VHDLParser::Configuration_specificationContext *context) = 0;

    virtual std::any visitConstant_declaration(VHDLParser::Constant_declarationContext *context) = 0;

    virtual std::any visitConstrained_array_definition(VHDLParser::Constrained_array_definitionContext *context) = 0;

    virtual std::any visitConstrained_nature_definition(VHDLParser::Constrained_nature_definitionContext *context) = 0;

    virtual std::any visitConstraint(VHDLParser::ConstraintContext *context) = 0;

    virtual std::any visitContext_clause(VHDLParser::Context_clauseContext *context) = 0;

    virtual std::any visitContext_item(VHDLParser::Context_itemContext *context) = 0;

    virtual std::any visitDelay_mechanism(VHDLParser::Delay_mechanismContext *context) = 0;

    virtual std::any visitDesign_file(VHDLParser::Design_fileContext *context) = 0;

    virtual std::any visitDesign_unit(VHDLParser::Design_unitContext *context) = 0;

    virtual std::any visitDesignator(VHDLParser::DesignatorContext *context) = 0;

    virtual std::any visitDirection(VHDLParser::DirectionContext *context) = 0;

    virtual std::any visitDisconnection_specification(VHDLParser::Disconnection_specificationContext *context) = 0;

    virtual std::any visitDiscrete_range(VHDLParser::Discrete_rangeContext *context) = 0;

    virtual std::any visitElement_association(VHDLParser::Element_associationContext *context) = 0;

    virtual std::any visitElement_declaration(VHDLParser::Element_declarationContext *context) = 0;

    virtual std::any visitElement_subnature_definition(VHDLParser::Element_subnature_definitionContext *context) = 0;

    virtual std::any visitElement_subtype_definition(VHDLParser::Element_subtype_definitionContext *context) = 0;

    virtual std::any visitEntity_aspect(VHDLParser::Entity_aspectContext *context) = 0;

    virtual std::any visitEntity_class(VHDLParser::Entity_classContext *context) = 0;

    virtual std::any visitEntity_class_entry(VHDLParser::Entity_class_entryContext *context) = 0;

    virtual std::any visitEntity_class_entry_list(VHDLParser::Entity_class_entry_listContext *context) = 0;

    virtual std::any visitEntity_declaration(VHDLParser::Entity_declarationContext *context) = 0;

    virtual std::any visitEntity_declarative_item(VHDLParser::Entity_declarative_itemContext *context) = 0;

    virtual std::any visitEntity_declarative_part(VHDLParser::Entity_declarative_partContext *context) = 0;

    virtual std::any visitEntity_designator(VHDLParser::Entity_designatorContext *context) = 0;

    virtual std::any visitEntity_header(VHDLParser::Entity_headerContext *context) = 0;

    virtual std::any visitEntity_name_list(VHDLParser::Entity_name_listContext *context) = 0;

    virtual std::any visitEntity_specification(VHDLParser::Entity_specificationContext *context) = 0;

    virtual std::any visitEntity_statement(VHDLParser::Entity_statementContext *context) = 0;

    virtual std::any visitEntity_statement_part(VHDLParser::Entity_statement_partContext *context) = 0;

    virtual std::any visitEntity_tag(VHDLParser::Entity_tagContext *context) = 0;

    virtual std::any visitEnumeration_literal(VHDLParser::Enumeration_literalContext *context) = 0;

    virtual std::any visitEnumeration_type_definition(VHDLParser::Enumeration_type_definitionContext *context) = 0;

    virtual std::any visitExit_statement(VHDLParser::Exit_statementContext *context) = 0;

    virtual std::any visitExpression(VHDLParser::ExpressionContext *context) = 0;

    virtual std::any visitFactor(VHDLParser::FactorContext *context) = 0;

    virtual std::any visitFile_declaration(VHDLParser::File_declarationContext *context) = 0;

    virtual std::any visitFile_logical_name(VHDLParser::File_logical_nameContext *context) = 0;

    virtual std::any visitFile_open_information(VHDLParser::File_open_informationContext *context) = 0;

    virtual std::any visitFile_type_definition(VHDLParser::File_type_definitionContext *context) = 0;

    virtual std::any visitFormal_parameter_list(VHDLParser::Formal_parameter_listContext *context) = 0;

    virtual std::any visitFormal_part(VHDLParser::Formal_partContext *context) = 0;

    virtual std::any visitFree_quantity_declaration(VHDLParser::Free_quantity_declarationContext *context) = 0;

    virtual std::any visitGenerate_statement(VHDLParser::Generate_statementContext *context) = 0;

    virtual std::any visitGeneration_scheme(VHDLParser::Generation_schemeContext *context) = 0;

    virtual std::any visitGeneric_clause(VHDLParser::Generic_clauseContext *context) = 0;

    virtual std::any visitGeneric_list(VHDLParser::Generic_listContext *context) = 0;

    virtual std::any visitGeneric_map_aspect(VHDLParser::Generic_map_aspectContext *context) = 0;

    virtual std::any visitGroup_constituent(VHDLParser::Group_constituentContext *context) = 0;

    virtual std::any visitGroup_constituent_list(VHDLParser::Group_constituent_listContext *context) = 0;

    virtual std::any visitGroup_declaration(VHDLParser::Group_declarationContext *context) = 0;

    virtual std::any visitGroup_template_declaration(VHDLParser::Group_template_declarationContext *context) = 0;

    virtual std::any visitGuarded_signal_specification(VHDLParser::Guarded_signal_specificationContext *context) = 0;

    virtual std::any visitIdentifier(VHDLParser::IdentifierContext *context) = 0;

    virtual std::any visitIdentifier_list(VHDLParser::Identifier_listContext *context) = 0;

    virtual std::any visitIf_statement(VHDLParser::If_statementContext *context) = 0;

    virtual std::any visitIndex_constraint(VHDLParser::Index_constraintContext *context) = 0;

    virtual std::any visitIndex_specification(VHDLParser::Index_specificationContext *context) = 0;

    virtual std::any visitIndex_subtype_definition(VHDLParser::Index_subtype_definitionContext *context) = 0;

    virtual std::any visitInstantiated_unit(VHDLParser::Instantiated_unitContext *context) = 0;

    virtual std::any visitInstantiation_list(VHDLParser::Instantiation_listContext *context) = 0;

    virtual std::any visitInterface_constant_declaration(VHDLParser::Interface_constant_declarationContext *context) = 0;

    virtual std::any visitInterface_declaration(VHDLParser::Interface_declarationContext *context) = 0;

    virtual std::any visitInterface_element(VHDLParser::Interface_elementContext *context) = 0;

    virtual std::any visitInterface_file_declaration(VHDLParser::Interface_file_declarationContext *context) = 0;

    virtual std::any visitInterface_signal_list(VHDLParser::Interface_signal_listContext *context) = 0;

    virtual std::any visitInterface_port_list(VHDLParser::Interface_port_listContext *context) = 0;

    virtual std::any visitInterface_list(VHDLParser::Interface_listContext *context) = 0;

    virtual std::any visitInterface_quantity_declaration(VHDLParser::Interface_quantity_declarationContext *context) = 0;

    virtual std::any visitInterface_port_declaration(VHDLParser::Interface_port_declarationContext *context) = 0;

    virtual std::any visitInterface_signal_declaration(VHDLParser::Interface_signal_declarationContext *context) = 0;

    virtual std::any visitInterface_terminal_declaration(VHDLParser::Interface_terminal_declarationContext *context) = 0;

    virtual std::any visitInterface_variable_declaration(VHDLParser::Interface_variable_declarationContext *context) = 0;

    virtual std::any visitIteration_scheme(VHDLParser::Iteration_schemeContext *context) = 0;

    virtual std::any visitLabel_colon(VHDLParser::Label_colonContext *context) = 0;

    virtual std::any visitLibrary_clause(VHDLParser::Library_clauseContext *context) = 0;

    virtual std::any visitLibrary_unit(VHDLParser::Library_unitContext *context) = 0;

    virtual std::any visitLiteral(VHDLParser::LiteralContext *context) = 0;

    virtual std::any visitLogical_name(VHDLParser::Logical_nameContext *context) = 0;

    virtual std::any visitLogical_name_list(VHDLParser::Logical_name_listContext *context) = 0;

    virtual std::any visitLogical_operator(VHDLParser::Logical_operatorContext *context) = 0;

    virtual std::any visitLoop_statement(VHDLParser::Loop_statementContext *context) = 0;

    virtual std::any visitSignal_mode(VHDLParser::Signal_modeContext *context) = 0;

    virtual std::any visitMultiplying_operator(VHDLParser::Multiplying_operatorContext *context) = 0;

    virtual std::any visitName(VHDLParser::NameContext *context) = 0;

    virtual std::any visitName_part(VHDLParser::Name_partContext *context) = 0;

    virtual std::any visitSelected_name(VHDLParser::Selected_nameContext *context) = 0;

    virtual std::any visitSelected_name_part(VHDLParser::Selected_name_partContext *context) = 0;

    virtual std::any visitFunction_call_or_indexed_name_part(VHDLParser::Function_call_or_indexed_name_partContext *context) = 0;

    virtual std::any visitSlice_name_part(VHDLParser::Slice_name_partContext *context) = 0;

    virtual std::any visitAttribute_name_part(VHDLParser::Attribute_name_partContext *context) = 0;

    virtual std::any visitNature_declaration(VHDLParser::Nature_declarationContext *context) = 0;

    virtual std::any visitNature_definition(VHDLParser::Nature_definitionContext *context) = 0;

    virtual std::any visitNature_element_declaration(VHDLParser::Nature_element_declarationContext *context) = 0;

    virtual std::any visitNext_statement(VHDLParser::Next_statementContext *context) = 0;

    virtual std::any visitNumeric_literal(VHDLParser::Numeric_literalContext *context) = 0;

    virtual std::any visitObject_declaration(VHDLParser::Object_declarationContext *context) = 0;

    virtual std::any visitOpts(VHDLParser::OptsContext *context) = 0;

    virtual std::any visitPackage_body(VHDLParser::Package_bodyContext *context) = 0;

    virtual std::any visitPackage_body_declarative_item(VHDLParser::Package_body_declarative_itemContext *context) = 0;

    virtual std::any visitPackage_body_declarative_part(VHDLParser::Package_body_declarative_partContext *context) = 0;

    virtual std::any visitPackage_declaration(VHDLParser::Package_declarationContext *context) = 0;

    virtual std::any visitPackage_declarative_item(VHDLParser::Package_declarative_itemContext *context) = 0;

    virtual std::any visitPackage_declarative_part(VHDLParser::Package_declarative_partContext *context) = 0;

    virtual std::any visitParameter_specification(VHDLParser::Parameter_specificationContext *context) = 0;

    virtual std::any visitPhysical_literal(VHDLParser::Physical_literalContext *context) = 0;

    virtual std::any visitPhysical_type_definition(VHDLParser::Physical_type_definitionContext *context) = 0;

    virtual std::any visitPort_clause(VHDLParser::Port_clauseContext *context) = 0;

    virtual std::any visitPort_list(VHDLParser::Port_listContext *context) = 0;

    virtual std::any visitPort_map_aspect(VHDLParser::Port_map_aspectContext *context) = 0;

    virtual std::any visitPrimary(VHDLParser::PrimaryContext *context) = 0;

    virtual std::any visitPrimary_unit(VHDLParser::Primary_unitContext *context) = 0;

    virtual std::any visitProcedural_declarative_item(VHDLParser::Procedural_declarative_itemContext *context) = 0;

    virtual std::any visitProcedural_declarative_part(VHDLParser::Procedural_declarative_partContext *context) = 0;

    virtual std::any visitProcedural_statement_part(VHDLParser::Procedural_statement_partContext *context) = 0;

    virtual std::any visitProcedure_call(VHDLParser::Procedure_callContext *context) = 0;

    virtual std::any visitProcedure_call_statement(VHDLParser::Procedure_call_statementContext *context) = 0;

    virtual std::any visitProcess_declarative_item(VHDLParser::Process_declarative_itemContext *context) = 0;

    virtual std::any visitProcess_declarative_part(VHDLParser::Process_declarative_partContext *context) = 0;

    virtual std::any visitProcess_statement(VHDLParser::Process_statementContext *context) = 0;

    virtual std::any visitProcess_statement_part(VHDLParser::Process_statement_partContext *context) = 0;

    virtual std::any visitQualified_expression(VHDLParser::Qualified_expressionContext *context) = 0;

    virtual std::any visitQuantity_declaration(VHDLParser::Quantity_declarationContext *context) = 0;

    virtual std::any visitQuantity_list(VHDLParser::Quantity_listContext *context) = 0;

    virtual std::any visitQuantity_specification(VHDLParser::Quantity_specificationContext *context) = 0;

    virtual std::any visitRange_decl(VHDLParser::Range_declContext *context) = 0;

    virtual std::any visitExplicit_range(VHDLParser::Explicit_rangeContext *context) = 0;

    virtual std::any visitRange_constraint(VHDLParser::Range_constraintContext *context) = 0;

    virtual std::any visitRecord_nature_definition(VHDLParser::Record_nature_definitionContext *context) = 0;

    virtual std::any visitRecord_type_definition(VHDLParser::Record_type_definitionContext *context) = 0;

    virtual std::any visitRelation(VHDLParser::RelationContext *context) = 0;

    virtual std::any visitRelational_operator(VHDLParser::Relational_operatorContext *context) = 0;

    virtual std::any visitReport_statement(VHDLParser::Report_statementContext *context) = 0;

    virtual std::any visitReturn_statement(VHDLParser::Return_statementContext *context) = 0;

    virtual std::any visitScalar_nature_definition(VHDLParser::Scalar_nature_definitionContext *context) = 0;

    virtual std::any visitScalar_type_definition(VHDLParser::Scalar_type_definitionContext *context) = 0;

    virtual std::any visitSecondary_unit(VHDLParser::Secondary_unitContext *context) = 0;

    virtual std::any visitSecondary_unit_declaration(VHDLParser::Secondary_unit_declarationContext *context) = 0;

    virtual std::any visitSelected_signal_assignment(VHDLParser::Selected_signal_assignmentContext *context) = 0;

    virtual std::any visitSelected_waveforms(VHDLParser::Selected_waveformsContext *context) = 0;

    virtual std::any visitSensitivity_clause(VHDLParser::Sensitivity_clauseContext *context) = 0;

    virtual std::any visitSensitivity_list(VHDLParser::Sensitivity_listContext *context) = 0;

    virtual std::any visitSequence_of_statements(VHDLParser::Sequence_of_statementsContext *context) = 0;

    virtual std::any visitSequential_statement(VHDLParser::Sequential_statementContext *context) = 0;

    virtual std::any visitShift_expression(VHDLParser::Shift_expressionContext *context) = 0;

    virtual std::any visitShift_operator(VHDLParser::Shift_operatorContext *context) = 0;

    virtual std::any visitSignal_assignment_statement(VHDLParser::Signal_assignment_statementContext *context) = 0;

    virtual std::any visitSignal_declaration(VHDLParser::Signal_declarationContext *context) = 0;

    virtual std::any visitSignal_kind(VHDLParser::Signal_kindContext *context) = 0;

    virtual std::any visitSignal_list(VHDLParser::Signal_listContext *context) = 0;

    virtual std::any visitSignature(VHDLParser::SignatureContext *context) = 0;

    virtual std::any visitSimple_expression(VHDLParser::Simple_expressionContext *context) = 0;

    virtual std::any visitSimple_simultaneous_statement(VHDLParser::Simple_simultaneous_statementContext *context) = 0;

    virtual std::any visitSimultaneous_alternative(VHDLParser::Simultaneous_alternativeContext *context) = 0;

    virtual std::any visitSimultaneous_case_statement(VHDLParser::Simultaneous_case_statementContext *context) = 0;

    virtual std::any visitSimultaneous_if_statement(VHDLParser::Simultaneous_if_statementContext *context) = 0;

    virtual std::any visitSimultaneous_procedural_statement(VHDLParser::Simultaneous_procedural_statementContext *context) = 0;

    virtual std::any visitSimultaneous_statement(VHDLParser::Simultaneous_statementContext *context) = 0;

    virtual std::any visitSimultaneous_statement_part(VHDLParser::Simultaneous_statement_partContext *context) = 0;

    virtual std::any visitSource_aspect(VHDLParser::Source_aspectContext *context) = 0;

    virtual std::any visitSource_quantity_declaration(VHDLParser::Source_quantity_declarationContext *context) = 0;

    virtual std::any visitStep_limit_specification(VHDLParser::Step_limit_specificationContext *context) = 0;

    virtual std::any visitSubnature_declaration(VHDLParser::Subnature_declarationContext *context) = 0;

    virtual std::any visitSubnature_indication(VHDLParser::Subnature_indicationContext *context) = 0;

    virtual std::any visitSubprogram_body(VHDLParser::Subprogram_bodyContext *context) = 0;

    virtual std::any visitSubprogram_declaration(VHDLParser::Subprogram_declarationContext *context) = 0;

    virtual std::any visitSubprogram_declarative_item(VHDLParser::Subprogram_declarative_itemContext *context) = 0;

    virtual std::any visitSubprogram_declarative_part(VHDLParser::Subprogram_declarative_partContext *context) = 0;

    virtual std::any visitSubprogram_kind(VHDLParser::Subprogram_kindContext *context) = 0;

    virtual std::any visitSubprogram_specification(VHDLParser::Subprogram_specificationContext *context) = 0;

    virtual std::any visitProcedure_specification(VHDLParser::Procedure_specificationContext *context) = 0;

    virtual std::any visitFunction_specification(VHDLParser::Function_specificationContext *context) = 0;

    virtual std::any visitSubprogram_statement_part(VHDLParser::Subprogram_statement_partContext *context) = 0;

    virtual std::any visitSubtype_declaration(VHDLParser::Subtype_declarationContext *context) = 0;

    virtual std::any visitSubtype_indication(VHDLParser::Subtype_indicationContext *context) = 0;

    virtual std::any visitSuffix(VHDLParser::SuffixContext *context) = 0;

    virtual std::any visitTarget(VHDLParser::TargetContext *context) = 0;

    virtual std::any visitTerm(VHDLParser::TermContext *context) = 0;

    virtual std::any visitTerminal_aspect(VHDLParser::Terminal_aspectContext *context) = 0;

    virtual std::any visitTerminal_declaration(VHDLParser::Terminal_declarationContext *context) = 0;

    virtual std::any visitThrough_aspect(VHDLParser::Through_aspectContext *context) = 0;

    virtual std::any visitTimeout_clause(VHDLParser::Timeout_clauseContext *context) = 0;

    virtual std::any visitTolerance_aspect(VHDLParser::Tolerance_aspectContext *context) = 0;

    virtual std::any visitType_declaration(VHDLParser::Type_declarationContext *context) = 0;

    virtual std::any visitType_definition(VHDLParser::Type_definitionContext *context) = 0;

    virtual std::any visitUnconstrained_array_definition(VHDLParser::Unconstrained_array_definitionContext *context) = 0;

    virtual std::any visitUnconstrained_nature_definition(VHDLParser::Unconstrained_nature_definitionContext *context) = 0;

    virtual std::any visitUse_clause(VHDLParser::Use_clauseContext *context) = 0;

    virtual std::any visitVariable_assignment_statement(VHDLParser::Variable_assignment_statementContext *context) = 0;

    virtual std::any visitVariable_declaration(VHDLParser::Variable_declarationContext *context) = 0;

    virtual std::any visitWait_statement(VHDLParser::Wait_statementContext *context) = 0;

    virtual std::any visitWaveform(VHDLParser::WaveformContext *context) = 0;

    virtual std::any visitWaveform_element(VHDLParser::Waveform_elementContext *context) = 0;
};

} // namespace byEAjksCom::Libraries::VHDL::Formatting::ANTLR
