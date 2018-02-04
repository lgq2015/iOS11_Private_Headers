/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageResource : SXResource

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } dimensions;
@property (nonatomic, readonly) NSString *imageIdentifier;

+ (id)typeString;

- (id)description;
- (double)heightForImageWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFills:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)widthForImageHeight:(double)arg1;

@end
