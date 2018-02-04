/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAnnouncementStrategyGreedy : NSObject <MNAnnoucementStrategy> {
    double  _distance;
    NSArray * _events;
    MNGuidanceEventManager * _manager;
    MNAnnouncementPlanEvent * _previousEvent;
    double  _speed;
    double  _timeSinceLastEvent;
}

@property (nonatomic) double distance;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic) MNGuidanceEventManager *manager;
@property (nonatomic, retain) MNAnnouncementPlanEvent *previousEvent;
@property (nonatomic) double speed;
@property (nonatomic) double timeSinceLastEvent;

- (void).cxx_destruct;
- (double)distance;
- (id)events;
- (id)initWithManager:(id)arg1;
- (id)manager;
- (id)nextEvent;
- (id)plan;
- (void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5;
- (id)previousEvent;
- (void)setDistance:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPreviousEvent:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimeSinceLastEvent:(double)arg1;
- (double)speed;
- (double)timeSinceLastEvent;

@end
