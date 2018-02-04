/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIBannerStringGenerator : NSObject

+ (id)_addButtonTextForContacts:(id)arg1;
+ (id)_addButtonTextForEvents:(id)arg1;
+ (bool)_areEventsInSameDay:(id)arg1;
+ (id)_eventStore;
+ (id)_formattedStartDateForEvent:(id)arg1;
+ (id)_formattedStartTimeForEvent:(id)arg1;
+ (id)_subtitleForContacts:(id)arg1;
+ (id)_subtitleForEvents:(id)arg1;
+ (id)_subtitleForMixedTypesForOrderedSuggestions:(id)arg1;
+ (id)_subtitleForMultipleEvents:(id)arg1;
+ (id)_subtitleForMultipleRealtimeContacts:(id)arg1;
+ (id)_subtitleForRealtimeContact:(id)arg1;
+ (id)_subtitleForSingleEvent:(id)arg1;
+ (id)_subtitleForTwoEvents:(id)arg1;
+ (id)_timeZoneForEvent:(id)arg1;
+ (id)_titleForContacts:(id)arg1;
+ (id)_titleForEvents:(id)arg1;
+ (id)_titleForMixedTypes;
+ (id)bannerActionButtonTextForOrderedSuggestions:(id)arg1;
+ (id)bannerSubtitleForOrderedSuggestions:(id)arg1;
+ (id)bannerTitleForOrderedSuggestions:(id)arg1;
+ (id)descriptionTextForRealtimeContact:(id)arg1;
+ (id)descriptionTextForRealtimeEvent:(id)arg1;
+ (id)eventKitEventForRealtimeEvent:(id)arg1;
+ (id)eventsForRealtimeEvents:(id)arg1;
+ (bool)isRealtimeContactNew:(id)arg1;
+ (bool)isRealtimeEventExisting:(id)arg1;
+ (id)textAttributesForOrderedSuggestions:(id)arg1;
+ (id)textAttributesForRealtimeEvent:(id)arg1;

@end
