/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADIdleChangeTrackingCleanupInfo : NSObject {
    double  _languishPeriod;
    int  _numberOfChanges;
}

@property (nonatomic) double languishPeriod;
@property (nonatomic) int numberOfChanges;

+ (id)serverIdleChangeTrackingCleanupInfo;

- (id)description;
- (id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInfo:(id)arg1;
- (double)languishPeriod;
- (int)numberOfChanges;
- (void)setLanguishPeriod:(double)arg1;
- (void)setNumberOfChanges:(int)arg1;

@end
