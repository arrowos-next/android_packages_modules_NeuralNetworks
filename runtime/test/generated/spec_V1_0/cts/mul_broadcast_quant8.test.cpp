// Generated from mul_broadcast_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::mul_broadcast_quant8 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, mul_broadcast_quant8) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::mul_broadcast_quant8
TEST_AVAILABLE_SINCE(V1_0, mul_broadcast_quant8, generated_tests::mul_broadcast_quant8::CreateModel)

namespace generated_tests::mul_broadcast_quant8 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, mul_broadcast_quant8_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::mul_broadcast_quant8
