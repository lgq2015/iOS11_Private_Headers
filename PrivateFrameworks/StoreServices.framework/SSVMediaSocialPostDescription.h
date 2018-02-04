/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding> {
    NSNumber * _accountIdentifier;
    NSArray * _attachments;
    bool  _attributed;
    NSString * _authorIdentifier;
    NSString * _authorType;
    NSArray * _contentItems;
    NSArray * _externalServiceDestinations;
    NSString * _sourceApplicationIdentifier;
    NSString * _text;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSArray *attachments;
@property (getter=isAttributed, nonatomic) bool attributed;
@property (nonatomic, copy) NSString *authorIdentifier;
@property (nonatomic, copy) NSString *authorType;
@property (nonatomic, copy) NSArray *contentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *externalServiceDestinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sourceApplicationIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)attachments;
- (id)authorIdentifier;
- (id)authorType;
- (id)contentItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)externalServiceDestinations;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isAttributed;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttributed:(bool)arg1;
- (void)setAuthorIdentifier:(id)arg1;
- (void)setAuthorType:(id)arg1;
- (void)setContentItems:(id)arg1;
- (void)setExternalServiceDestinations:(id)arg1;
- (void)setSourceApplicationIdentifier:(id)arg1;
- (void)setText:(id)arg1;
- (id)sourceApplicationIdentifier;
- (id)text;

@end
