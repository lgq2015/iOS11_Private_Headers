/* made by EzioChiu.
 */

@protocol NFNdefTagSessionDelegate <NSObject>

@optional

- (void)ndefTagSession:(NFNdefTagSession *)arg1 didTagStateChange:(unsigned int)arg2;
- (void)ndefTagSessionDidEndUnexpectedly:(NFNdefTagSession *)arg1;

@end
