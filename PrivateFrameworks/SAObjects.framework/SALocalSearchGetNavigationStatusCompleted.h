/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SABackgroundContextObject, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SALocalSearchMapItem *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SALocalSearchAceNavigationEta *nextManeuverEta;
@property (nonatomic, retain) SALocalSearchAceNavigationEta *overallEta;
@property (nonatomic, retain) SALocalSearchMapItemList *predictedDestinations;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SALocalSearchRoute *route;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trafficIncidentAlertType;
@property (nonatomic, copy) NSString *volume;

+ (id)getNavigationStatusCompleted;
+ (id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)destination;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nextManeuverEta;
- (id)overallEta;
- (id)predictedDestinations;
- (bool)requiresResponse;
- (id)route;
- (void)setDestination:(id)arg1;
- (void)setNextManeuverEta:(id)arg1;
- (void)setOverallEta:(id)arg1;
- (void)setPredictedDestinations:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setTrafficIncidentAlertType:(id)arg1;
- (void)setVolume:(id)arg1;
- (id)trafficIncidentAlertType;
- (id)volume;

@end
