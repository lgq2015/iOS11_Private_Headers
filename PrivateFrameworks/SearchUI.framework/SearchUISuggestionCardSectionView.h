/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISuggestionCardSectionView : SearchUICardSectionView {
    SearchUIImageView * _iconView;
    TLKEmojiableVibrantLabel * _suggestionLabel;
}

@property (retain) NUIContainerStackView *contentView;
@property (retain) SearchUIImageView *iconView;
@property (retain) TLKEmojiableVibrantLabel *suggestionLabel;

+ (id)_imageForSuggestion:(id)arg1 withStyle:(unsigned long long)arg2;
+ (id)suggestedContactIconWithStyle:(unsigned long long)arg1;
+ (id)suggestedQueryIconWithStyle:(unsigned long long)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)setSuggestionLabel:(id)arg1;
- (id)setupContentView;
- (id)suggestionLabel;
- (void)updateWithCardSection:(id)arg1;

@end
