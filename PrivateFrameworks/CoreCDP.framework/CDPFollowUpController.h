/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection * _daemonConn;
}

- (void).cxx_destruct;
- (bool)clearFollowUpWithContext:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)postFollowUpWithContext:(id)arg1 error:(id*)arg2;

@end
