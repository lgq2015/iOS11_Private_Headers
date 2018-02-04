/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    bool  _enableMapsSuggestionsEntryTypeAppConnection;
    bool  _enableMapsSuggestionsEntryTypeCalendarEvent;
    bool  _enableMapsSuggestionsEntryTypeCarPlayLowEnergy;
    bool  _enableMapsSuggestionsEntryTypeCarRental;
    bool  _enableMapsSuggestionsEntryTypeFavoritePlace;
    bool  _enableMapsSuggestionsEntryTypeFrequentLocation;
    bool  _enableMapsSuggestionsEntryTypeHome;
    bool  _enableMapsSuggestionsEntryTypeHotel;
    bool  _enableMapsSuggestionsEntryTypeParkedCar;
    bool  _enableMapsSuggestionsEntryTypeRecentHistory;
    bool  _enableMapsSuggestionsEntryTypeRestaurantReservation;
    bool  _enableMapsSuggestionsEntryTypeResumeRoute;
    bool  _enableMapsSuggestionsEntryTypeRidesharing;
    bool  _enableMapsSuggestionsEntryTypeTicketedEvent;
    bool  _enableMapsSuggestionsEntryTypeTravelFlight;
    bool  _enableMapsSuggestionsEntryTypeUnknown;
    bool  _enableMapsSuggestionsEntryTypeWork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (id)init;
- (bool)shouldKeepEntry:(id)arg1;

@end