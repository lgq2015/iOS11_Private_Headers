/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKResourcesTile : VKTile {
    struct shared_ptr<md::ResourceInfo> { 
        struct ResourceInfo {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _resourceInfo;
}

@property (nonatomic, readonly) struct shared_ptr<md::ResourceInfo> { struct ResourceInfo {} *x1; struct __shared_weak_count {} *x2; } resourceInfo;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (struct shared_ptr<md::ResourceInfo> { struct ResourceInfo {} *x1; struct __shared_weak_count {} *x2; })resourceInfo;

@end
