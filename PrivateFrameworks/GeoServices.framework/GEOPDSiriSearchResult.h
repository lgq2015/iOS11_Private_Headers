/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSiriSearchResult : PBCodable <NSCopying> {
    NSMutableArray * _disambiguationLabels;
    struct { 
        unsigned int isChainResultSet : 1; 
    }  _has;
    bool  _isChainResultSet;
    NSMutableArray * _resultDetourInfos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) NSMutableArray *resultDetourInfos;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)disambiguationLabelType;
+ (Class)resultDetourInfoType;

- (void).cxx_destruct;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)clearResultDetourInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (bool)hasIsChainResultSet;
- (unsigned long long)hash;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (id)resultDetourInfos;
- (unsigned long long)resultDetourInfosCount;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setResultDetourInfos:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
