// Generated from pad_all_dims.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::pad_all_dims {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, pad_all_dims) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::pad_all_dims
TEST_AVAILABLE_SINCE(V1_1, pad_all_dims, generated_tests::pad_all_dims::CreateModel)

namespace generated_tests::pad_all_dims {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

TEST_F(GeneratedTests, pad_all_dims_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_float16());
}

} // namespace generated_tests::pad_all_dims
TEST_AVAILABLE_SINCE(V1_2, pad_all_dims_float16, generated_tests::pad_all_dims::CreateModel_float16)

namespace generated_tests::pad_all_dims {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, pad_all_dims_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

void CreateModel_quant8(Model *model);
bool is_ignored_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

TEST_F(GeneratedTests, pad_all_dims_quant8) {
    execute(CreateModel_quant8,
            is_ignored_quant8,
            get_examples_quant8());
}

} // namespace generated_tests::pad_all_dims
TEST_AVAILABLE_SINCE(V1_1, pad_all_dims_quant8, generated_tests::pad_all_dims::CreateModel_quant8)

namespace generated_tests::pad_all_dims {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_dynamic_output_shape_float16());
}

} // namespace generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

void CreateModel_dynamic_output_shape_quant8(Model *model);
bool is_ignored_dynamic_output_shape_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape_quant8) {
    execute(CreateModel_dynamic_output_shape_quant8,
            is_ignored_dynamic_output_shape_quant8,
            get_examples_dynamic_output_shape_quant8());
}

} // namespace generated_tests::pad_all_dims
