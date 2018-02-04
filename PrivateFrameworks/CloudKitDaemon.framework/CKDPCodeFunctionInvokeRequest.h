/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying> {
    NSString * _functionName;
    NSData * _serializedParameters;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSString *functionName;
@property (nonatomic, readonly) bool hasFunctionName;
@property (nonatomic, readonly) bool hasSerializedParameters;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, retain) NSString *serviceName;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)functionName;
- (bool)hasFunctionName;
- (bool)hasSerializedParameters;
- (bool)hasServiceName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serializedParameters;
- (id)serviceName;
- (void)setFunctionName:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
