/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCGalleryCollection : NSObject <NTKEnumeratableFaceCollection> {
    NTKCompanionApp * _app;
    id /* block */  _calloutName;
    <NTKCGalleryCollectionDelegate> * _delegate;
    NSString * _descriptionText;
    NSString * _title;
}

@property (nonatomic, retain) NTKCompanionApp *app;
@property (nonatomic, copy) id /* block */ calloutName;
@property (nonatomic, readonly) bool canAddNewFaces;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCGalleryCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_activityFaces;
+ (id)_astronomyFaces;
+ (id)_chronographFaces;
+ (id)_colorFaces;
+ (id)_complicationFaces;
+ (id)_explorerFaces;
+ (id)_extraLargeFaces;
+ (id)_galleryCollectionWithCollectionIdentifier:(id)arg1 title:(id)arg2 calloutName:(id /* block */)arg3;
+ (id)_infinityFaces;
+ (id)_kaleidoscopeFaces;
+ (id)_mickeyAndMinnieFaces;
+ (id)_modularFaces;
+ (id)_motionFaces;
+ (id)_newFaces;
+ (id)_numeralsFaces;
+ (id)_photoFaces;
+ (id)_simpleFaces;
+ (id)_solarFaces;
+ (id)_timelapseFaces;
+ (id)_upNextFaces;
+ (id)_utilityFaces;
+ (id)_victoryAnalogFaces;
+ (id)_victoryDigitalFaces;
+ (id)_zeusFaces;
+ (id)galleryCollections;
+ (id)sampleFacesWithApp:(id)arg1;
+ (id)sampleFacesWithApp:(id)arg1 notIncludingFaceStyle:(long long)arg2;

- (void).cxx_destruct;
- (id)app;
- (id /* block */)calloutName;
- (bool)canAddNewFaces;
- (id)delegate;
- (id)descriptionText;
- (void)enumerateFaceNamesUsingBlock:(id /* block */)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)newFace;
- (unsigned long long)numberOfFaces;
- (void)setApp:(id)arg1;
- (void)setCalloutName:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
