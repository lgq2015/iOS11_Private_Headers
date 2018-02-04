/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSharedResourcesManager : NSObject {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    NSMapTable * _tilegroupIdentifierToResources;
}

+ (void)addResourceUser:(id)arg1;
+ (id)defaultManifestConfiguration;
+ (void)removeResourceUser:(id)arg1;
+ (id)sharedManager;
+ (id)sharedResourcesForConfiguration:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)resourcesForConfiguration:(id)arg1;

@end
