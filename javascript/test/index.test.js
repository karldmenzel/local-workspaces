const main = require('../src/index');

test('prints "Hello, World!" to the console', () => {
  console.log = jest.fn();
  main();
  expect(console.log).toHaveBeenCalledWith("Hello, World!!");
});