/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKSingleDayTimelineLayoutPartition : NSObject {
    double  _endBoundary;
    double  _initialStartBoundary;
    NSMutableArray * _stackOfOccurrences;
    double  _topBoundaryTime;
}

@property (nonatomic) double endBoundary;
@property (nonatomic, readonly) double freeSpaceStartBoundary;
@property (nonatomic, readonly) double freeSpaceWidth;
@property (nonatomic) double initialStartBoundary;
@property (nonatomic, readonly) NSArray *stackedOccurrences;
@property (nonatomic) double topBoundaryTime;
@property (nonatomic, readonly) double totalWidth;

- (void).cxx_destruct;
- (id)description;
- (double)endBoundary;
- (double)freeSpaceStartBoundary;
- (double)freeSpaceWidth;
- (id)init;
- (double)initialStartBoundary;
- (id)peekOccurrence;
- (void)popOccurrence;
- (void)pushOccurrence:(id)arg1;
- (void)setEndBoundary:(double)arg1;
- (void)setInitialStartBoundary:(double)arg1;
- (void)setTopBoundaryTime:(double)arg1;
- (id)stackedOccurrences;
- (double)topBoundaryTime;
- (double)totalWidth;

@end