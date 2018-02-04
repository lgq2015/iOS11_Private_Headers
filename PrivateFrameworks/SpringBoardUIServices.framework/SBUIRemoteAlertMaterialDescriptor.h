/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIRemoteAlertMaterialDescriptor : NSObject <NSSecureCoding> {
    double  _blurRadius;
    UIColor * _color;
    double  _zoom;
}

@property (nonatomic) double blurRadius;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic) double zoom;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)blurRadius;
- (id)color;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setZoom:(double)arg1;
- (double)zoom;

@end
