/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneBorderIntersection : NSObject <CPCopying, NSCopying> {
    bool  backwardVector;
    bool  forwardVector;
    CPZoneBorder * intersectingBorder;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  intersectionRect;
}

- (bool)backwardVector;
- (long long)comparePositionLengthwise:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)forwardVector;
- (id)initSuper;
- (id)intersectingBorder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })intersectionRect;
- (void)setBackwardVector:(bool)arg1;
- (void)setForwardVector:(bool)arg1;
- (void)setIntersectingBorder:(id)arg1;
- (void)setIntersectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
