/* made by EzioChiu.
 */

@protocol CAMChangeObserver <NSObject>

@required

- (void)observable:(CAMObservable *)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3;

@end
