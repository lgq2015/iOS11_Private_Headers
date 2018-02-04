/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMTopicsScored : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 resultSizeLog10:(unsigned long long)arg3 limitHit:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg4 timeSpec:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg5 timeLimited:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg6 exclusionSpec:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg7 error:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg8;
- (id)tracker;

@end
