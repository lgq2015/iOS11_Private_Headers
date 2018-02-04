/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailAlarmCell : EKEventDetailTwoValueCell

+ (id)_alertLocalizedString;

- (id)initWithEvent:(id)arg1 editable:(bool)arg2 platformStyle:(int)arg3;
- (bool)isEditable;
- (void)setAlarms:(id)arg1;
- (bool)update;

@end
