
; Function Attrs: noinline nounwind optnone uwtable
define i32 @main() {
  %1 = alloca i32
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 0, i32* %1
  store i32 1, i32* %2
  store i32 2, i32* %3
  store i32 3, i32* %4
  %5 = load i32, i32* %3
  %6 = load i32, i32* %4
  %7 = add i32 %5, %6
  ret i32 %7
}

