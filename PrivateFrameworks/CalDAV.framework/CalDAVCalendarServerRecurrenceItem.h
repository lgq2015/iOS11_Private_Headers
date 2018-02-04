/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {
    CalDAVCalendarServerChangesItem * _changes;
    CoreDAVItemWithNoChildren * _master;
    CoreDAVLeafItem * _recurrenceID;
}

@property (nonatomic, retain) CalDAVCalendarServerChangesItem *changes;
@property (nonatomic, readonly) bool isMaster;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *master;
@property (nonatomic, retain) CoreDAVLeafItem *recurrenceID;

- (void).cxx_destruct;
- (id)changes;
- (id)copyParseRules;
- (id)init;
- (bool)isMaster;
- (id)master;
- (id)recurrenceID;
- (void)setChanges:(id)arg1;
- (void)setMaster:(id)arg1;
- (void)setRecurrenceID:(id)arg1;

@end
