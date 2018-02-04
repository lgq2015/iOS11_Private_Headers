/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask {
    NSString * _maskedUID;
}

@property (nonatomic, retain) NSString *maskedUID;

+ (id)_freeBusyDocumentWithOrganizer:(id)arg1 attendees:(id)arg2 start:(id)arg3 end:(id)arg4 maskedUID:(id)arg5 extendedFreeBusy:(bool)arg6 prodID:(id)arg7;
+ (id)_icsDate:(id)arg1 calendar:(id)arg2;

- (void).cxx_destruct;
- (id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7;
- (id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7 extendedFreeBusy:(bool)arg8 prodID:(id)arg9;
- (id)maskedUID;
- (void)setMaskedUID:(id)arg1;

@end
