/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServiceSceneClassificationWorkerTaxonomyResolver : NSObject <PLPhotoAnalysisServiceTaxonomyResolver> {
    PHAVisionServiceSceneClassificationWorker * _sceneClassificationWorker;
}

@property (readonly) PHAVisionServiceSceneClassificationWorker *sceneClassificationWorker;

- (void).cxx_destruct;
- (id)initWithSceneClassificationWorker:(id)arg1;
- (id)sceneClassificationWorker;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (id)sceneTaxonomyHash;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;

@end
