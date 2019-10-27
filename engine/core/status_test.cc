#include "engine/core/status.h"

#include "gtest/gtest.h"

using ::engine::core::Status;

TEST(Status, SetSucess) {
  Status status;
  status.SetSuccess();
  EXPECT_TRUE(status.success());
  EXPECT_FALSE(status.error());
  EXPECT_EQ(status.GetErrorMessage(), "");
}

TEST(Status, SetSucessAfterError) {
  Status status;
  status.SetError("test_error_message");
  status.SetSuccess();
  EXPECT_TRUE(status.success());
  EXPECT_FALSE(status.error());
  EXPECT_EQ(status.GetErrorMessage(), "");
}

TEST(Status, SetError) {
  Status status;
  status.SetError("test_error_message");
  EXPECT_FALSE(status.success());
  EXPECT_TRUE(status.error());
  EXPECT_EQ(status.GetErrorMessage(), "test_error_message");
}

TEST(Status, SetErrorAfterSucess) {
  Status status;
  status.SetSuccess();
  status.SetError("test_error_message");
  EXPECT_FALSE(status.success());
  EXPECT_TRUE(status.error());
  EXPECT_EQ(status.GetErrorMessage(), "test_error_message");
}