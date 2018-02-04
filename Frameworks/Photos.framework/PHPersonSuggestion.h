/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPersonSuggestion : NSObject <PXPerson> {
    bool  _confirmed;
    PHFace * _keyFace;
    PHPerson * _person;
}

@property (nonatomic, readonly) bool confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isPersonModel;
@property (readonly) bool isVerified;
@property (nonatomic, readonly) PHFace *keyFace;
@property (readonly) NSString *name;
@property (readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) NSString *px_displayName;
@property (readonly) NSDate *px_keyPhotoDate;
@property (readonly) NSString *px_localIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (void).cxx_destruct;
- (bool)confirmed;
- (id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(bool)arg3;
- (id)keyFace;
- (id)person;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;

- (bool)isPersonModel;
- (bool)isVerified;
- (id)name;
- (unsigned long long)numberOfAssets;
- (id)px_displayName;
- (id)px_keyPhotoDate;
- (id)px_localIdentifier;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 cropFactor:(unsigned long long)arg2 round:(bool)arg3 cacheResult:(bool)arg4 boundFaceRect:(bool)arg5 completionBlock:(id /* block */)arg6;

@end
