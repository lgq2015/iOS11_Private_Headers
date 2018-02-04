/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInBedDetection : NSObject {
    double  _confidence;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property double confidence;
@property (retain) NSDate *endDate;
@property (retain) NSDate *startDate;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (void).cxx_destruct;
- (double)confidence;
- (double)duration;
- (id)endDate;
- (void)setConfidence:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)_mt_dateInterval;

@end
