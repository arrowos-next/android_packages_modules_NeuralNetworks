// clang-format off
// Generated file (from: reduce_any.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reduce_any {
// Generated reduce_any test
#include "generated/examples/reduce_any.example.cpp"
// Generated model constructor
#include "generated/models/reduce_any.model.cpp"
} // namespace reduce_any

TEST_F(GeneratedTests, reduce_any) {
    execute(reduce_any::CreateModel,
            reduce_any::is_ignored,
            reduce_any::get_examples());
}

TEST_F(GeneratedTests, reduce_any_2) {
    execute(reduce_any::CreateModel_2,
            reduce_any::is_ignored_2,
            reduce_any::get_examples_2());
}

TEST_F(GeneratedTests, reduce_any_3) {
    execute(reduce_any::CreateModel_3,
            reduce_any::is_ignored_3,
            reduce_any::get_examples_3());
}

