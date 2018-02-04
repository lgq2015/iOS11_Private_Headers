/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationInternal : NSObject {
    <MKAnnotationPrivate> * _annotation;
    <MKAnnotationPrivate> * annotation;
    double  course;
    CLLocation * fixedLocation;
    CLHeading * heading;
    CLLocation * predictedLocation;
    NSString * subtitle;
    double  timestamp;
    NSString * title;
    bool  updating;
}

@property (nonatomic, readonly) <MKAnnotationPrivate> *annotation;
@property (nonatomic) double course;
@property (nonatomic, retain) CLLocation *fixedLocation;
@property (nonatomic, retain) CLHeading *heading;
@property (nonatomic, retain) CLLocation *predictedLocation;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSString *title;
@property (getter=isUpdating, nonatomic) bool updating;

- (void).cxx_destruct;
- (id)annotation;
- (double)course;
- (id)fixedLocation;
- (id)heading;
- (bool)isUpdating;
- (id)predictedLocation;
- (void)setCourse:(double)arg1;
- (void)setFixedLocation:(id)arg1;
- (void)setHeading:(id)arg1;
- (void)setPredictedLocation:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (id)subtitle;
- (double)timestamp;
- (id)title;

@end
