/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *adamId;

+ (id)addMediaEntityToWishList;
+ (id)addMediaEntityToWishListWithDictionary:(id)arg1 context:(id)arg2;

- (id)adamId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAdamId:(id)arg1;

@end
