/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIEventActionHandler : NSObject

+ (id)sharedInstance;

- (id)_intentForAction:(id)arg1 onEvent:(id)arg2;
- (void)donateInteractionForAction:(id)arg1 onEvent:(id)arg2;
- (void)handleEventCreation:(id)arg1;
- (void)handleEventDeletion:(id)arg1;
- (void)handleEventUpdate:(id)arg1;
- (void)prepareForEventUpdate:(id)arg1;
- (void)removeInteractionsForCalendar:(id)arg1;

@end