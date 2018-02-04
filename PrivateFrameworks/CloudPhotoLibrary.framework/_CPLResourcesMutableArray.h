/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface _CPLResourcesMutableArray : NSObject {
    NSMutableDictionary * _resourcesPerType;
    NSMutableDictionary * _updatedResourcesPerType;
}

- (void).cxx_destruct;
- (void)addResource:(id)arg1;
- (id)allResources;
- (id)initWithResources:(id)arg1;
- (id)reallyUpdatedResources;

@end
