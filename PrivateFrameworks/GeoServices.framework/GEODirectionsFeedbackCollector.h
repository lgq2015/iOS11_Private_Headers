/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedbackCollector : NSObject {
    GEODirectionsFeedback * _currentDirectionsFeedback;
    double  _currentDirectionsModeStartTime;
    GEODirectionsFeedbackLogMessage * _currentFeedbackLogMessage;
    NSMutableArray * _navigationModes;
    NSMutableSet * _routeIDs;
}

@property (nonatomic, retain) GEODirectionsFeedback *currentDirectionsFeedback;
@property (nonatomic, retain) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage;
@property (nonatomic, retain) NSMutableSet *routeIDs;

- (void).cxx_destruct;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)addGuidanceEventFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(bool)arg4;
- (void)addStepFeedback:(id)arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)changeNavigationType:(int)arg1;
- (id)currentDirectionsFeedback;
- (id)currentFeedbackLogMessage;
- (void)dealloc;
- (id)description;
- (void)endFeedbackSessionWithTracePath:(id)arg1;
- (void)reset;
- (id)routeIDs;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; }*)arg1;
- (void)setCurrentDirectionsFeedback:(id)arg1;
- (void)setCurrentFeedbackLogMessage:(id)arg1;
- (void)setFinalLocation:(id)arg1 asArrival:(bool)arg2;
- (void)setRouteIDs:(id)arg1;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2;

@end
