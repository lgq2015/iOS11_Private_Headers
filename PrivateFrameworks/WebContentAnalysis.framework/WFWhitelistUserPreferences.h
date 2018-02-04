/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFWhitelistUserPreferences : NSObject {
    bool  alwaysAllowHTTPS;
    WFWhitelistSiteBuffer * filterBlacklist;
    bool  filterEnabled;
    WFWhitelistSiteBuffer * filterWhitelist;
    NSString * username;
    WFWhitelistSiteBuffer * webWhitelist;
    bool  whitelistEnabled;
}

@property bool alwaysAllowHTTPS;
@property (readonly) WFWhitelistSiteBuffer *filterBlacklist;
@property bool filterEnabled;
@property (readonly) WFWhitelistSiteBuffer *filterWhitelist;
@property (retain) NSString *username;
@property (readonly) WFWhitelistSiteBuffer *webWhitelist;
@property bool whitelistEnabled;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2;
+ (bool)_isURLMetasite:(id)arg1;
+ (id)_metasiteDomainNamesArray;
+ (id)_modificationDateForFileAtPath:(id)arg1;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)defaultWhitelistForUser:(id)arg1;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;
+ (id)preferencesPathForUsername:(id)arg1;
+ (id)whitelistForUser:(id)arg1;
+ (id)whitelistWithPreferences:(id)arg1;

- (bool)alwaysAllowHTTPS;
- (void)dealloc;
- (id)description;
- (id)filterBlacklist;
- (bool)filterEnabled;
- (id)filterWhitelist;
- (id)init;
- (id)initWithPreferences:(id)arg1;
- (bool)isURL:(id)arg1 onList:(id)arg2;
- (bool)isURLAllowed:(id)arg1;
- (bool)isURLAllowed:(id)arg1 reason:(id*)arg2 shouldFilter:(bool*)arg3 foundOnList:(bool*)arg4;
- (id)pronounceOnPageURLString:(id)arg1 shouldFilter:(bool*)arg2;
- (void)setAlwaysAllowHTTPS:(bool)arg1;
- (void)setFilterEnabled:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setWhitelistEnabled:(bool)arg1;
- (id)username;
- (id)webWhitelist;
- (bool)whitelistEnabled;

@end
