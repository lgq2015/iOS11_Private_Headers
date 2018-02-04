/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADynamiteClientState : SAAceClientState

@property (nonatomic, retain) SACalendar *expirationDate;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *userToken;
@property (nonatomic, copy) NSString *xpAbCookie;

+ (id)deliveryDeadline;
+ (id)dynamiteClientState;
+ (id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;

- (id)encodedClassName;
- (id)expirationDate;
- (id)groupIdentifier;
- (void)setExpirationDate:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setUserToken:(id)arg1;
- (void)setXpAbCookie:(id)arg1;
- (id)status;
- (id)userToken;
- (id)xpAbCookie;

@end
