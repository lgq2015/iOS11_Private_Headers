/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLComponents : NSObject <NSCopying>

@property (readonly, copy) NSURL *URL;
@property (copy) NSString *fragment;
@property (copy) NSString *host;
@property (copy) NSString *password;
@property (copy) NSString *path;
@property (copy) NSString *percentEncodedFragment;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSArray *percentEncodedQueryItems;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSNumber *port;
@property (copy) NSString *query;
@property (copy) NSArray *queryItems;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfFragment;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfHost;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfPassword;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfPath;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfPort;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfQuery;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfScheme;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfUser;
@property (copy) NSString *scheme;
@property (readonly, copy) NSString *string;
@property (copy) NSString *user;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)componentsWithString:(id)arg1;
+ (id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(bool)arg2;

- (id)URL;
- (id)URLRelativeToURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fragment;
- (id)host;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(bool)arg2;
- (id)password;
- (id)path;
- (id)percentEncodedFragment;
- (id)percentEncodedHost;
- (id)percentEncodedPassword;
- (id)percentEncodedPath;
- (id)percentEncodedQuery;
- (id)percentEncodedQueryItems;
- (id)percentEncodedUser;
- (id)port;
- (id)query;
- (id)queryItems;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfFragment;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfHost;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfPassword;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfPort;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfQuery;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfScheme;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUser;
- (id)scheme;
- (void)setFragment:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPercentEncodedFragment:(id)arg1;
- (void)setPercentEncodedHost:(id)arg1;
- (void)setPercentEncodedPassword:(id)arg1;
- (void)setPercentEncodedPath:(id)arg1;
- (void)setPercentEncodedQuery:(id)arg1;
- (void)setPercentEncodedQueryItems:(id)arg1;
- (void)setPercentEncodedUser:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setUser:(id)arg1;
- (id)string;
- (id)user;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_normalizedURLStringForDeepLinkIngest;
- (id)parsec_normalizedURLStringForDeepLinkWhitelist;
- (id)parsec_normalizedURLStringForLDAModel;
- (id)parsec_normalizedURLStringForTLDFeatures;
- (id)parsec_normalizedURLStringWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

- (id)fa_queryItemsDictionary;
- (id)fa_valueForQueryItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)geo_updateQueryItemsWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (bool)ic_boolValueForQueryItemWithKey:(id)arg1;
- (id)ic_queryItemWithKey:(id)arg1;
- (id)ic_stringValueForQueryItemWithKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices

- (id)rms_componentsByAddingQueryParameters:(id)arg1;
- (id)rms_componentsByAddingQueryParameters:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (bool)containsQueryItemWithName:(id)arg1;
- (id)firstQueryItemWithName:(id)arg1;

@end
