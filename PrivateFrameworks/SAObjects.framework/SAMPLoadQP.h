/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPLoadQP : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSNumber *startPlaying;

+ (id)loadQP;
+ (id)loadQPWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setStartPlaying:(id)arg1;
- (id)startPlaying;

@end
