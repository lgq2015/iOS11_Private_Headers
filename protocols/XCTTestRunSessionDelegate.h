/* made by EzioChiu.
 */

@protocol XCTTestRunSessionDelegate <NSObject>

@required

- (void)testRunSession:(XCTTestRunSession *)arg1 initializationForUITestingDidFailWithError:(NSError *)arg2;
- (void)testRunSessionDidBeginExecutingTestPlan:(XCTTestRunSession *)arg1;
- (void)testRunSessionDidBeginInitializingForUITesting:(XCTTestRunSession *)arg1;
- (void)testRunSessionDidFinishExecutingTestPlan:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: XCTTestRunSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
