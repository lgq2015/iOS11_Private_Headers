/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification {
    NSString * _originAppName;
    SGEvent * _suggestedEvent;
}

@property (nonatomic, readonly) NSString *originAppName;
@property (nonatomic, readonly) SGEvent *suggestedEvent;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)_originBundleIdentifiersPermittedForAllNotifications;
+ (id)_queue;

- (void).cxx_destruct;
- (Class)_SGSuggestionsServiceClass;
- (bool)hiddenFromNotificationCenter;
- (id)originAppName;
- (id)suggestedEvent;
- (void)updateSuggestedEventWithEventStore:(id)arg1;
- (bool)whitelistedForAllNotifications;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;

@end
