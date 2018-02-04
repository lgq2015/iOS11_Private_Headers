/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding> {
    long long  _constraintType;
    float  _fixedDimension;
    float  _fixedHeight;
    float  _fixedWidth;
    float  _maxAspectRatio;
    float  _minAspectRatio;
    float  _thumbnailScale;
}

@property (nonatomic) long long constraintType;
@property (nonatomic) float fixedDimension;
@property (nonatomic) float fixedHeight;
@property (nonatomic) float fixedWidth;
@property (nonatomic) float maxAspectRatio;
@property (nonatomic) float minAspectRatio;
@property (nonatomic) float thumbnailScale;

+ (bool)supportsSecureCoding;

- (bool)areReasonable;
- (long long)constraintType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)fixedDimension;
- (float)fixedHeight;
- (float)fixedWidth;
- (id)initWithCoder:(id)arg1;
- (float)maxAspectRatio;
- (float)minAspectRatio;
- (void)setConstraintType:(long long)arg1;
- (void)setFixedDimension:(float)arg1;
- (void)setFixedHeight:(float)arg1;
- (void)setFixedWidth:(float)arg1;
- (void)setMaxAspectRatio:(float)arg1;
- (void)setMinAspectRatio:(float)arg1;
- (void)setThumbnailScale:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeFromAspectRatio:(double)arg1;
- (float)thumbnailScale;

@end
