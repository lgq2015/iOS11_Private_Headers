/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSearchFieldConfiguration : NSObject <NSCopying> {
    NSString * _cancelString;
    SUClientInterface * _clientInterface;
    struct __CFDictionary { } * _hintURLs;
    long long  _location;
    NSString * _placeholder;
    bool  _rootViewOnly;
    struct __CFDictionary { } * _searchURLs;
    NSString * _userDefaultsKey;
    double  _width;
    double  _widthLandscape;
    double  _widthPortrait;
}

@property (nonatomic, readonly) NSString *cancelString;
@property (nonatomic, readonly) long long location;
@property (nonatomic, readonly) NSString *placeholderString;
@property (getter=isRootViewOnly, nonatomic, readonly) bool rootViewOnly;
@property (nonatomic, readonly) NSString *userDefaultsKey;
@property (nonatomic, readonly) double width;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithClientInterface:(id)arg1;

- (id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(long long)arg2;
- (id)_initWithClientInterface:(id)arg1;
- (long long)_locationForString:(id)arg1;
- (id)_newQueryStringDictionaryForNetworkType:(long long)arg1;
- (struct __CFDictionary { }*)_newURLsDictionaryWithDictionary:(id)arg1;
- (void)_setHintURLsFromDictionary:(id)arg1;
- (void)_setSearchURLsFromDictionary:(id)arg1;
- (id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(long long)arg2;
- (id)cancelString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)hintsURLRequestPropertiesForNetworkType:(long long)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 clientInterface:(id)arg2;
- (bool)isRootViewOnly;
- (void)loadFromDictionary:(id)arg1;
- (long long)location;
- (id)placeholderString;
- (id)searchURLRequestPropertiesForNetworkType:(long long)arg1;
- (id)userDefaultsKey;
- (double)width;
- (double)widthForOrientation:(long long)arg1;

@end
