BUILD=build

.PHONY: build init clean test run

init:
	@cmake -S . -B $(BUILD)

build:
	mkdir -p $(BUILD)
	cmake --build $(BUILD) -j 10

test:
	ctest --test-dir $(BUILD) --output-on-failure

clean:
	rm -rf .cache Testing build

watch: init
	@find src/ test/ | entr -s "make build"
