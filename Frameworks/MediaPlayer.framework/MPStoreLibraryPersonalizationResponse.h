/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting> {
    MPModelResponse * _libraryResponse;
    MPSectionedCollection * _representedObjectResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPModelResponse *libraryResponse;
@property (nonatomic, retain) MPSectionedCollection *representedObjectResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_libraryResponseDidInvalidateNotification:(id)arg1;
- (void)dealloc;
- (id)libraryResponse;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(id /* block */)arg2;
- (id)representedObjectResults;
- (void)setLibraryResponse:(id)arg1;
- (void)setRepresentedObjectResults:(id)arg1;

@end
