/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCModifyReadingListCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithReadingListEntries:(id)arg1 merge:(bool)arg2;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
