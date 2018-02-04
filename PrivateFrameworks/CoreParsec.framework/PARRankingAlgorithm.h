/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankingAlgorithm : NSObject {
    bool  _enableSectionRanking;
    PARModelWeights * _modelWeights;
    PARRankingLogic * _rankingLogic;
    PARRankingThresholds * _rankingThresholds;
    int  _section;
    long long  _sectionMaxResults;
    NSString * _version;
}

@property (nonatomic) bool enableSectionRanking;
@property (nonatomic, retain) PARModelWeights *modelWeights;
@property (nonatomic, retain) PARRankingLogic *rankingLogic;
@property (nonatomic, retain) PARRankingThresholds *rankingThresholds;
@property (nonatomic) int section;
@property (nonatomic) long long sectionMaxResults;
@property (nonatomic, retain) NSString *version;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (void).cxx_destruct;
- (bool)enableSectionRanking;
- (id)modelWeights;
- (id)rankingLogic;
- (id)rankingThresholds;
- (int)section;
- (long long)sectionMaxResults;
- (void)setEnableSectionRanking:(bool)arg1;
- (void)setModelWeights:(id)arg1;
- (void)setRankingLogic:(id)arg1;
- (void)setRankingThresholds:(id)arg1;
- (void)setSection:(int)arg1;
- (void)setSectionMaxResults:(long long)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
