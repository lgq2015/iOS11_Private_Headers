/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    long long  _availability;
    unsigned long long  _availabilityIndexInChoices;
    UITableViewCell * _cell;
    NSArray * _choices;
    unsigned long long  _supportedAvailabilities;
}

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editItemViewControllerShouldShowDetachAlert;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
