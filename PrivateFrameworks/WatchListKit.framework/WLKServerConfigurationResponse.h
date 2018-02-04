/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding> {
    unsigned long long  _environmentHash;
    NSDate * _expirationDate;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) NSDictionary *endpointsDictionary;
@property (nonatomic, readonly) unsigned long long environmentHash;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSArray *orderedChannels;
@property (nonatomic, readonly) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSDictionary *serverRoutesDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointsDictionary;
- (unsigned long long)environmentHash;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;
- (bool)isValid;
- (id)orderedChannels;
- (id)requiredRequestKeyValuePairsDictionary;
- (id)responseDictionary;
- (id)serverRoutesDictionary;

@end
