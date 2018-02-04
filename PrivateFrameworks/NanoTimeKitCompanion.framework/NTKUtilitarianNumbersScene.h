/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilitarianNumbersScene : NTKUtilitarianScene

- (void)applyDensity:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (double)getRelativeFractionFromOverallFraction:(double)arg1 forIntervalStart:(double)arg2 andIntervalEnd:(double)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)scrubbingObscuredCollectionNodes;
- (void)setAlpha:(double)arg1 element:(id)arg2 index:(int)arg3;

@end