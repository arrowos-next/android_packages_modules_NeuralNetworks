// clang-format off
// Generated file (from: svdf_state.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace svdf_state {
// Generated svdf_state test
#include "generated/examples/svdf_state.example.cpp"
// Generated model constructor
#include "generated/models/svdf_state.model.cpp"
} // namespace svdf_state

TEST_F(GeneratedTests, svdf_state) {
    execute(svdf_state::CreateModel,
            svdf_state::is_ignored,
            svdf_state::get_examples());
}

