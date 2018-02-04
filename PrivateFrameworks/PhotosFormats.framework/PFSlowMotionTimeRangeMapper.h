/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSlowMotionTimeRangeMapper : NSObject {
    NSMutableArray * _originalLengths;
    NSMutableArray * _scaledLengths;
    NSMutableArray * _scaledRegions;
}

- (void).cxx_destruct;
- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;
- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;
- (void)enumerateScaledRegionsUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;
- (float)originalTimeForScaledTime:(float)arg1;
- (float)scaledTimeForOriginalTime:(float)arg1;

@end
