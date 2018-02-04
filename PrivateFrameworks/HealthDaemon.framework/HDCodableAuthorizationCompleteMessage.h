/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAuthorizationCompleteMessage : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    NSString * _errorDescription;
    NSData * _requestIdentifier;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, retain) NSData *requestIdentifier;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (bool)hasAppBundleIdentifier;
- (bool)hasErrorDescription;
- (bool)hasRequestIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end