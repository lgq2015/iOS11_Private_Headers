/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARHWFaceDetection : NSObject <NSSecureCoding> {
    long long  _ID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    long long  _detectionOrientation;
    double  _rollAngleInDegrees;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) long long ID;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) long long detectionOrientation;
@property (nonatomic) double rollAngleInDegrees;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)faceDetectionFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long)ID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (long long)detectionOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFaceDetection:(id)arg1;
- (double)rollAngleInDegrees;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDetectionOrientation:(long long)arg1;
- (void)setID:(long long)arg1;
- (void)setRollAngleInDegrees:(double)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
