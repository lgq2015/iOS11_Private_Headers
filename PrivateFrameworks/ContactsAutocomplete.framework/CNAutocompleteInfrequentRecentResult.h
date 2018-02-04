/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteInfrequentRecentResult : CNAutocompleteRecentResult {
    unsigned long long  _dateCount;
}

@property unsigned long long dateCount;

+ (unsigned long long)category;
+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5;
+ (id)groupResultWithDisplayName:(id)arg1 dateCount:(unsigned long long)arg2 date:(id)arg3;

- (unsigned long long)dateCount;
- (void)setDateCount:(unsigned long long)arg1;

@end
