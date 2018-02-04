/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceTypeTableViewCell : EKUITableViewCell {
    bool  _checked;
}

@property (getter=isChecked, nonatomic) bool checked;

- (bool)isChecked;
- (void)setChecked:(bool)arg1;

@end
