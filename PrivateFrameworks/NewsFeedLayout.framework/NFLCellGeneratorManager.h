/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLCellGeneratorManager : NSObject {
    NFLFeedSettings * _feedSettings;
    NFLCellGenerator * _gapCellGenerator;
    NFLCellGenerator * _imageOnSideAccessibilityCellGenerator;
    NFLCellGenerator * _imageOnSideCellGenerator;
    NFLCellGenerator * _imageOnTopCellGenerator;
    NFLCellGenerator * _noImageCellGenerator;
    NFLCellGenerator * _pickYourFavoritesCellGenerator;
    NFLCellGenerator * _premiumCellGenerator;
    NFLCellGenerator * _siriSuggestionsCellGenerator;
    NFLCellGenerator * _trendingCellGenerator;
}

@property (nonatomic) NFLFeedSettings *feedSettings;
@property (nonatomic, retain) NFLCellGenerator *gapCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *imageOnSideAccessibilityCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *imageOnSideCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *imageOnTopCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *noImageCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *pickYourFavoritesCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *premiumCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *siriSuggestionsCellGenerator;
@property (nonatomic, retain) NFLCellGenerator *trendingCellGenerator;

+ (id)cellGeneratorWithFeedSettings:(id)arg1;

- (void).cxx_destruct;
- (id)cellGeneratorForCellType:(long long)arg1;
- (id)cellGeneratorsForCellType:(long long)arg1;
- (id)feedSettings;
- (id)gapCellGenerator;
- (id)imageOnSideAccessibilityCellGenerator;
- (id)imageOnSideCellGenerator;
- (id)imageOnTopCellGenerator;
- (id)noImageCellGenerator;
- (id)pickYourFavoritesCellGenerator;
- (id)premiumCellGenerator;
- (void)setFeedSettings:(id)arg1;
- (void)setGapCellGenerator:(id)arg1;
- (void)setImageOnSideAccessibilityCellGenerator:(id)arg1;
- (void)setImageOnSideCellGenerator:(id)arg1;
- (void)setImageOnTopCellGenerator:(id)arg1;
- (void)setNoImageCellGenerator:(id)arg1;
- (void)setPickYourFavoritesCellGenerator:(id)arg1;
- (void)setPremiumCellGenerator:(id)arg1;
- (void)setSiriSuggestionsCellGenerator:(id)arg1;
- (void)setTrendingCellGenerator:(id)arg1;
- (id)siriSuggestionsCellGenerator;
- (id)trendingCellGenerator;

@end
