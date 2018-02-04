/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeesEditItem : EKEventEditItem {
    NSOperationQueue * _availabilityQueue;
    long long  _numberOfConflicts;
    NSString * _searchAccountID;
    EKParticipant * _selfOrganizer;
}

+ (id)_noneInviteesLocalizedString;

- (void).cxx_destruct;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)forceRefreshInviteesItemOnSave;
- (bool)forceRefreshStartAndEndDatesOnSave;
- (bool)forceTableReloadOnSave;
- (id)init;
- (id)injectableViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)refreshFromCalendarItemAndStore;
- (bool)requiresReconfigurationOnSave;
- (bool)shouldAppearWithVisibility:(int)arg1;

@end
