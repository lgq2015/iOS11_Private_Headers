/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDataDetectorDissector : SGPipelineDissector {
    long long  _scannerOptions;
}

+ (void)initialize;
+ (bool)stringHasDatesOrTimes:(id)arg1;

- (id)detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2 ddSignature:(struct __DDResult {}**)arg3;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)init;
- (id)initWithSigs:(bool)arg1;

@end
