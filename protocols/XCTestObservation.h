/* made by EzioChiu.
 */

@protocol XCTestObservation <NSObject>

@optional

- (void)testBundleDidFinish:(NSBundle *)arg1;
- (void)testBundleWillStart:(NSBundle *)arg1;
- (void)testCase:(XCTestCase *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidFinish:(XCTestCase *)arg1;
- (void)testCaseWillStart:(XCTestCase *)arg1;
- (void)testSuite:(XCTestSuite *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidFinish:(XCTestSuite *)arg1;
- (void)testSuiteWillStart:(XCTestSuite *)arg1;

@end
