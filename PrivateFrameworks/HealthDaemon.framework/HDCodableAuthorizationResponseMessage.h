/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAuthorizationResponseMessage : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    NSString * _errorDescription;
    struct { 
        unsigned int shouldPrompt : 1; 
    }  _has;
    NSString * _hostAppName;
    NSData * _requestIdentifier;
    bool  _shouldPrompt;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasHostAppName;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic) bool hasShouldPrompt;
@property (nonatomic, retain) NSString *hostAppName;
@property (nonatomic, retain) NSData *requestIdentifier;
@property (nonatomic) bool shouldPrompt;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (bool)hasAppBundleIdentifier;
- (bool)hasErrorDescription;
- (bool)hasHostAppName;
- (bool)hasRequestIdentifier;
- (bool)hasShouldPrompt;
- (unsigned long long)hash;
- (id)hostAppName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setHasShouldPrompt:(bool)arg1;
- (void)setHostAppName:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setShouldPrompt:(bool)arg1;
- (bool)shouldPrompt;
- (void)writeTo:(id)arg1;

@end
