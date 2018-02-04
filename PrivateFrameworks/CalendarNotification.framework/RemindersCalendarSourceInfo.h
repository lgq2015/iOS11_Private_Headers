/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface RemindersCalendarSourceInfo : NSObject {
    NSMutableArray * _array;
    EKSource * _source;
}

@property (readonly) NSMutableArray *calendarArray;

+ (id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(bool)arg2;

- (void).cxx_destruct;
- (bool)_isNonEmpty;
- (id)calendarArray;
- (bool)canAddList;
- (bool)canDeleteList;
- (id)initWithSource:(id)arg1;
- (bool)shouldShowWhenEditingLists;
- (bool)shouldShowWhenViewingLists;
- (int)sortOrder;
- (id)source;
- (id)title;

@end
