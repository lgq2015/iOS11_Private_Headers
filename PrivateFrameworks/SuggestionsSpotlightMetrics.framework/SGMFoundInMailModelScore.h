/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMFoundInMailModelScore : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMFoundInMailModelType_ { unsigned long long x1; })arg2 contactDetail:(struct SGMContactDetailType_ { unsigned long long x1; })arg3 result:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg4 correct:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg5 mode:(struct SGFoundInMailModelMode_ { unsigned long long x1; })arg6 supervision:(struct SGMFoundInMailSupervisionType_ { unsigned long long x1; })arg7;
- (id)tracker;

@end
