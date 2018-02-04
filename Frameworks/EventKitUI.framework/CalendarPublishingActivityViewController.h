/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarPublishingActivityViewController : UIActivityViewController {
    <CalendarPublishingActivityDelegate> * _activityDelegate;
}

@property <CalendarPublishingActivityDelegate> *activityDelegate;

- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1;
- (bool)_shouldShowSystemActivityType:(id)arg1;
- (id)activityDelegate;
- (void)setActivityDelegate:(id)arg1;

@end