/* made by EzioChiu.
 */

@protocol STTextTangierRepAccessibilityDataSource <NSObject>

@required

- (NSSet *)accessibilityCustomRotorMembershipForRep:(TSDRep *)arg1;
- (bool)accessibilityRepIsSelectable:(TSDRep *)arg1;

@end
