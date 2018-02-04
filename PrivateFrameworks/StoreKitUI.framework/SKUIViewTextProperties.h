/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewTextProperties : NSObject <NSCopying> {
    double  _baselineOffsetFromBottom;
    double  _desiredOffsetTop;
    double  _firstBaselineOffset;
}

@property (nonatomic) double baselineOffsetFromBottom;
@property (nonatomic) double desiredOffsetTop;
@property (nonatomic) double firstBaselineOffset;

- (double)baselineOffsetFromBottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)desiredOffsetTop;
- (double)firstBaselineOffset;
- (id)initWithStringLayout:(id)arg1;
- (id)initWithTextLayout:(id)arg1 isExpanded:(bool)arg2;
- (void)setBaselineOffsetFromBottom:(double)arg1;
- (void)setDesiredOffsetTop:(double)arg1;
- (void)setFirstBaselineOffset:(double)arg1;

@end
