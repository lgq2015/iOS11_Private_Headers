/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSyncDelayedDismissal : NSObject {
    BBBulletin * _bulletin;
    unsigned long long  _feeds;
}

@property (nonatomic, retain) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feeds;

- (void).cxx_destruct;
- (id)bulletin;
- (unsigned long long)feeds;
- (void)setBulletin:(id)arg1;
- (void)setFeeds:(unsigned long long)arg1;

@end
