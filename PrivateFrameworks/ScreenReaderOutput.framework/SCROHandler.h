/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROHandler : NSObject <SCROHandlerProtocol> {
    id  _callbackDelegate;
    NSLock * _lock;
    bool  isInvalid;
}

@property (nonatomic) id callbackDelegate;

- (void).cxx_destruct;
- (id)callbackDelegate;
- (int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(bool)arg3;
- (int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(bool)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(bool)arg2;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(bool)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(bool)arg3;
- (id)init;
- (void)invalidate;
- (void)lock;
- (void)setCallbackDelegate:(id)arg1;
- (void)unlock;

@end
