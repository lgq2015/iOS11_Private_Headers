/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STMapViewport : STSiriModelObject {
    double  _eastLongitude;
    double  _northLatitude;
    double  _southLatitude;
    double  _timeSinceViewportChanged;
    double  _timeSinceViewportEnteredForeground;
    NSArray * _viewportVertices;
    double  _westLongitude;
}

@property (nonatomic) double eastLongitude;
@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double timeSinceViewportChanged;
@property (nonatomic) double timeSinceViewportEnteredForeground;
@property (nonatomic, copy) NSArray *viewportVertices;
@property (nonatomic) double westLongitude;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (double)eastLongitude;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)northLatitude;
- (void)setEastLongitude:(double)arg1;
- (void)setNorthLatitude:(double)arg1;
- (void)setSouthLatitude:(double)arg1;
- (void)setTimeSinceViewportChanged:(double)arg1;
- (void)setTimeSinceViewportEnteredForeground:(double)arg1;
- (void)setViewportVertices:(id)arg1;
- (void)setWestLongitude:(double)arg1;
- (double)southLatitude;
- (double)timeSinceViewportChanged;
- (double)timeSinceViewportEnteredForeground;
- (id)viewportVertices;
- (double)westLongitude;

@end
