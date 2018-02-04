/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROScriptClient : NSObject {
    NSObject<OS_dispatch_queue> * __scriptDispatchQueue;
    SCROConnection * _connection;
    bool  _isReady;
    NSLock * _lock;
    SCRCTargetSelectorTimer * _timer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_scriptDispatchQueue;

+ (id)sharedClient;

- (void).cxx_destruct;
- (bool)_isReady;
- (void)_killConnection;
- (id)_lazyConnection;
- (id)_scriptDispatchQueue;
- (void)dealloc;
- (void)handleCallback:(id)arg1;
- (id)init;
- (bool)runScriptFile:(id)arg1;
- (void)set_scriptDispatchQueue:(id)arg1;

@end
