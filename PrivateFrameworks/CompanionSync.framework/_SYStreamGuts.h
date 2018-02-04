/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYStreamGuts : NSObject {
    <NSStreamDelegate> * _delegate;
    NSError * _error;
    id /* block */  _handler;
    unsigned int  _port;
    NSMutableDictionary * _propertyStore;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoopSource { } * _runloopSource;
    unsigned long long  _status;
}

- (void).cxx_destruct;
- (void)createRunloopSourceForStream:(id)arg1;
- (void)dealloc;
- (void)postStreamEvent:(unsigned long long)arg1 forStream:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)storeProperty:(id)arg1 forKey:(id)arg2;

@end
