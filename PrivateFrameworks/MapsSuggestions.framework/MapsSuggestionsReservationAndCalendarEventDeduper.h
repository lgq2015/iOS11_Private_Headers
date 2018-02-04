/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsReservationAndCalendarEventDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;

@end
