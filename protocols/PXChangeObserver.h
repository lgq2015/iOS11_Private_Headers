/* made by EzioChiu.
 */

@protocol PXChangeObserver <NSObject>

@required

- (void)observable:(PXObservable *)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
