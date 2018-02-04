/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROConnection : NSObject {
    id  _delegate;
    int  _handlerType;
    unsigned int  _identifier;
    struct __CFRunLoopSource { } * _invalidationSource;
    bool  _isConnectionStarted;
    unsigned int  _pingPort;
    struct __CFRunLoopSource { } * _pingSource;
}

+ (void)_addConnectionToRunLoop:(id)arg1;
+ (void)_configServer;
+ (void)_createConnectionRunLoop;
+ (void)_unconfigServerAndRetry:(bool)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_ping;
- (void)_startConnection;
- (void)_stopConnection;
- (id)handlerArrayValueForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1 withObject:(id)arg2;
- (id)initWithHandlerType:(int)arg1 delegate:(id)arg2;
- (void)invalidate;
- (int)performHandlerActionForKey:(int)arg1;
- (int)registerHandlerCallbackForKey:(int)arg1;
- (int)sendEvent:(id)arg1;
- (int)setHandlerValue:(id)arg1 forKey:(int)arg2;

@end
