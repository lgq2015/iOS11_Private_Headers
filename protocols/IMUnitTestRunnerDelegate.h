/* made by EzioChiu.
 */

@protocol IMUnitTestRunnerDelegate <NSObject>

@optional

- (void)unitTestRunner:(IMUnitTestRunner *)arg1 didReceiveOutput:(NSString *)arg2;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 didRunTestsInBundleAtPath:(NSString *)arg2 results:(id <IMUnitTestRunnerResult>)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 runningTestsInBundleAtPath:(NSString *)arg2 failedWithError:(NSError *)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testCase:(NSString *)arg2 didFailWithDescription:(NSString *)arg3 inFile:(NSString *)arg4 atLine:(unsigned long long)arg5;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testCaseDidFinish:(NSString *)arg2 withResult:(id <IMUnitTestRunnerResult>)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testCaseWillStart:(NSString *)arg2;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testSuite:(NSString *)arg2 didFailWithDescription:(NSString *)arg3 inFile:(NSString *)arg4 atLine:(unsigned long long)arg5;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testSuiteDidFinish:(NSString *)arg2 withResult:(id <IMUnitTestRunnerResult>)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testSuiteWillStart:(NSString *)arg2;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 willRunTestsInBundleAtPath:(NSString *)arg2;
- (NSString *)unitTestRunnerGetPathToXCTestFramework:(IMUnitTestRunner *)arg1;

@end
