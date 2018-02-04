/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying> {
    bool  _canDisplayCaptions;
    struct { 
        unsigned int senderLanguages : 1; 
        unsigned int canDisplayCaptions : 1; 
    }  _has;
    unsigned int  _senderLanguages;
}

@property (nonatomic) bool canDisplayCaptions;
@property (nonatomic) bool hasCanDisplayCaptions;
@property (nonatomic) bool hasSenderLanguages;
@property (nonatomic) unsigned int senderLanguages;

- (bool)canDisplayCaptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCanDisplayCaptions;
- (bool)hasSenderLanguages;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)senderLanguages;
- (void)setCanDisplayCaptions:(bool)arg1;
- (void)setHasCanDisplayCaptions:(bool)arg1;
- (void)setHasSenderLanguages:(bool)arg1;
- (void)setSenderLanguages:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
