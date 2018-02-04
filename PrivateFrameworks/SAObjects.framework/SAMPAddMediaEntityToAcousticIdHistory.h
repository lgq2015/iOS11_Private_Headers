/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *adamId;
@property (nonatomic, copy) NSString *affiliateId;

+ (id)addMediaEntityToAcousticIdHistory;
+ (id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)arg1 context:(id)arg2;

- (id)adamId;
- (id)affiliateId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAdamId:(id)arg1;
- (void)setAffiliateId:(id)arg1;

@end
