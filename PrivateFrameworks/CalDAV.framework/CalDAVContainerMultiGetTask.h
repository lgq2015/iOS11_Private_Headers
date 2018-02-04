/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
    bool  _getScheduleChanges;
    bool  _getScheduleTags;
}

@property (nonatomic) bool getScheduleChanges;
@property (nonatomic) bool getScheduleTags;

- (id)copyAdditionalPropElements;
- (bool)getScheduleChanges;
- (bool)getScheduleTags;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(bool)arg3 getScheduleChanges:(bool)arg4;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(bool)arg3 getScheduleChanges:(bool)arg4 appSpecificCalendarItemClass:(Class)arg5;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (void)setGetScheduleChanges:(bool)arg1;
- (void)setGetScheduleTags:(bool)arg1;

@end
