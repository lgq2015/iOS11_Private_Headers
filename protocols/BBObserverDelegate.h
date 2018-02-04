/* made by EzioChiu.
 */

@protocol BBObserverDelegate <NSObject>

@optional

- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(void *)arg1 addBulletin:(void *)arg2 forFeed:(void *)arg3 playLightsAndSirens:(void *)arg4 withReply:(void *)arg5; // needs 5 arg types, found 10: BBObserver *, BBBulletin *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (UIImage *)observer:(BBObserver *)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(NSData *)arg3 key:(NSString *)arg4;
- (struct CGSize { double x1; double x2; })observer:(BBObserver *)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(NSString *)arg5;
- (void)observer:(void *)arg1 composedImageFromThumbnailData:(void *)arg2 forAttachment:(void *)arg3 bulletin:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: BBObserver *, NSData *, BBAttachmentMetadata *, BBBulletin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (struct CGSize { double x1; double x2; })observer:(BBObserver *)arg1 composedImageSizeForAttachment:(BBAttachmentMetadata *)arg2 bulletin:(BBBulletin *)arg3 thumbnailSize:(struct CGSize { double x1; double x2; })arg4;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned long long)arg2;
- (void)observer:(BBObserver *)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (void)observer:(BBObserver *)arg1 noteInvalidatedBulletinIDs:(NSSet *)arg2;
- (void)observer:(BBObserver *)arg1 noteSectionParametersChanged:(BBSectionParameters *)arg2 forSectionID:(NSString *)arg3;
- (void)observer:(BBObserver *)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (void)observer:(BBObserver *)arg1 noteServerReceivedResponseForBulletin:(BBBulletin *)arg2;
- (void)observer:(void *)arg1 prepareAttachment:(void *)arg2 beforeDeliveringBulletin:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 9: BBObserver *, BBAttachmentMetadata *, BBBulletin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)observer:(void *)arg1 processData:(void *)arg2 forAttachment:(void *)arg3 bulletin:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: BBObserver *, NSData *, BBAttachmentMetadata *, BBBulletin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)observer:(BBObserver *)arg1 purgeReferencesToBulletinID:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 removeSection:(NSString *)arg2;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachment:(BBAttachmentMetadata *)arg2 bulletin:(BBBulletin *)arg3;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionInfo:(BBSectionInfo *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionOrder:(NSArray *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionOrderRule:(long long)arg2;
- (bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(BBObserver *)arg1;
- (bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(BBObserver *)arg1;

@end
