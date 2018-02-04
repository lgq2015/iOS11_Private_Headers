/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
    bool  _fetchSharees;
}

@property (nonatomic) bool fetchSharees;

- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (id)containerForURL:(id)arg1;
- (bool)fetchSharees;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;
- (void)setFetchSharees:(bool)arg1;

@end
