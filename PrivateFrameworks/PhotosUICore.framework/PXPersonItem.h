/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPersonItem : NSObject {
    NSString * _displayName;
    UIImage * _faceImage;
    id /* block */  _faceImageLoadingCompletionBlock;
    int  _faceImageRequestID;
    id /* block */  _fastDisplayBlock;
    PHPerson * _modelObject;
    NSString * _name;
    NSNumber * _personTypeNumber;
    unsigned long long  _photosCount;
}

@property (nonatomic, copy) NSString *displayName;
@property UIImage *faceImage;
@property (copy) id /* block */ faceImageLoadingCompletionBlock;
@property int faceImageRequestID;
@property (copy) id /* block */ fastDisplayBlock;
@property (nonatomic, retain) PHPerson *modelObject;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long personType;
@property (nonatomic, retain) NSNumber *personTypeNumber;
@property (nonatomic) unsigned long long photosCount;

- (void).cxx_destruct;
- (id)displayName;
- (id)faceImage;
- (id /* block */)faceImageLoadingCompletionBlock;
- (int)faceImageRequestID;
- (id /* block */)fastDisplayBlock;
- (id)initWithPerson:(id)arg1;
- (id)modelObject;
- (id)name;
- (long long)personType;
- (id)personTypeNumber;
- (unsigned long long)photosCount;
- (void)setDisplayName:(id)arg1;
- (void)setFaceImage:(id)arg1;
- (void)setFaceImageLoadingCompletionBlock:(id /* block */)arg1;
- (void)setFaceImageRequestID:(int)arg1;
- (void)setFastDisplayBlock:(id /* block */)arg1;
- (void)setModelObject:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersonType:(long long)arg1;
- (void)setPersonTypeNumber:(id)arg1;
- (void)setPhotosCount:(unsigned long long)arg1;
- (void)updateWithModel:(id)arg1;

@end
