/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameMatch : NSObject {
    GKGame * _game;
    GKRecentMatchInternal * _internal;
    GKPlayer * _player;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) GKGame *game;
@property (retain) GKRecentMatchInternal *internal;
@property (nonatomic, retain) GKPlayer *player;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;

- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setGame:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
