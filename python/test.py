import unittest

import f

class testFunctionF(unittest.TestCase):
	def testEmptySet(self):
		self.assertEqual(f.F({}),0)

	def testOneElementSet(self):
		self.assertEqual(f.F({6}),2)

	def testSimpleSet(self):
		self.assertEqual(f.F({0,1}),3)
		self.assertEqual(f.F({1,2}),4)
		self.assertEqual(f.F({3,4}),6)
		self.assertEqual(f.F({3, 5, 8, 9}), 20)

	def testUncorrectSet(self):
		self.assertEqual(f.F({'E'}),-1)
		self.assertEqual(f.F({1,"hello"}),-1)
		self.assertEqual(f.F({'E',9}),-1)
		self.assertEqual(f.F({-2}),-1)
		self.assertEqual(f.F({0.5,-6}),-1)


if __name__ == '__main__':
    unittest.main()