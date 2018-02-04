/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {
    NSDate * _date;
    NSString * _message;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *message;

+ (id)secureCodedPropertyKeys;

- (id)date;
- (void)dealloc;
- (int)defaultFamiliarity;
- (id)message;
- (void)setDate:(id)arg1;
- (void)setMessage:(id)arg1;

@end
