/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCGImageSourceNode : NUSourceNode {
    NSURL * _URL;
    NSString * _UTI;
    long long  _alphaInfo;
    struct CGColorSpace { } * _colorSpace;
    long long  _componentInfo;
    NSArray * _depthImagesProperties;
    NSDictionary * _imageProperties;
    struct CGImageSource { } * _imageSource;
    bool  _loaded;
    long long  _orientation;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (readonly) NSURL *URL;
@property (readonly) NSString *UTI;
@property long long alphaInfo;
@property (nonatomic, retain) struct CGColorSpace { }*colorSpace;
@property long long componentInfo;
@property (retain) NSArray *depthImagesProperties;
@property (nonatomic, retain) NSDictionary *imageProperties;
@property (nonatomic, retain) struct CGImageSource { }*imageSource;
@property bool loaded;
@property long long orientation;
@property struct { long long x1; long long x2; } size;

- (void).cxx_destruct;
- (id)URL;
- (id)UTI;
- (void)_addDefaultFinalizedSourceOptions:(id)arg1;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateImageProperties:(out id*)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2;
- (void)_init;
- (bool)_load:(out id*)arg1;
- (bool)_setDepthInformationFromProperties:(id)arg1 error:(out id*)arg2;
- (bool)_setGeometryFromProperties:(id)arg1 error:(out id*)arg2;
- (long long)alphaInfo;
- (struct CGColorSpace { }*)colorSpace;
- (long long)componentInfo;
- (void)dealloc;
- (id)depthImagePropertiesForDepthType:(long long)arg1;
- (id)depthImagesProperties;
- (id)imageProperties;
- (struct CGImageSource { }*)imageSource;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 identifier:(id)arg2;
- (id)initWithSettings:(id)arg1;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (bool)load:(out id*)arg1;
- (bool)loaded;
- (long long)orientation;
- (bool)pipelineStateIsForDepthImage:(id)arg1;
- (struct { long long x1; long long x2; })pixelSize;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5;
- (id)resolvedDepthNodeForPipelineState:(id)arg1 error:(out id*)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setAlphaInfo:(long long)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setComponentInfo:(long long)arg1;
- (void)setDepthImagesProperties:(id)arg1;
- (void)setImageProperties:(id)arg1;
- (void)setImageSource:(struct CGImageSource { }*)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end