#include "engine/core/status_or_value.h"

#include "gtest/gtest.h"

using ::engine::core::StatusOrValue;


TEST(StatusOrValue, IntTypeSetValue) {
  auto int_status = StatusOrValue<int>();
  int_status.SetValue(3);
  EXPECT_EQ(int_status.Value(), 3);
  EXPECT_FALSE(int_status.error());
  EXPECT_TRUE(int_status.success());
}

TEST(StatusOrValue, IntTypeSetError) {
  auto int_status = StatusOrValue<int>();
  int_status.SetError("Unable to get value");
  EXPECT_TRUE(int_status.error());
  EXPECT_FALSE(int_status.success());
  EXPECT_EQ(int_status.GetErrorMessage(), "Unable to get value");
}

TEST(StatusOrValue, StringTypeSetValue) {
  auto int_status = StatusOrValue<std::string>();
  int_status.SetValue("test_string");
  EXPECT_EQ(int_status.Value(), "test_string");
  EXPECT_FALSE(int_status.error());
  EXPECT_TRUE(int_status.success());
}

TEST(StatusOrValue, StringTypeSetError) {
  auto int_status = StatusOrValue<std::string>();
  int_status.SetError("Unable to get value");
  EXPECT_TRUE(int_status.error());
  EXPECT_FALSE(int_status.success());
  EXPECT_EQ(int_status.GetErrorMessage(), "Unable to get value");
}

class TestClass {
public:
  TestClass(){}
  TestClass(int a, const std::string& b) : a_(a), b_(b) {}
  bool operator==(const TestClass& other) const {
    return a_ == other.a_ && b_ == other.b_;
  }
private:
  int a_;
  std::string b_;
};

TEST(StatusOrValue, TestClassSetValue) {
  auto int_status = StatusOrValue<TestClass>();
  int_status.SetValue(TestClass(1, "string"));
  EXPECT_EQ(int_status.Value(), TestClass(1, "string"));
  EXPECT_FALSE(int_status.error());
  EXPECT_TRUE(int_status.success());
}

TEST(StatusOrValue, TestClassSetError) {
  auto int_status = StatusOrValue<std::string>();
  int_status.SetError("Unable to get value");
  EXPECT_TRUE(int_status.error());
  EXPECT_FALSE(int_status.success());
  EXPECT_EQ(int_status.GetErrorMessage(), "Unable to get value");
}

struct TestStruct {
  int a_;
  std::string b_;
  bool operator==(const TestStruct& other) const {
    return a_ == other.a_ && b_ == other.b_;
  }
  TestStruct(){}
  TestStruct(int a, std::string b):a_(a), b_(b) {}
};

TEST(StatusOrValue, TestStructSetValue) {
  auto int_status = StatusOrValue<TestStruct>();
  int_status.SetValue(TestStruct(1, "string"));
  EXPECT_EQ(int_status.Value(), TestStruct(1, "string"));
  EXPECT_FALSE(int_status.error());
  EXPECT_TRUE(int_status.success());
}

TEST(StatusOrValue, TestStructSetError) {
  auto int_status = StatusOrValue<std::string>();
  int_status.SetError("Unable to get value");
  EXPECT_TRUE(int_status.error());
  EXPECT_FALSE(int_status.success());
  EXPECT_EQ(int_status.GetErrorMessage(), "Unable to get value");
}