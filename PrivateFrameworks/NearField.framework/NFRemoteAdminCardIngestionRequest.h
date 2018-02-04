/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFRemoteAdminCardIngestionRequest : NSObject <NSSecureCoding> {
    NSDictionary * _cardServiceInfo;
    unsigned long long  _maxDetectionTimeout;
    NSString * _serverIdentifier;
    NSString * _sessionToken;
    NSString * _uri;
}

@property (nonatomic, retain) NSDictionary *cardServiceInfo;
@property (nonatomic) unsigned long long maxDetectionTimeout;
@property (nonatomic, retain) NSString *serverIdentifier;
@property (nonatomic, retain) NSString *sessionToken;
@property (nonatomic, retain) NSString *uri;

+ (id)cardIngestionRequestWithServerIdentifier:(id)arg1 sessionToken:(id)arg2 readerModeMetadata:(id)arg3 maxDetectionTimeout:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (id)cardServiceInfo;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxDetectionTimeout;
- (id)serverIdentifier;
- (id)sessionToken;
- (void)setCardServiceInfo:(id)arg1;
- (void)setMaxDetectionTimeout:(unsigned long long)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setUri:(id)arg1;
- (id)uri;

@end
