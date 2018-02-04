/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLVolumeGrid : NSObject {
    struct unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree> > { 
        struct __compressed_pair<ModelIO::SCNOctree *, std::__1::default_delete<ModelIO::SCNOctree> > { 
            struct SCNOctree {} *__first_; 
        } __ptr_; 
    }  _octree;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorWidth:(float)arg3 exteriorWidth:(float)arg4 patchRadius:(float)arg5;
- (id)initWithObject:(id)arg1 divisions:(int)arg2;
- (id)meshWithStyle:(unsigned long long)arg1;
- (unsigned long long*)trianglesIntersectingRayWithOrigin:(void *)arg1 direction:(void *)arg2 count:(void *)arg3; // needs 3 arg types, found 1: unsigned long long*

@end
