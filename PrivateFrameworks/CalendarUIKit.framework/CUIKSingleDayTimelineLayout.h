/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKSingleDayTimelineLayout : NSObject {
    NSCalendar * _calendar;
    NSMutableArray * _collidingOccurrences;
    <CUIKSingleDayTimelineViewItem> * _currentOccurrence;
    unsigned long long  _currentOccurrenceIndex;
    NSDate * _endOfDay;
    double  _endOfDayAbsoluteTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    <CUIKSingleDayTimelineGeometryDelegate> * _geometryDelegate;
    NSMutableArray * _occurrenceBuckets;
    NSArray * _occurrences;
    NSMutableArray * _partitions;
    <CUIKSingleDayTimelineLayoutScreenUtils> * _screenUtilsDelegate;
    NSDate * _startOfDay;
    double  _startOfDayAbsoluteTime;
}

- (void).cxx_destruct;
- (double)_adjustedEndTimeForOccurrence:(id)arg1;
- (double)_adjustedStartTimeForOccurrence:(id)arg1;
- (void)_calculateVerticalFrameAspectsForOccurrence:(id)arg1;
- (void)_capVisibleTextForBucket:(id)arg1;
- (double)_combinedWidthOfPartitions;
- (double)_effectiveEndTimeForOccurrence:(id)arg1;
- (double)_endOfCollisionZoneForY:(double)arg1 occurrence:(id)arg2;
- (unsigned long long)_enumerationOptions;
- (void)_findCollidingOccurrences;
- (void)_generateNewPartitions;
- (void)_initializeFirstGridStripe;
- (bool)_inputIsInvalid;
- (void)_mergePartitions;
- (void)_popOccurrencesInPartition:(id)arg1 endingBeforeTime:(double)arg2;
- (void)_putCollidingOccurrencesIntoBuckets;
- (void)_reclaimSpaceFromStackedOccurrences;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2;
- (void)_stampOccurrenceFrames;
- (double)_topOfOccurrence:(id)arg1;
- (void)applyLayoutToOccurrences;
- (id)initWithOccurrences:(id)arg1 startOfDay:(id)arg2 endOfDay:(id)arg3 geometryDelegate:(id)arg4 screenUtilsDelegate:(id)arg5 calendar:(id)arg6;
- (bool)isRightToLeftLayout;

@end
