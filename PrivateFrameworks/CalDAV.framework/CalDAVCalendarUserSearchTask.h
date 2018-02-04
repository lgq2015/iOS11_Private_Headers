/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask {
    bool  _findAttendees;
    bool  _findGroups;
    bool  _findLocations;
    bool  _findResources;
    bool  _findUsers;
    unsigned long long  _resultLimit;
    NSSet * _searchStrings;
}

@property (nonatomic) bool findAttendees;
@property bool findGroups;
@property (nonatomic) bool findLocations;
@property bool findResources;
@property bool findUsers;
@property (nonatomic) unsigned long long resultLimit;
@property (nonatomic, retain) NSSet *searchStrings;

+ (bool)tokensAreLegal:(id)arg1;

- (void).cxx_destruct;
- (id)extraAttributes;
- (bool)findAttendees;
- (bool)findGroups;
- (bool)findLocations;
- (bool)findResources;
- (bool)findUsers;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithSearchStrings:(id)arg1 atURL:(id)arg2;
- (id)requestBody;
- (unsigned long long)resultLimit;
- (id)searchItems;
- (id)searchStrings;
- (void)setFindAttendees:(bool)arg1;
- (void)setFindGroups:(bool)arg1;
- (void)setFindLocations:(bool)arg1;
- (void)setFindResources:(bool)arg1;
- (void)setFindUsers:(bool)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setSearchStrings:(id)arg1;

@end
