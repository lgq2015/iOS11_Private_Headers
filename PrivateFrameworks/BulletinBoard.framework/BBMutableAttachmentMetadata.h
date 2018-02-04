/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (void)setUUID:(id)arg1;

@end
