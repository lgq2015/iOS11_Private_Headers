/* made by EzioChiu.
 */

@protocol CVMLWarningRecorder <NSObject>

@required

- (void)recordWarning:(NSString *)arg1 value:(id)arg2;
- (id)valueForWarning:(NSString *)arg1;

@end