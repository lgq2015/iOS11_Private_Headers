/* made by EzioChiu.
 */

@protocol OIProgressiveReaderDelegate

@optional

- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;

@end