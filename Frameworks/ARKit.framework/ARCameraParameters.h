/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCameraParameters : NSObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _focalLength;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    struct CGPoint { 
        double x; 
        double y; 
    }  _principalPoint;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } focalLength;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } principalPoint;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })focalLength;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocalLength:(struct CGPoint { double x1; double x2; })arg1 imageResolution:(struct CGSize { double x1; double x2; })arg2 principalPoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })principalPoint;

@end
