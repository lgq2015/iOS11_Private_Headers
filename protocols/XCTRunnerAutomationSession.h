/* made by EzioChiu.
 */

@protocol XCTRunnerAutomationSession <NSObject>

@required

- (XCTElementQueryResults *)matchesForQuery:(XCTElementQuery *)arg1 error:(id*)arg2;

@end
