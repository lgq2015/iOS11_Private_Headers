/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventFactory : NSObject {
    NSMutableDictionary * _appStateTransitionData;
    NSMutableDictionary * _appStateTransitionTimingData;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)_bucketValueForTimeDelta:(double)arg1;
- (int)_bucketValueForTravelTime:(double)arg1;
- (id)bookedTableWithBookedUsingMaps:(bool)arg1 cancelled:(bool)arg2 viewedInProactiveTray:(bool)arg3 tappedProactiveTrayItem:(bool)arg4 viewedInPlacecard:(bool)arg5 viewedDetailsInPlacecard:(bool)arg6 isAsync:(bool)arg7 bookedAppId:(id)arg8 muid:(unsigned long long)arg9 called:(bool)arg10 routed:(bool)arg11 tappedChangeReservation:(bool)arg12 tappedCancelReservation:(bool)arg13;
- (void)clearStateTimingData;
- (id)init;
- (id)logMsgEventForBatchTrafficProbes:(id)arg1;
- (id)logMsgEventForCacheHitWithCacheType:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (id)logMsgEventForClientACSuggestionsWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 selectedIndex:(int)arg4;
- (id)logMsgEventForCommuteDoomWindow:(id)arg1 exitTime:(id)arg2 destinations:(id)arg3 reason:(long long)arg4 networkRequests:(unsigned long long)arg5 alerts:(unsigned long long)arg6;
- (id)logMsgEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(bool)arg3 navigationAudioFeedback:(struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })arg4 durationOfTrip:(double)arg5 durationsInNavigationModes:(id)arg6;
- (id)logMsgEventForFullNavTraceWithData:(id)arg1;
- (id)logMsgEventForGenericAppErrorDomain:(id)arg1 appErrorCode:(long long)arg2;
- (id)logMsgEventForListInteractionSessionOfType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3;
- (id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logCollectionRequest:(id)arg4;
- (id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logMessageType:(int)arg4;
- (id)logMsgEventForMapLaunch:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(bool)arg3 ttlEventTime:(id)arg4;
- (id)logMsgEventForNetworkService:(int)arg1 requestAppId:(id)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestDataSize:(int)arg5 responseDataSize:(int)arg6 responseTime:(int)arg7 httpResponseStatusCode:(int)arg8 remoteAddressAndPort:(id)arg9;
- (id)logMsgEventForPlaceDataCacheFromAppWithID:(id)arg1;
- (id)logMsgEventForProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4;
- (id)logMsgEventForRealtimeTrafficProbes:(id)arg1;
- (id)logMsgEventForRefineSearchSessionOfType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4;
- (id)logMsgEventForRidebookedWithSessionId:(id)arg1 statusIssue:(int)arg2 bookedUsingMaps:(bool)arg3 cancelled:(bool)arg4 contactedDriver:(bool)arg5 viewedInProactiveTray:(bool)arg6 tappedProactiveTrayItem:(bool)arg7 viewedDetails:(bool)arg8 invalidVehicleLocation:(bool)arg9 missingVehicleLocation:(bool)arg10 rideAppId:(id)arg11 rideAppVersion:(id)arg12 numberOfAppsInstalled:(unsigned long long)arg13 enabled:(unsigned long long)arg14 intentResponseFailures:(id)arg15;
- (id)logMsgEventForSessionId:(id)arg1 statusIssue:(int)arg2 ridebookingEndState:(int)arg3 endView:(int)arg4 rideAppId:(id)arg5 rideAppVersion:(id)arg6 originBlurred:(id)arg7 destinationBlurred:(id)arg8 exploredOtherOptions:(bool)arg9 rideType:(id)arg10 distanceToPickupInMeters:(double)arg11 paymentIsApplePay:(bool)arg12 numberOfAvailableExtensions:(unsigned long long)arg13 switchedApp:(bool)arg14 comparedRideOptions:(bool)arg15 showedSurgePricingAlert:(bool)arg16 durationOfSessionInSeconds:(double)arg17 installedApp:(bool)arg18 timestamp:(long long)arg19 unavailable:(bool)arg20 movedPickupLocation:(bool)arg21 errorMessages:(id)arg22 numberOfAppsInstalled:(unsigned long long)arg23 enabled:(unsigned long long)arg24 intentResponseFailures:(id)arg25;
- (id)logMsgEventForStaleResources:(id)arg1 userSessionSnapshot:(id)arg2;
- (id)logMsgEventForStateTransition:(id)arg1 generateOnlyIfStateChanged:(bool)arg2 userSessionSnapshot:(id)arg3;
- (id)logMsgEventForTablebookedSessionWithSessionID:(id)arg1 bookedTables:(id)arg2;
- (id)logMsgEventForTablebookingWithSessionID:(id)arg1 endState:(int)arg2 endView:(int)arg3 bookTableAppId:(id)arg4 muid:(unsigned long long)arg5 blurredReservationTimestamp:(long long)arg6 blurredBookingTimestamp:(long long)arg7 durationOfSessionInSeconds:(double)arg8 installNeeded:(bool)arg9 installNeededTappedAppId:(id)arg10 installCompleted:(bool)arg11 tableSize:(unsigned int)arg12 addedSpecialRequest:(bool)arg13 swipedAvailableTimes:(bool)arg14 tappedDatePicker:(bool)arg15 errorMessages:(id)arg16;
- (id)logMsgEventForTelemetricWithEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3;
- (id)logMsgEventForTileSetState:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (id)logMsgEventForTileUsageWithRequestAppId:(id)arg1 andTileUsageInfo:(id)arg2;
- (id)logMsgEventForTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (id)logMsgEventForTimeToLeaveIntialTravelTime:(double)arg1;
- (id)logMsgEventForTransitAppLaunchWithBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3 userSessionSnapshot:(id)arg4;
- (id)logMsgEventForUserAction:(id)arg1 eventValue:(id)arg2 eventTarget:(int)arg3;
- (id)logMsgsEventForMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(bool)arg4 startDate:(id)arg5 forDuration:(double)arg6;

@end
