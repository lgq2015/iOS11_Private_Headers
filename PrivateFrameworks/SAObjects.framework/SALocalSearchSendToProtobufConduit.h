/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSURL *endpoint;
@property (nonatomic, copy) NSData *rawRequest;
@property (nonatomic) long long timeoutInSeconds;

+ (id)sendToProtobufConduit;
+ (id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributes;
- (id)encodedClassName;
- (id)endpoint;
- (id)groupIdentifier;
- (id)rawRequest;
- (bool)requiresResponse;
- (void)setAttributes:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setRawRequest:(id)arg1;
- (void)setTimeoutInSeconds:(long long)arg1;
- (long long)timeoutInSeconds;

@end
