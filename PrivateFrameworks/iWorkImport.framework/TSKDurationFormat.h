/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDurationFormat : TSKFormat <NSCopying> {
    int  _durationStyle;
    int  _durationUnitLargest;
    int  _durationUnitSmallest;
    bool  _useAutomaticUnits;
}

@property (nonatomic, readonly) int durationStyle;
@property (nonatomic, readonly) int durationUnitLargest;
@property (nonatomic, readonly) int durationUnitSmallest;
@property (nonatomic, readonly) bool useAutomaticUnits;

- (id)asDurationFormat;
- (int)durationStyle;
- (int)durationUnitLargest;
- (int)durationUnitSmallest;
- (unsigned long long)hash;
- (id)initWithFormatType:(int)arg1;
- (id)initWithUseAutomaticUnits:(bool)arg1 durationUnitSmallest:(int)arg2 durationUnitLargest:(int)arg3 durationStyle:(int)arg4;
- (bool)isEqual:(id)arg1;
- (id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2;
- (id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2 showPrecision:(bool)arg3;
- (bool)useAutomaticUnits;

@end
