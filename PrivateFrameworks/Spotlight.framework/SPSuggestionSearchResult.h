/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPSuggestionSearchResult : SFSearchResult_SpotlightExtras {
    SFSearchSuggestion * _suggestion;
}

@property (nonatomic, readonly) SFSearchSuggestion *suggestion;

+ (id)_richDisplayTextForSuggestion:(id)arg1 forQuery:(id)arg2;

- (void).cxx_destruct;
- (id)initWithSearchSuggestion:(id)arg1 forQuery:(id)arg2;
- (id)suggestion;

@end
