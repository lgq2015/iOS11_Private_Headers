/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFaceTileImageRequest : NSObject {
    PHAsset * _assetContainingFace;
    NSString * _cacheKey;
    bool  _canceled;
    PHFace * _face;
    bool  _fullResMissing;
    int  _imageManagerRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastDeliveredSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedActualFaceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedFaceCropRect;
    PHObject * _originalRequestObject;
    struct PXFaceTileImageParams { 
        struct CGSize { 
            double width; 
            double height; 
        } targetSize; 
        unsigned long long cropFactor; 
        bool round; 
        bool cropBounded; 
        bool acceptsVeryLowQuality; 
        bool wantsNonVisibleFaceCompletion; 
    }  _params;
    NSDate * _ppt_requestStartDate;
    int  _requestID;
}

@property (nonatomic, retain) PHAsset *assetContainingFace;
@property (nonatomic, readonly) NSString *cacheKey;
@property (getter=isCanceled) bool canceled;
@property (nonatomic, retain) PHFace *face;
@property (getter=isFullResMissing) bool fullResMissing;
@property int imageManagerRequestID;
@property (nonatomic) struct CGSize { double x1; double x2; } lastDeliveredSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedActualFaceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceCropRect;
@property (nonatomic, retain) PHObject *originalRequestObject;
@property (nonatomic, readonly) struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; bool x3; bool x4; bool x5; bool x6; } params;
@property (setter=ppt_setRequestStartDate:, nonatomic, copy) NSDate *ppt_requestStartDate;
@property (nonatomic, readonly) int requestID;

- (void).cxx_destruct;
- (id)assetContainingFace;
- (id)cacheKey;
- (void)cancel;
- (id)face;
- (int)imageManagerRequestID;
- (id)initWithFace:(id)arg1 cacheKey:(id)arg2 params:(struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; bool x3; bool x4; bool x5; bool x6; })arg3;
- (bool)isCanceled;
- (bool)isFullResMissing;
- (struct CGSize { double x1; double x2; })lastDeliveredSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedActualFaceRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceCropRect;
- (id)originalRequestObject;
- (struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; bool x3; bool x4; bool x5; bool x6; })params;
- (void)ppt_reportMeasurementsForImageQuality:(long long)arg1;
- (id)ppt_requestStartDate;
- (void)ppt_setRequestStartDate:(id)arg1;
- (int)requestID;
- (void)setAssetContainingFace:(id)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setFace:(id)arg1;
- (void)setFullResMissing:(bool)arg1;
- (void)setImageManagerRequestID:(int)arg1;
- (void)setLastDeliveredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNormalizedActualFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedFaceCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOriginalRequestObject:(id)arg1;

@end
