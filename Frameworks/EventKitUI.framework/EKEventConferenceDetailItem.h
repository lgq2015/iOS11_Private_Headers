/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventConferenceDetailItem : EKEventDetailItem {
    NSString * _appName;
    UITableViewCell * _cell;
}

- (void).cxx_destruct;
- (void)_tap;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
