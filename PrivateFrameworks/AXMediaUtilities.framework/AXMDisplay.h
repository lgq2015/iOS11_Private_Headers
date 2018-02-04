/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMDisplay : NSObject <NSCopying> {
    long long  _backingType;
    NSString * _name;
    double  _orientation;
    long long  _physicalOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _supportsDeepColor;
}

@property (nonatomic) long long backingType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double orientation;
@property (nonatomic) long long physicalOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool supportsDeepColor;

- (void).cxx_destruct;
- (id)_initWithBackingType:(long long)arg1;
- (long long)backingType;
- (struct CGPoint { double x1; double x2; })convertPointToDisplay:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToDisplay:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)name;
- (double)orientation;
- (long long)physicalOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (double)scale;
- (void)setBackingType:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOrientation:(double)arg1;
- (void)setPhysicalOrientation:(long long)arg1;
- (void)setReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSupportsDeepColor:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)supportsDeepColor;

@end
