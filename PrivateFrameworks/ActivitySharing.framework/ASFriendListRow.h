/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASFriendListRow : NSObject {
    ASFriend * _friend;
    struct _HKFitnessFriendActivitySnapshot { Class x1; } * _snapshot;
}

@property (nonatomic, retain) ASFriend *friend;
@property (nonatomic, retain) _HKFitnessFriendActivitySnapshot *snapshot;

- (void).cxx_destruct;
- (id)friend;
- (bool)isEqual:(id)arg1;
- (void)setFriend:(id)arg1;
- (void)setSnapshot:(struct _HKFitnessFriendActivitySnapshot { Class x1; }*)arg1;
- (struct _HKFitnessFriendActivitySnapshot { Class x1; }*)snapshot;

@end