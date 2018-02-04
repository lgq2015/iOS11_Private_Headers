/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewAvatarGenerator : NSObject {
    NSMutableDictionary * _cachedMaskedImages;
    CNAvatarImageRenderer * _monogrammer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) CNAvatarImageRenderer *monogrammer;

- (void).cxx_destruct;
- (void)avatarForReview:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)monogramForReviewerName:(id)arg1 completion:(id /* block */)arg2;
- (id)monogrammer;
- (void)setMonogrammer:(id)arg1;

@end
