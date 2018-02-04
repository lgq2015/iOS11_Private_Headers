/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFConnectableObservable : MFObservable <MFConnectableObservable> {
    MFCancelationToken * _cancelable;
    bool  _connected;
    NSLock * _lock;
    <MFObservable> * _observable;
    NSMapTable * _observersToCancelable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)connect;
- (void)dealloc;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end
