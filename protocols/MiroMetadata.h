/* made by EzioChiu.
 */

@protocol MiroMetadata <NSObject>

@required

- (MiroVPIrisRecommendedMetadataRange *)miro_IrisUsableRange;
- (bool)miro_IrisVideoUsable;
- (double)miro_IrisVideoUsableDuration;
- (NSArray *)miro_allRanges;
- (long long)miro_analysisVersion;
- (void)miro_deleteRangesWithType:(unsigned long long)arg1;
- (unsigned long long)miro_faceCount;
- (unsigned long long)miro_flags;
- (MiroAnalysisInfo *)miro_ingestServerSideAnalysisResults:(bool*)arg1;
- (bool)miro_isBlacklisted;
- (bool)miro_isJunk;
- (unsigned long long)miro_performedAnalysisTypes;
- (NSArray *)miro_rangesWithType:(unsigned long long)arg1;
- (double)miro_score;
- (void)miro_setRanges:(NSArray *)arg1 replaceType:(unsigned long long)arg2;
- (NSArray *)miro_transientRangesWithType:(unsigned long long)arg1;
- (unsigned long long)miro_voiceCount;

@end
