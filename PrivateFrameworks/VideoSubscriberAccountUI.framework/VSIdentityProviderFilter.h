/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderFilter : NSObject {
    NSArray * _allIdentityProviders;
    NSString * _searchQuery;
    NSArray * _supportedAccountProviderIDs;
}

@property (nonatomic, copy) NSArray *allIdentityProviders;
@property (nonatomic, readonly, copy) NSArray *filteredIdentityProviders;
@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic, copy) NSArray *supportedAccountProviderIDs;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;

- (void).cxx_destruct;
- (id)allIdentityProviders;
- (id)filteredIdentityProviders;
- (id)init;
- (id)searchQuery;
- (void)setAllIdentityProviders:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSupportedAccountProviderIDs:(id)arg1;
- (id)supportedAccountProviderIDs;

@end
