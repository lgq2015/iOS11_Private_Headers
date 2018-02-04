/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding> {
    GKLeaderboardSetInternal * _internal;
}

@property (nonatomic, readonly, retain) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (retain) GKLeaderboardSetInternal *internal;
@property (nonatomic, readonly, retain) NSArray *leaderboardIdentifiers;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadLeaderboardSetsWithCompletionHandler:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadLeaderboardsWithCompletionHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)imageURL;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (id)miniImageURL;

@end
