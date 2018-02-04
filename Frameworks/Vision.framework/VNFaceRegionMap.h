/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceRegionMap : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _regionLabels;
    bool  mDeallocateBuffer;
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  mInternalAlignedBBox;
    NSDictionary * mPixelValueToRegionLabelMap;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  mRegionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mUserBBox;
}

@property (copy) NSArray *regionLabels;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getRegionLabels;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)regionLabels;
- (id)regionNameAtImageCoordinate:(struct CGPoint { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)regionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (id)regionNameAtNormalizedFaceCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRegionLabels:(id)arg1;
- (void)setRegionMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 deallocateBuffer:(bool)arg2 userBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg4 valueToLabelMap:(id)arg5;

@end
