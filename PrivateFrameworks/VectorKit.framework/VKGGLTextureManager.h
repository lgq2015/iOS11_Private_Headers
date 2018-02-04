/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGGLTextureManager : NSObject <GEOResourceManifestTileGroupObserver> {
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _arrowTexture;
    struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; } * _device;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKResourceManager * _resourceManager;
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _textureDictionary;
    NSObject<OS_dispatch_queue> * _textureQueue;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _whiteTexture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; }*)arrowTexture;
- (id)dataWithName:(id)arg1 fromResourceManager:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg3;
- (void)purge;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1 forScale:(float)arg2 mipmap:(bool)arg3 samplerState:(struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x1; struct __shared_weak_count {} *x2; })arg4;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1 forScale:(float)arg2 samplerState:(struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1 mipmap:(bool)arg2 samplerState:(struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })textureWithName:(id)arg1 samplerState:(struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (const struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; }*)whiteTexture;

@end
