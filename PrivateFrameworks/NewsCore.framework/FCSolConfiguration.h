/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolConfiguration : NSObject {
    long long  _heuristicOption;
    unsigned long long  _heuristicSampleSize;
    unsigned long long  _maxArticleCombos;
    double  _optionalTagSpecificityScore;
    double  _searchBranchDecay;
    unsigned long long  _searchBranchMultiplier;
    double  _searchTimeLimit;
    double  _tagArticleScoreCoeff;
    double  _tagAutoFavoritedCoeff;
    double  _tagFavoritedCoeff;
    double  _tagGroupableCoeff;
    double  _tagPersonalizationCoeff;
    double  _tagSizeCoeff;
    double  _tagSpecificityCoeff;
}

@property (nonatomic, readonly) long long heuristicOption;
@property (nonatomic, readonly) unsigned long long heuristicSampleSize;
@property (nonatomic, readonly) unsigned long long maxArticleCombos;
@property (nonatomic, readonly) double optionalTagSpecificityScore;
@property (nonatomic, readonly) double searchBranchDecay;
@property (nonatomic, readonly) unsigned long long searchBranchMultiplier;
@property (nonatomic, readonly) double searchTimeLimit;
@property (nonatomic, readonly) double tagArticleScoreCoeff;
@property (nonatomic, readonly) double tagAutoFavoritedCoeff;
@property (nonatomic, readonly) double tagFavoritedCoeff;
@property (nonatomic, readonly) double tagGroupableCoeff;
@property (nonatomic, readonly) double tagPersonalizationCoeff;
@property (nonatomic, readonly) double tagSizeCoeff;
@property (nonatomic, readonly) double tagSpecificityCoeff;

+ (id)configurationWithTreatment:(id)arg1 deviceIsiPad:(bool)arg2;

- (long long)heuristicOption;
- (unsigned long long)heuristicSampleSize;
- (id)initWithHeuristicSampleSize:(unsigned long long)arg1 searchBranchMultiplier:(unsigned long long)arg2 searchBranchDecay:(double)arg3 searchTimeLimit:(double)arg4 tagSizeCoeff:(double)arg5 tagFavoritedCoeff:(double)arg6 tagAutoFavoritedCoeff:(double)arg7 tagGroupableCoeff:(double)arg8 tagArticleScoreCoeff:(double)arg9 tagPersonalizationCoeff:(double)arg10 tagSpecificityCoeff:(double)arg11 optionalTagSpecificityScore:(double)arg12 heuristicOption:(long long)arg13;
- (unsigned long long)maxArticleCombos;
- (double)optionalTagSpecificityScore;
- (double)searchBranchDecay;
- (unsigned long long)searchBranchMultiplier;
- (double)searchTimeLimit;
- (double)tagArticleScoreCoeff;
- (double)tagAutoFavoritedCoeff;
- (double)tagFavoritedCoeff;
- (double)tagGroupableCoeff;
- (double)tagPersonalizationCoeff;
- (double)tagSizeCoeff;
- (double)tagSpecificityCoeff;

@end
