/* made by EzioChiu.
 */

@protocol TSWPStorageObserver

@required

- (void)storage:(TSWPStorage *)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;

@end
