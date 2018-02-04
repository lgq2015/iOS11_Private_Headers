/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject <MPArtworkDataSource> {
    MPCMediaRemoteController * _controller;
}

@property (nonatomic) MPCMediaRemoteController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)controller;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setController:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
