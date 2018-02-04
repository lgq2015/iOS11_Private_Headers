/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripMediaProviderResult : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _actualTime;
    PUFilmstripAsset * _asset;
    UIImage * _image;
    bool  _isReadyForDelivery;
    long long  _requestNumber;
    NSDictionary * _resultInfo;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } actualTime;
@property (nonatomic, retain) PUFilmstripAsset *asset;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isReadyForDelivery;
@property (nonatomic) long long requestNumber;
@property (nonatomic, retain) NSDictionary *resultInfo;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })actualTime;
- (id)asset;
- (long long)compare:(id)arg1;
- (id)image;
- (bool)isReadyForDelivery;
- (long long)requestNumber;
- (id)resultInfo;
- (void)setActualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAsset:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsReadyForDelivery:(bool)arg1;
- (void)setRequestNumber:(long long)arg1;
- (void)setResultInfo:(id)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
