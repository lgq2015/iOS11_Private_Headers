/* made by EzioChiu.
 */

@protocol SKUIRedeemIdTableViewCellDelegate <NSObject>

@required

- (void)redeemIdCell:(SKUIRedeemIdTableViewCell *)arg1 didChangeToText:(NSString *)arg2;
- (void)redeemIdCell:(SKUIRedeemIdTableViewCell *)arg1 didReturnWithText:(NSString *)arg2;

@end
