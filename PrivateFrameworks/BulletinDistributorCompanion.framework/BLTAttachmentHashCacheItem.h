/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTAttachmentHashCacheItem : NSObject {
    NSData * _MD5;
    NSString * _attachmentIdentifier;
    NSData * _data;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *attachmentIdentifier;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSURL *url;

+ (id)attachmentHashCacheItemWithData:(id)arg1 URL:(id)arg2 attachmentIdentifier:(id)arg3;

- (void).cxx_destruct;
- (id)MD5;
- (id)attachmentIdentifier;
- (id)data;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 data:(id)arg2 attachmentIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (void)setAttachmentIdentifier:(id)arg1;
- (void)setData:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
