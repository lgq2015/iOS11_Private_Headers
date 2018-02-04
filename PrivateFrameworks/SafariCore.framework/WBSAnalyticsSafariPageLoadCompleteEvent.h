/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable <NSCopying> {
    unsigned long long  _configurationID;
    long long  _errorCode;
    struct { 
        unsigned int configurationID : 1; 
        unsigned int errorCode : 1; 
        unsigned int pageID : 1; 
        unsigned int pageLoadTime : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _pageID;
    unsigned long long  _pageLoadTime;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long configurationID;
@property (nonatomic) long long errorCode;
@property (nonatomic) bool hasConfigurationID;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasPageID;
@property (nonatomic) bool hasPageLoadTime;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long pageID;
@property (nonatomic) unsigned long long pageLoadTime;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)configurationID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (bool)hasConfigurationID;
- (bool)hasErrorCode;
- (bool)hasPageID;
- (bool)hasPageLoadTime;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)pageID;
- (unsigned long long)pageLoadTime;
- (bool)readFrom:(id)arg1;
- (void)setConfigurationID:(unsigned long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setHasConfigurationID:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasPageID:(bool)arg1;
- (void)setHasPageLoadTime:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPageID:(unsigned long long)arg1;
- (void)setPageLoadTime:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
