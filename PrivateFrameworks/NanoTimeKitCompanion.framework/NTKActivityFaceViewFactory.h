/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityFaceViewFactory : NSObject <NTKComplicationTimelineDelegate, NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber> {
    NTKUtilityComplicationFactory * _complicationFactory;
    long long  _dataMode;
    <NTKActivityFaceViewFactoryDelegate> * _delegate;
    bool  _hasBeenLiveOrOnDeck;
    bool  _isHistoricalDataLoaded;
    bool  _isLoadingData;
    double  _lastWristRaiseTime;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    bool  _showsCanonicalContent;
    bool  _showsLockedContent;
    NSDate * _timeTravelDate;
    bool  _timeTravellingOutsideBounds;
    NTKActivityFaceTimeline * _timeline;
    bool  _wantsUpdateNowEntryModelNextLive;
    double  _wristRaiseTimoutDuration;
}

@property (nonatomic, retain) NTKUtilityComplicationFactory *complicationFactory;
@property (nonatomic, readonly) NTKWellnessEntryModel *currentEntryModel;
@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKActivityFaceViewFactoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBeenLiveOrOnDeck;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHistoricalDataLoaded;
@property (nonatomic) bool isLoadingData;
@property (nonatomic) bool showsCanonicalContent;
@property (nonatomic) bool showsLockedContent;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timeTravelDate;
@property (nonatomic, retain) NTKActivityFaceTimeline *timeline;

+ (void)_purgeGLContexts;
+ (id)prelaunchApplicationIdentifiers;
+ (void)prewarm;
+ (bool)userActiveEnergyIsCalories;
+ (id)userActiveEnergyUnit;

- (void).cxx_destruct;
- (id)_canonicalEntryModel;
- (id)_colorComplicationSlots;
- (id)_complicationSlots;
- (void)_configureComplicationFactory:(id)arg1;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (void)_extendRightWithEntryModel:(id)arg1;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_handleActiveEnergyUnitChange;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (void)_loadCurrentEntry;
- (void)_loadCurrentEntryForce:(bool)arg1;
- (void)_nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_resetWristRaiseAnimationTimeout;
- (void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_updateDimStateForCurrentTimeline;
- (void)_updateRingsForCurrentEntryModel;
- (void)_updateRingsForCurrentEntryModelAnimated:(bool)arg1;
- (void)_updateTimeTravelBoundaries;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)arg1;
- (id)complicationFactory;
- (id)currentEntryModel;
- (long long)dataMode;
- (void)dealloc;
- (id)debugStringForEntry:(id)arg1;
- (id)delegate;
- (void)endScrubbing;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (double)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (unsigned long long)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (long long)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned long long)arg2 slot:(id)arg3;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(long long)arg3 slot:(id)arg4;
- (bool)hasBeenLiveOrOnDeck;
- (id)init;
- (bool)isHistoricalDataLoaded;
- (bool)isLoadingData;
- (void)launchActivityApp;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)scrubToDate:(id)arg1;
- (void)setComplicationFactory:(id)arg1;
- (void)setDataMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasBeenLiveOrOnDeck:(bool)arg1;
- (void)setIsHistoricalDataLoaded:(bool)arg1;
- (void)setIsLoadingData:(bool)arg1;
- (void)setShowsCanonicalContent:(bool)arg1;
- (void)setShowsLockedContent:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1;
- (void)setTimeline:(id)arg1;
- (bool)shouldPerformFromZeroWristRaise;
- (bool)showsCanonicalContent;
- (bool)showsLockedContent;
- (void)startScrubbing;
- (id)timeTravelDate;
- (void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)timeline;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;
- (void)wellnessTimelineModelHistorcalDataLoaded:(bool)arg1;

@end
