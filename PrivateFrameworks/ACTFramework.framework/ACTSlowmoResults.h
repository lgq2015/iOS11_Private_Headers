/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
 */

@interface ACTSlowmoResults : NSObject {
    double  _minTimeBetweenFrames;
    NSMutableDictionary * _results;
    bool  _verbose;
}

@property double minTimeBetweenFrames;
@property (readonly) NSDictionary *results;
@property bool verbose;

- (void)addFrame:(double)arg1 frameValue:(int)arg2;
- (void)addVerboseResult:(id)arg1;
- (id)copyClusters;
- (void)dealloc;
- (void)dumpClusters;
- (id)init;
- (void)mergeClusters:(id)arg1 cluster2:(id)arg2;
- (double)minTimeBetweenFrames;
- (void)performPass1Clustering;
- (void)performPass2Clustering;
- (void)reduceToSingleTimeRange;
- (id)results;
- (void)setMinTimeBetweenFrames:(double)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVerbose:(bool)arg1;
- (bool)verbose;
- (void)writeToFile:(id)arg1;

@end
