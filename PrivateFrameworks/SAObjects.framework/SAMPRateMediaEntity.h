/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *hashedRouteUID;
@property (nonatomic) long long rating;

+ (id)rateMediaEntity;
+ (id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUID;
- (long long)rating;
- (bool)requiresResponse;
- (void)setHashedRouteUID:(id)arg1;
- (void)setRating:(long long)arg1;

@end
