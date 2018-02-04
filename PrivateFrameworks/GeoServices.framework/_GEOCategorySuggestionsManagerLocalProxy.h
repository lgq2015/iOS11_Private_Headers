/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOCategorySuggestionsManagerLocalProxy : NSObject <GEOCategorySuggestionsManagerServerProxy> {
    int  _urlsChangedToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_updateIfNecessary;
- (void)dealloc;
- (id)init;
- (void)updateCachedSpotlightCategorySuggestions:(id /* block */)arg1;

@end
