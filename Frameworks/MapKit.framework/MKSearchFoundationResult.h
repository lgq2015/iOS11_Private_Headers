/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {
    SFActionItem * _action;
    id  _attributionObserver;
    NSBundle * _bundle;
    NSString * _bundleID;
    NSArray * _descriptions;
    MKSearchFoundationBusinessHoursAndDistanceRichText * _fourthLineDisplayedText;
    NSMutableArray * _fourthLineText;
    unsigned long long  _iconSize;
    MKLocationManager * _locationManager;
    MKMapItem * _mapItem;
    NSData * _mapsData;
    unsigned long long  _mksfResultType;
    bool  _optionSmallerScreen;
    MKSearchFoundationRichText * _secondLineDisplayedText;
    MKSearchFoundationRichText * _thirdLineDisplayedText;
    SFImage * _thumbnail;
    SFText * _title;
}

@property (nonatomic, retain) id attributionObserver;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MKSearchFoundationBusinessHoursAndDistanceRichText *fourthLineDisplayedText;
@property (nonatomic, retain) NSMutableArray *fourthLineText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic, retain) MKLocationManager *locationManager;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic) unsigned long long mksfResultType;
@property (nonatomic) bool optionSmallerScreen;
@property (nonatomic, retain) MKSearchFoundationRichText *secondLineDisplayedText;
@property (readonly) Class superclass;
@property (nonatomic, retain) MKSearchFoundationRichText *thirdLineDisplayedText;

+ (id)styledStringFromStringArray:(id)arg1;

- (void).cxx_destruct;
- (id)_brandURL;
- (id)_businessAddress;
- (id)_businessCategory;
- (id)_businessHoursAndDistance;
- (id)_businessPriceAndReviewText;
- (void)_commonInit;
- (id)_defaultRichTextItems;
- (bool)_isSmallerScreen;
- (id)_localizedMessageBusinessHours;
- (void)_locationApprovalDidChange;
- (id)action;
- (id)attributionObserver;
- (id)bundle;
- (id)bundleID;
- (void)dealloc;
- (id)descriptions;
- (id)fourthLineDisplayedText;
- (id)fourthLineText;
- (unsigned long long)iconSize;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)locationManager;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItem;
- (id)mapItemFromFavoritesData:(id)arg1;
- (id)mapsData;
- (unsigned long long)mksfResultType;
- (bool)optionSmallerScreen;
- (id)secondLineDisplayedText;
- (void)setAction:(id)arg1;
- (void)setAttributionObserver:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFourthLineDisplayedText:(id)arg1;
- (void)setFourthLineText:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMksfResultType:(unsigned long long)arg1;
- (void)setOptionSmallerScreen:(bool)arg1;
- (void)setSecondLineDisplayedText:(id)arg1;
- (void)setThirdLineDisplayedText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)thirdLineDisplayedText;
- (id)thumbnail;
- (id)title;

@end