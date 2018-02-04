/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreCorrectionPronunciation : PBCodable <NSCopying> {
    NSString * _apgId;
    NSData * _asrPronunciationData;
    struct { 
        unsigned int tokenOffset : 1; 
    }  _has;
    NSString * _language;
    NSString * _orthography;
    int  _tokenOffset;
    NSMutableArray * _ttsPronunciations;
    NSString * _ttsVersion;
}

@property (nonatomic, retain) NSString *apgId;
@property (nonatomic, retain) NSData *asrPronunciationData;
@property (nonatomic, readonly) bool hasApgId;
@property (nonatomic, readonly) bool hasAsrPronunciationData;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasOrthography;
@property (nonatomic) bool hasTokenOffset;
@property (nonatomic, readonly) bool hasTtsVersion;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *orthography;
@property (nonatomic) int tokenOffset;
@property (nonatomic, retain) NSMutableArray *ttsPronunciations;
@property (nonatomic, retain) NSString *ttsVersion;

+ (Class)ttsPronunciationsType;

- (void).cxx_destruct;
- (void)addTtsPronunciations:(id)arg1;
- (id)apgId;
- (id)asrPronunciationData;
- (void)clearTtsPronunciations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApgId;
- (bool)hasAsrPronunciationData;
- (bool)hasLanguage;
- (bool)hasOrthography;
- (bool)hasTokenOffset;
- (bool)hasTtsVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (id)orthography;
- (bool)readFrom:(id)arg1;
- (void)setApgId:(id)arg1;
- (void)setAsrPronunciationData:(id)arg1;
- (void)setHasTokenOffset:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setTokenOffset:(int)arg1;
- (void)setTtsPronunciations:(id)arg1;
- (void)setTtsVersion:(id)arg1;
- (int)tokenOffset;
- (id)ttsPronunciations;
- (id)ttsPronunciationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)ttsPronunciationsCount;
- (id)ttsVersion;
- (void)writeTo:(id)arg1;

@end