/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficDynamicTile : VKTile {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    }  _downloadKey;
    struct shared_ptr<md::TrafficDynamicTile> { 
        struct TrafficDynamicTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tile;
}

@property (nonatomic, readonly) struct shared_ptr<md::TrafficDynamicTile> { struct TrafficDynamicTile {} *x1; struct __shared_weak_count {} *x2; } tile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 data:(id)arg3;
- (struct shared_ptr<md::TrafficDynamicTile> { struct TrafficDynamicTile {} *x1; struct __shared_weak_count {} *x2; })tile;

@end
