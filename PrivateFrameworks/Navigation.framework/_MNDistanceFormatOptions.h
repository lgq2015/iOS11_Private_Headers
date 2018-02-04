/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _MNDistanceFormatOptions : NSObject {
    unsigned long long  _minimumFractionDigits;
    bool  abbreviateUnits;
    unsigned long long  maximumFractionDigits;
    bool  metric;
    long long  rounding;
    bool  spoken;
    bool  yards;
}

@property (nonatomic) bool abbreviateUnits;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) bool metric;
@property (nonatomic) unsigned long long minimumFractionDigits;
@property (nonatomic) long long rounding;
@property (nonatomic) bool spoken;
@property (nonatomic) bool yards;

- (bool)abbreviateUnits;
- (unsigned long long)maximumFractionDigits;
- (bool)metric;
- (unsigned long long)minimumFractionDigits;
- (long long)rounding;
- (void)setAbbreviateUnits:(bool)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMetric:(bool)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setRounding:(long long)arg1;
- (void)setSpoken:(bool)arg1;
- (void)setYards:(bool)arg1;
- (bool)spoken;
- (bool)yards;

@end
