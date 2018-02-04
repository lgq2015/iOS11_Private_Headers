/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADConfiguration : PBCodable <NSCopying> {
    NSString * _baseUrl;
    NSString * _bundleId;
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
        unsigned int requestType : 1; 
        unsigned int isTest : 1; 
    }  _has;
    bool  _isTest;
    int  _requestType;
}

@property (nonatomic, retain) NSString *baseUrl;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) double expirationDate;
@property (nonatomic, readonly) bool hasBaseUrl;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic) bool hasIsTest;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool isTest;
@property (nonatomic) int requestType;

- (void).cxx_destruct;
- (id)baseUrl;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasBaseUrl;
- (bool)hasBundleId;
- (bool)hasExpirationDate;
- (bool)hasIsTest;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTest;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (void)setBaseUrl:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setHasIsTest:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setIsTest:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
