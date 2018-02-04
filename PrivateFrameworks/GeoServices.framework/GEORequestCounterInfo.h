/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {
    NSDictionary * _dict;
}

@property (nonatomic, readonly) NSArray *requestTypes;

+ (id)counterInfoWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_formattedString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nonZeroResultTypesForType:(unsigned char)arg1;
- (unsigned long long)numberOfRequestsForType:(unsigned char)arg1 result:(unsigned char)arg2;
- (unsigned long long)recvBytes;
- (unsigned long long)recvBytesForType:(unsigned char)arg1;
- (id)requestTypes;
- (unsigned long long)xmitBytes;
- (unsigned long long)xmitBytesForType:(unsigned char)arg1;

@end
