/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentAnalyzerQueue : NSObject {
    double  _firstPingSinceReset;
    double  _lastPingSinceReset;
    double  _maximumInterval;
    double  _minimumInterval;
    NSMutableSet * _momentListIdsToProcess;
}

@property (nonatomic, readonly) bool hasWork;
@property (nonatomic) double maximumInterval;
@property (nonatomic) double minimumInterval;
@property (nonatomic, readonly) bool shouldProcessWork;

- (void)dealloc;
- (id)dequeueMomentListIdsForProcessing;
- (void)enqueueMomentListIds:(id)arg1;
- (bool)hasWork;
- (id)init;
- (double)maximumInterval;
- (double)minimumInterval;
- (void)setMaximumInterval:(double)arg1;
- (void)setMinimumInterval:(double)arg1;
- (bool)shouldProcessWork;

@end