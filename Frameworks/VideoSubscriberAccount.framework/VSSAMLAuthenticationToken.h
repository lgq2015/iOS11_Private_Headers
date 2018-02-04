/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken> {
    NSData * _serializedData;
}

@property (nonatomic, copy) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *serializedData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)body;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithSerializedData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOpaque;
- (bool)isValid;
- (id)serializedData;
- (void)setBody:(id)arg1;
- (void)setSerializedData:(id)arg1;

@end
