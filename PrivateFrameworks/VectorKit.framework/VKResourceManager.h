/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKResourceManager : NSObject {
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSBundle * _vkBundle;
}

- (id)_localNameForResourceName:(id)arg1;
- (id)dataForResourceWithName:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDevResourceWithName:(id)arg1;
- (id)pathForResourceWithName:(id)arg1;

@end
