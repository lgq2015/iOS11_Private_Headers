/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {
    UITableViewHeaderFooterView * _footerView;
    bool  _published;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool published;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_publishChanged:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)calendarTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)footerHeightForSection;
- (id)footerView;
- (id)footerViewForSection;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (unsigned long long)numberOfSubitems;
- (id)pubishURL;
- (bool)published;
- (void)reset;
- (void)setPublished:(bool)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

@end
