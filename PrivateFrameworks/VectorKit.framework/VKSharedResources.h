/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSharedResources : NSObject {
    struct unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas> > { 
        struct __compressed_pair<ggl::AlphaAtlas *, std::__1::default_delete<ggl::AlphaAtlas> > { 
            struct AlphaAtlas {} *__first_; 
        } __ptr_; 
    }  _alphaAtlas;
    struct shared_ptr<ggl::CommonLibrary> { 
        struct CommonLibrary {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _commonLibrary;
    struct unique_ptr<md::Device, std::__1::default_delete<md::Device> > { 
        struct __compressed_pair<md::Device *, std::__1::default_delete<md::Device> > { 
            struct Device {} *__first_; 
        } __ptr_; 
    }  _device;
    struct unique_ptr<ggl::DistanceAtlas, std::__1::default_delete<ggl::DistanceAtlas> > { 
        struct __compressed_pair<ggl::DistanceAtlas *, std::__1::default_delete<ggl::DistanceAtlas> > { 
            struct DistanceAtlas {} *__first_; 
        } __ptr_; 
    }  _distanceAtlas;
    struct unique_ptr<md::FontManager, std::__1::default_delete<md::FontManager> > { 
        struct __compressed_pair<md::FontManager *, std::__1::default_delete<md::FontManager> > { 
            struct FontManager {} *__first_; 
        } __ptr_; 
    }  _fontManager;
    struct _retain_ptr<VKGGLTextureManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKGGLTextureManager *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _gglTextureManager;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
        struct __compressed_pair<ggl::IsoAlphaAtlas *, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
            struct IsoAlphaAtlas {} *__first_; 
        } __ptr_; 
    }  _highInflationAlphaAtlas;
    struct _retain_ptr<VKIconManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKIconManager *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _iconManager;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
        struct __compressed_pair<ggl::IsoAlphaAtlas *, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
            struct IsoAlphaAtlas {} *__first_; 
        } __ptr_; 
    }  _isoAlphaAtlas;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    unsigned int  _referenceCount;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKResourceManager *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _resourceManager;
    struct shared_ptr<ggl::StandardLibrary> { 
        struct StandardLibrary {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _shaderLibrary;
    struct _retain_ptr<VKShieldManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKShieldManager *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _shieldManager;
    struct shared_ptr<md::StylesheetVendor> { 
        struct StylesheetVendor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stylesheetVendor;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{AlphaAtlas=BIIIf{unique_ptr<ggl::Texture2D' */ struct *alphaAtlas; /* unknown property attribute:  std::__1::default_delete<ggl::Texture2D> >=^{Texture2D}}}} */
@property (nonatomic, readonly) struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; /* Warning: unhandled struct encoding: '{unique_ptr<md::SharedDeviceResources' */ struct x3; }*device; /* unknown property attribute:  std::__1::default_delete<md::SharedDeviceResources> >=^{SharedDeviceResources}}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{DistanceAtlas=III{unique_ptr<ggl::Texture2D' */ struct *distanceAtlas; /* unknown property attribute:  std::__1::default_delete<ggl::Texture2D> >=^{Texture2D}}}} */
@property (nonatomic, readonly) struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*gglDevice;
@property (nonatomic, readonly) VKGGLTextureManager *gglTextureManager;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{IsoAlphaAtlas=IIf{unique_ptr<ggl::Texture2D' */ struct *highInflationAlphaAtlas; /* unknown property attribute:  std::__1::default_delete<ggl::Texture2D> >=^{Texture2D}}}{shared_ptr<ggl::SamplerState>=^{SamplerState}^{__shared_weak_count}}} */
@property (nonatomic, readonly) VKIconManager *iconManager;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{IsoAlphaAtlas=IIf{unique_ptr<ggl::Texture2D' */ struct *isoAlphaAtlas; /* unknown property attribute:  std::__1::default_delete<ggl::Texture2D> >=^{Texture2D}}}{shared_ptr<ggl::SamplerState>=^{SamplerState}^{__shared_weak_count}}} */
@property (nonatomic, readonly) VKResourceManager *resourceManager;
@property (nonatomic, readonly) const struct StandardLibrary { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct ShaderLibraryDescriptor {} *x4; /* Warning: unhandled struct encoding: '{vector<ggl::ShaderLibrary::FunctionEntry' */ struct x5; }*shaderLibrary; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::Shader> > >=^{shared_ptr<ggl::Shader>}}}{shared_ptr<ggl::ShaderLibraryData>=^{ShaderLibraryData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) VKShieldManager *shieldManager;
@property (nonatomic, readonly) struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; } stylesheetVendor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addResourceUser;
- (bool)_hasResourceUsers;
- (id)_initWithConfiguration:(id)arg1 device:(struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)arg2 standardLibrary:(const struct shared_ptr<ggl::StandardLibrary> { struct StandardLibrary {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (void)_removeResourceUser;
- (struct AlphaAtlas { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_6_1_1; } x6; }*)alphaAtlas;
- (void)dealloc;
- (struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)device;
- (struct DistanceAtlas { unsigned int x1; unsigned int x2; unsigned int x3; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_4_1_1; } x4; }*)distanceAtlas;
- (struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)gglDevice;
- (id)gglTextureManager;
- (struct IsoAlphaAtlas { unsigned int x1; unsigned int x2; float x3; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_4_1_1; } x4; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; }*)highInflationAlphaAtlas;
- (id)iconManager;
- (struct IsoAlphaAtlas { unsigned int x1; unsigned int x2; float x3; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_4_1_1; } x4; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; }*)isoAlphaAtlas;
- (void)purge;
- (id)resourceManager;
- (const struct StandardLibrary { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct ShaderLibraryDescriptor {} *x4; struct vector<ggl::ShaderLibrary::FunctionEntry, std::__1::allocator<ggl::ShaderLibrary::FunctionEntry> > { struct FunctionEntry {} *x_5_1_1; struct FunctionEntry {} *x_5_1_2; struct __compressed_pair<ggl::ShaderLibrary::FunctionEntry *, std::__1::allocator<ggl::ShaderLibrary::FunctionEntry> > { struct FunctionEntry {} *x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::ShaderLibrary::ShaderEntry, std::__1::allocator<ggl::ShaderLibrary::ShaderEntry> > { struct ShaderEntry {} *x_6_1_1; struct ShaderEntry {} *x_6_1_2; struct __compressed_pair<ggl::ShaderLibrary::ShaderEntry *, std::__1::allocator<ggl::ShaderLibrary::ShaderEntry> > { struct ShaderEntry {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::ShaderLibrary::ComputeShaderEntry, std::__1::allocator<ggl::ShaderLibrary::ComputeShaderEntry> > { struct ComputeShaderEntry {} *x_7_1_1; struct ComputeShaderEntry {} *x_7_1_2; struct __compressed_pair<ggl::ShaderLibrary::ComputeShaderEntry *, std::__1::allocator<ggl::ShaderLibrary::ComputeShaderEntry> > { struct ComputeShaderEntry {} *x_3_2_1; } x_7_1_3; } x7; }*)shaderLibrary;
- (id)shieldManager;
- (struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; })stylesheetVendor;

@end
