/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTodo : ICSCalendarItem

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (nonatomic, retain) ICSDate *completed;
@property (retain) NSArray *conferences;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (nonatomic, retain) ICSDate *due;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property (nonatomic) long long percentComplete;
@property unsigned long long priority;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property unsigned long long sequence;
@property int status;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property (nonatomic, retain) NSArray *x_apple_activity;
@property (nonatomic, retain) NSData *x_apple_appLinkData;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property bool x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property (nonatomic) unsigned long long x_apple_sort_order;
@property (retain) ICSStructuredLocation *x_apple_structured_location;

+ (id)name;

- (id)completed;
- (id)due;
- (void)fixComponent;
- (long long)percentComplete;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)setCompleted:(id)arg1;
- (void)setDue:(id)arg1;
- (void)setPercentComplete:(long long)arg1;
- (void)setX_apple_activity:(id)arg1;
- (void)setX_apple_appLinkData:(id)arg1;
- (void)setX_apple_sort_order:(unsigned long long)arg1;
- (bool)validate:(id*)arg1;
- (id)x_apple_activity;
- (id)x_apple_appLinkData;
- (unsigned long long)x_apple_sort_order;

@end
