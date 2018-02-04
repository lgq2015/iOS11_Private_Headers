/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _transparent;
}

@property (nonatomic, readonly) bool isScheduleTransparent;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *transparent;

- (void).cxx_destruct;
- (id)copyParseRules;
- (bool)isScheduleTransparent;
- (void)setTransparent:(id)arg1;
- (id)transparent;

@end
