/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestOptions : NSObject <NSCopying> {
    bool  _allowPlaceholder;
    bool  _allowSecondaryOpportunisticImage;
    double  _aspectRatioHint;
    id /* block */  _cachingCompletedHandler;
    bool  _deliveryFirstResultAsynchronously;
    long long  _deliveryMode;
    double  _demoteFactor;
    double  _downloadUpdateInterval;
    long long  _loadingMode;
    bool  _memoryCachingAllowed;
    bool  _networkAccessAllowed;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedCropRect;
    id /* block */  _progressHandler;
    long long  _rank;
    int  _requestID;
    long long  _resizeMode;
    bool  _synchronous;
    long long  _version;
}

@property (nonatomic) bool allowPlaceholder;
@property (nonatomic) bool allowSecondaryOpportunisticImage;
@property (nonatomic) double aspectRatioHint;
@property (nonatomic, copy) id /* block */ cachingCompletedHandler;
@property (nonatomic) bool deliveryFirstResultAsynchronously;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) double demoteFactor;
@property (nonatomic) double downloadUpdateInterval;
@property (nonatomic) long long loadingMode;
@property (getter=isMemoryCachingAllowed, nonatomic) bool memoryCachingAllowed;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) long long rank;
@property (nonatomic) int requestID;
@property (nonatomic) long long resizeMode;
@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic) long long version;

+ (id)defaultOptionsAllowingPlaceholder;

- (void).cxx_destruct;
- (bool)allowPlaceholder;
- (bool)allowSecondaryOpportunisticImage;
- (double)aspectRatioHint;
- (id /* block */)cachingCompletedHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliveryFirstResultAsynchronously;
- (long long)deliveryMode;
- (double)demoteFactor;
- (id)description;
- (double)downloadUpdateInterval;
- (id)init;
- (bool)isMemoryCachingAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (long long)loadingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (id /* block */)progressHandler;
- (long long)rank;
- (int)requestID;
- (int)requestIDOrNextIfInvalid;
- (long long)resizeMode;
- (void)setAllowPlaceholder:(bool)arg1;
- (void)setAllowSecondaryOpportunisticImage:(bool)arg1;
- (void)setAspectRatioHint:(double)arg1;
- (void)setCachingCompletedHandler:(id /* block */)arg1;
- (void)setDeliveryFirstResultAsynchronously:(bool)arg1;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDemoteFactor:(double)arg1;
- (void)setDownloadUpdateInterval:(double)arg1;
- (void)setLoadingMode:(long long)arg1;
- (void)setMemoryCachingAllowed:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRank:(long long)arg1;
- (void)setRequestID:(int)arg1;
- (void)setResizeMode:(long long)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
