/* made by EzioChiu.
 */

@protocol HUQuickControlControllableView <HUQuickControlPresentableView>

@required

- (id)initWithProfile:(HUQuickControlViewProfile *)arg1;
- (HUQuickControlViewProfile *)profile;
- (void)setProfile:(HUQuickControlViewProfile *)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@optional

- (id)secondaryValue;
- (void)setSecondaryValue:(id)arg1;

@end
