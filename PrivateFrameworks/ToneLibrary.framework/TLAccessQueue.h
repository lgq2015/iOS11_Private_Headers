/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAccessQueue : NSObject {
    NSString * _label;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _threadLocalStorageKey;
}

@property (nonatomic, readonly) NSString *label;

- (void).cxx_destruct;
- (void)_performSynchronousBlockInSerialQueue:(id /* block */)arg1;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(bool)arg2;
- (id)label;
- (void)performAsynchronousBlock:(id /* block */)arg1;
- (void)performSynchronousBlock:(id /* block */)arg1;

@end
