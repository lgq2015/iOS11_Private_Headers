/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariSafeBrowsingWarningShownEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int provider : 1; 
    }  _has;
    int  _provider;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasProvider;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int provider;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsProvider:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProvider;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)provider;
- (id)providerAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasProvider:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProvider:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
