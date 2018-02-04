/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>

@property (readonly) NUJSDepthProperties *depthProperties;
@property (readonly) NSString *fileUTI;
@property (readonly) <NUImageProperties> *imageProperties;
@property (readonly) NSDictionary *metadata;
@property (readonly) NUJSRAWImageProperties *rawImageProperties;

- (id)depthProperties;
- (id)fileUTI;
- (id)imageProperties;
- (id)initWithImageProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)metadata;
- (id)rawImageProperties;

@end
