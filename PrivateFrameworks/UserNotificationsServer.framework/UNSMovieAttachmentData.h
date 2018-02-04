/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSMovieAttachmentData : UNSAttachmentData <UNSAttachmentThumbnailProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_videoAssetWithURL:(id)arg1;
+ (id)_videoTrackForAsset:(id)arg1;
+ (bool)isFileValid:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForThumbnailOptions:(id)arg1;
- (id)thumbnailPNGOfSize:(struct CGSize { double x1; double x2; })arg1 forThumbnailOptions:(id)arg2;

@end
