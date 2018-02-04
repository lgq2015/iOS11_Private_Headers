/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPValueRange : NSObject {
    NSNumber * _maxPossible;
    NSNumber * _minPossible;
    NSNumber * _range;
}

@property (nonatomic, readonly) NSNumber *maxPossible;
@property (nonatomic, readonly) NSNumber *minPossible;
@property (nonatomic, readonly) NSNumber *range;

+ (id)rangeWithMin:(id)arg1 max:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMin:(id)arg1 max:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToValueRange:(id)arg1;
- (id)maxPossible;
- (id)minPossible;
- (id)range;

@end
