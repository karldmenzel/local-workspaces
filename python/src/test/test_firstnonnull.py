import workspace
from workspace.mydataobject import MyDataObject
from workspace.firstnonnull import firstNonNull

import unittest

class TestFirstNonNull(unittest.TestCase):
	
		def test_firstNonNull_first(self):
			d1 = MyDataObject('a')
			d2 = MyDataObject('b')
			
			result = firstNonNull(d1, d2)
			self.assertEqual(result, d1)
			self.assertEqual(result.val, 'a')
		
		def test_firstNonNull_second(self):
			d2 = MyDataObject('b')
			
			result = firstNonNull(None, d2)
			self.assertEqual(result, d2)
			self.assertEqual(result.val, 'b')
		
		def test_firstNonNull_error(self):
			with self.assertRaises(TypeError):
				firstNonNull(None, None)

if __name__ == '__main__':
    unittest.main()