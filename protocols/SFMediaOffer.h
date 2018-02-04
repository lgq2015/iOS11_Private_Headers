/* made by EzioChiu.
 */

@protocol SFMediaOffer <SFActionItem>

@required

- (SFActionItem *)actionItem;
- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (bool)isEnabled;
- (NSData *)jsonData;
- (NSString *)offerIdentifier;
- (void)setActionItem:(SFActionItem *)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setOfferIdentifier:(NSString *)arg1;
- (void)setSublabel:(NSString *)arg1;
- (NSString *)sublabel;

@end
