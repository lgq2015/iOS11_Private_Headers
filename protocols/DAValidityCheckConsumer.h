/* made by EzioChiu.
 */

@protocol DAValidityCheckConsumer <NSObject>

@required

- (void)account:(DAAccount *)arg1 isValid:(bool)arg2 validationError:(NSError *)arg3;

@end
