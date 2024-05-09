const getHello = require('../../src/utils/utils');

test('getHello returns expected string', () => {
  expect(getHello()).toBe("Hello, World!!");
});