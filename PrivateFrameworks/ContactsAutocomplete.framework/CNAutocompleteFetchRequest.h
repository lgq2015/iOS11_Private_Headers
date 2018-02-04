/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteFetchRequest : NSObject <NSCopying> {
    CNAutocompleteFetchContext * _fetchContext;
    bool  _includeCalendarServers;
    bool  _includeContacts;
    bool  _includeDirectoryServers;
    bool  _includePredictions;
    bool  _includeRecents;
    bool  _includeSuggestions;
    NSString * _priorityDomainForSorting;
    NSString * _searchString;
    unsigned long long  _searchType;
}

@property (copy) CNAutocompleteFetchContext *fetchContext;
@property bool includeCalendarServers;
@property bool includeContacts;
@property bool includeDirectoryServers;
@property bool includePredictions;
@property bool includeRecents;
@property bool includeServers;
@property bool includeSuggestions;
@property (copy) NSString *priorityDomainForSorting;
@property (copy) NSString *searchString;
@property unsigned long long searchType;
@property (readonly) NSArray *searchableProperties;
@property (copy) NSString *sendingAddress;

+ (id)request;
+ (id)searchablePropertiesForSearchType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)executeWithDelegate:(id)arg1;
- (id)fetchContext;
- (unsigned long long)hash;
- (bool)includeCalendarServers;
- (bool)includeContacts;
- (id)includeDebugString;
- (bool)includeDirectoryServers;
- (bool)includePredictions;
- (bool)includeRecents;
- (bool)includeServers;
- (bool)includeSuggestions;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)priorityDomainForSorting;
- (id)searchString;
- (unsigned long long)searchType;
- (id)searchTypeDebugString;
- (id)searchableProperties;
- (id)sendingAddress;
- (void)setFetchContext:(id)arg1;
- (void)setIncludeCalendarServers:(bool)arg1;
- (void)setIncludeContacts:(bool)arg1;
- (void)setIncludeDirectoryServers:(bool)arg1;
- (void)setIncludePredictions:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeServers:(bool)arg1;
- (void)setIncludeSuggestions:(bool)arg1;
- (void)setPriorityDomainForSorting:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchType:(unsigned long long)arg1;
- (void)setSendingAddress:(id)arg1;

@end
