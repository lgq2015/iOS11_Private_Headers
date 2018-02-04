/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken> {
    NSString * _body;
    NSDate * _expirationDate;
}

@property (nonatomic, copy) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *serializedData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)body;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSerializedData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOpaque;
- (bool)isValid;
- (id)serializedData;
- (void)setBody:(id)arg1;
- (void)setExpirationDate:(id)arg1;

@end
