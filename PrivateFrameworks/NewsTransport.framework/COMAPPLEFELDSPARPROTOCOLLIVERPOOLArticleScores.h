/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying> {
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * _globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * _sourceChannelCohorts;
    NSMutableArray * _topicCohorts;
}

@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) bool hasGlobalCohorts;
@property (nonatomic, readonly) bool hasSourceChannelCohorts;
@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts;
@property (nonatomic, retain) NSMutableArray *topicCohorts;

+ (Class)topicCohortsType;

- (void).cxx_destruct;
- (void)addTopicCohorts:(id)arg1;
- (void)clearTopicCohorts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)globalCohorts;
- (bool)hasGlobalCohorts;
- (bool)hasSourceChannelCohorts;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGlobalCohorts:(id)arg1;
- (void)setSourceChannelCohorts:(id)arg1;
- (void)setTopicCohorts:(id)arg1;
- (id)sourceChannelCohorts;
- (id)topicCohorts;
- (id)topicCohortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicCohortsCount;
- (void)writeTo:(id)arg1;

@end
