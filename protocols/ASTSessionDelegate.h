/* made by EzioChiu.
 */

@protocol ASTSessionDelegate <NSObject>

@required

- (void)session:(ASTSession *)arg1 cancelTest:(struct NSNumber { Class x1; }*)arg2;
- (void)session:(ASTSession *)arg1 didEndWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 profile:(ASTProfileResult *)arg2 filteredByComponents:(NSArray *)arg3;
- (void)session:(ASTSession *)arg1 startTest:(struct NSNumber { Class x1; }*)arg2 parameters:(NSDictionary *)arg3 testResult:(ASTTestResult *)arg4;

@optional

- (void)session:(ASTSession *)arg1 didCompleteTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didFinishSendingResultForTest:(struct NSNumber { Class x1; }*)arg2;
- (void)session:(ASTSession *)arg1 didPauseSendingResultForTest:(struct NSNumber { Class x1; }*)arg2 error:(NSError *)arg3;
- (void)session:(ASTSession *)arg1 didPauseWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 didResumeSendingResultForTest:(struct NSNumber { Class x1; }*)arg2;
- (void)session:(ASTSession *)arg1 didStartTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(void *)arg1 didUpdateSettings:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ASTSession *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteImage:(NSData *)arg2;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteProgress:(NSNumber *)arg2;
- (void)sessionDidCancelSuite:(ASTSession *)arg1;
- (void)sessionDidResume:(ASTSession *)arg1;
- (void)sessionDidStart:(ASTSession *)arg1;

@end
