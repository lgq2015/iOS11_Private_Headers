/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKOpenGraphNode : NSObject {
    NSError * _error;
    bool  _liked;
    unsigned long long  _numberOfFriendLikes;
    unsigned long long  _numberOfLikes;
    NSURL * _url;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool liked;
@property (nonatomic) unsigned long long numberOfFriendLikes;
@property (nonatomic) unsigned long long numberOfLikes;
@property (readonly) NSURL *url;

+ (id)openGraphNodeAccessQueue;
+ (void)openGraphNodeForURL:(id)arg1 handler:(id /* block */)arg2;

- (void)clearErrorAndRefetchLikeStatusWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (void)fetchLikeStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithOpenGraphURL:(id)arg1;
- (bool)liked;
- (unsigned long long)numberOfFriendLikes;
- (unsigned long long)numberOfLikes;
- (void)sendDislikeEventWithCompletionHandler:(id /* block */)arg1;
- (void)sendLikeEventWithCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setLiked:(bool)arg1;
- (void)setNumberOfFriendLikes:(unsigned long long)arg1;
- (void)setNumberOfLikes:(unsigned long long)arg1;
- (void)toggleLikeStatusWithCompletionHandler:(id /* block */)arg1;
- (id)url;

@end
