/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFReplayObservable : MFObservable {
    NSLock * _lock;
    MFObservable * _observable;
    MFQueue * _queue;
}

- (void)_enqueue:(id)arg1;
- (void)dealloc;
- (id)initWithObservable:(id)arg1 count:(unsigned long long)arg2;
- (id)subscribe:(id)arg1;

@end
