/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMonogramDescription : NSObject <NSSecureCoding> {
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    UIColor * _fillColor;
    NSString * _firstName;
    UIFont * _font;
    bool  _hasPlaceholder;
    NSURL * _imageURL;
    NSString * _lastName;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _text;
    double  _upscaleAdjustment;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) UIFont *font;
@property (nonatomic) bool hasPlaceholder;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) double upscaleAdjustment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)borderColor;
- (double)borderWidth;
- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)fillColor;
- (id)firstName;
- (id)font;
- (bool)hasPlaceholder;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;
- (id)lastName;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setHasPlaceholder:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setUpscaleAdjustment:(double)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)text;
- (double)upscaleAdjustment;

@end
