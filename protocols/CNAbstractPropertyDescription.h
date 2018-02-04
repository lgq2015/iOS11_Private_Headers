/* made by EzioChiu.
 */

@protocol CNAbstractPropertyDescription <NSObject>

@required

- (void)decodeUsingCoder:(NSCoder *)arg1 contact:(CNContact *)arg2;
- (void)encodeUsingCoder:(NSCoder *)arg1 contact:(CNContact *)arg2;
- (id)init;
- (bool)isEqualForContact:(CNContact *)arg1 other:(CNContact *)arg2;

@end
