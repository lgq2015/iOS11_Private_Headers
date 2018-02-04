/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameRecommendationInternal : GKGameInternal {
    NSString * _engineID;
    NSString * _reason;
}

@property (nonatomic, retain) NSString *engineID;
@property (nonatomic, retain) NSString *reason;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)engineID;
- (id)initWithGame:(id)arg1;
- (id)reason;
- (id)serverRepresentation;
- (void)setEngineID:(id)arg1;
- (void)setReason:(id)arg1;

@end
