/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPatchGrid : NSObject {
    float  _angle;
    struct vector<ARPatch, std::__1::allocator<ARPatch> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARPatch *, std::__1::allocator<ARPatch> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _patchesVector;
}

@property (nonatomic, readonly) const struct { }*patches;
@property (nonatomic, readonly) float pivot;
@property (nonatomic, readonly) unsigned long long size;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPatchesVector:(struct vector<ARPatch, std::__1::allocator<ARPatch> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ARPatch *, std::__1::allocator<ARPatch> > { struct { /* ? */ } *x_3_1_1; } x3; })arg1 pivotAngle:(float)arg2;
- (const struct { }*)patches;
- (float)pivot;
- (unsigned long long)size;

@end
