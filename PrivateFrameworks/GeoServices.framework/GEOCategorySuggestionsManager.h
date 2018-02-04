/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCategorySuggestionsManager : NSObject {
    <GEOCategorySuggestionsManagerServerProxy> * _serverProxy;
}

+ (void)setUseLocalProxy:(bool)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3;
- (id)_spotlightCategorySuggestionsForResponse:(id)arg1;
- (void)fetchSpotlightCategorySuggestions:(id /* block */)arg1;
- (id)init;
- (void)updateCachedSpotlightCategorySuggestions:(id /* block */)arg1;

@end
