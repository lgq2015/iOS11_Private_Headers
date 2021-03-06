/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileBackedAsset : NSObject <PXDisplayAsset> {
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithURL:(id)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isFavorite;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)url;

@end
