/* made by EzioChiu.
 */

@protocol FCCommandDelegate <NSObject>

@required

- (void)command:(FCCommand *)arg1 didFinishWithStatus:(unsigned long long)arg2;

@end
