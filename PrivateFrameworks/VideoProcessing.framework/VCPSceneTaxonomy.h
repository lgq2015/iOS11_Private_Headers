/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPSceneTaxonomy : NSObject {
    PVSceneTaxonomy * _sceneTaxonomy;
}

+ (id)sharedTaxonomy;

- (void).cxx_destruct;
- (id)init;
- (id)sceneIdFromSceneName:(id)arg1;
- (id)sceneNameFromSceneId:(unsigned int)arg1;

@end
